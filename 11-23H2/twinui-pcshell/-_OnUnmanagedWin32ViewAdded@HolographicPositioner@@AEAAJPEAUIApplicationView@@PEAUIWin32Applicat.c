/*
 * XREFs of ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180153188
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180152FD0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180153204 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1804AE684 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
 */

__int64 __fastcall HolographicPositioner::_OnUnmanagedWin32ViewAdded(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  __int64 v3; // rax
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v11 = 6;
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(v3 + 400))(a2, &v11) < 0 )
    return 0LL;
  if ( v11 != 1 )
  {
    if ( HolographicPositioner::_IsDisplayContextHolographic(this)
      && HolographicPositioner::_IsViewWin32Slate((void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2, v11) )
    {
      v8 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(this, a2, a3, 1);
      if ( v8 < 0 )
      {
        v9 = 2270LL;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 32) + 24LL))(
         *((_QWORD *)this + 32),
         a2,
         5LL);
  if ( v8 >= 0 )
    return 0LL;
  v9 = 2262LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}

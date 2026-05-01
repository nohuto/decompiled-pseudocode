/*
 * XREFs of ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x18009EC04
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009CA90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x18009B388 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x1803D17A8 (-_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32.c)
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
      && HolographicPositioner::_IsViewWin32Slate((__int64)a2, v11) )
    {
      v8 = HolographicPositioner::_EvaluateTakingControlOfWin32Slate(this, a2, a3, 1);
      if ( v8 < 0 )
      {
        v9 = 2282LL;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 33) + 24LL))(
         *((_QWORD *)this + 33),
         a2,
         5LL);
  if ( v8 >= 0 )
    return 0LL;
  v9 = 2274LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}

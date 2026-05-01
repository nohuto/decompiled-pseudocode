/*
 * XREFs of ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180125C90
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18003CE4C (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180125850 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_IsViewManaged(CDesktopPositioner *this, struct IApplicationView *a2, bool *a3)
{
  __int64 (__fastcall *v5)(struct IApplicationView *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  v6 = v5(a2, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6,
      v9);
  }
  else
  {
    *a3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) == 0;
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v7;
}

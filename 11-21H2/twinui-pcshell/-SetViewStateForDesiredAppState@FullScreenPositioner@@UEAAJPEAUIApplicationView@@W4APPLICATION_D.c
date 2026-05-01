/*
 * XREFs of ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180320930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1800F2578 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F19C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::SetViewStateForDesiredAppState(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64),
        unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 != 2 )
  {
    if ( a3 > 1 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3EA,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)0x8000FFFFLL);
      return v6;
    }
    v8 = (a3 != 0) + 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>((ApplicationViewOperation **)&ppvOut);
    if ( ppvOut )
    {
      *((_DWORD *)ppvOut + 20) = v8;
      v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*a2)[40])(a2);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v6 = 0;
        goto LABEL_17;
      }
      v9 = (unsigned int)v11;
      v10 = 998LL;
    }
    else
    {
      v6 = -2147024882;
      v9 = 2147942414LL;
      v10 = 996LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)v9);
LABEL_17:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&ppvOut);
    return v6;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         *(IUnknown **)(a1 - 88),
         &stru_1806D64E0,
         &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = ApplicationViewHelpers::CloseView(a2, (__int64)ppvOut, 8LL, 9, 22);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v7 = 988LL;
  }
  else
  {
    v7 = 986LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}

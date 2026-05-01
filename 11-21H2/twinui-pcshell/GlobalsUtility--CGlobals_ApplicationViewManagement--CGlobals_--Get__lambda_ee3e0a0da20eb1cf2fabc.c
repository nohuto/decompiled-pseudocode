/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x1800ECE58
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800ECBD0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18015F250 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180312210 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ED400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  result = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v6);
  v3 = v6;
  if ( v6 )
  {
    v4 = *(_QWORD *)(v6 + 48);
    v5 = *(_QWORD *)(v4 + 744);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v4 + 744));
    v7 = 0LL;
    v6 = *a1;
    *a1 = v5;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release(v3);
  }
  return result;
}

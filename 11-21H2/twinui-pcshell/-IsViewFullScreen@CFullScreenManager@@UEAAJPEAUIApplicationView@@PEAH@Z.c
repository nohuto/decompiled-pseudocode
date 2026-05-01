/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180053B00
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180053A60 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322110 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1803223E0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPositionerPriority@@XZ @ 0x1800340AC (-ReleaseAndGetAddressOf@-$ComPtr@UIShellPositionerPriority@@@WRL@Microsoft@@QEAAPEAPEAUIShellPos.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___ @ 0x180053BE4 (ShellPositionerHelpers--PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180191064 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2, int *a3)
{
  int v3; // edi
  __int64 v6; // rax
  int (__fastcall *v8)(struct IApplicationView *, __int64 *); // rbx
  __int64 **v9; // rax
  __int64 *AddressOf; // rax
  __int64 v11; // rdx
  char v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF

  v3 = 0;
  *a3 = 0;
  v6 = *(_QWORD *)a2;
  v14 = 0LL;
  v8 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(v6 + 264);
  v9 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v14, &v13, a3);
  AddressOf = Microsoft::WRL::ComPtr<IShellPositionerPriority>::ReleaseAndGetAddressOf(*v9);
  if ( v8(a2, AddressOf) >= 0 )
  {
    LOBYTE(v11) = 1;
    v13 = 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      v11);
    ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___(*(this - 9));
    if ( !v13 )
    {
      LOBYTE(v3) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) == 3;
      *a3 = v3;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return 0LL;
}

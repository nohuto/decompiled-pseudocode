/*
 * XREFs of ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18046B3A4
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ??1UndockedSearchAppExperienceManager@@UEAA@XZ @ 0x180466528 (--1UndockedSearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18012BDA4 (-RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UndockedSearchAppExperienceManager::UnregisterViewEventDispatcherHandler(
        UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 31);
  if ( v2 && *((_QWORD *)this + 32) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    *((_QWORD *)this + 32) = 0LL;
  }
  v7 = 0LL;
  v3 = *((_QWORD *)this + 7);
  v4 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  if ( v4(v3, &IID_IImmersiveWindowMessageService, &GUID_fc62ce95_8396_401a_b74f_88df0d75e112, &v7) >= 0 )
  {
    if ( *((_DWORD *)this + 68) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      *((_DWORD *)this + 68) = 0;
    }
    if ( *((_DWORD *)this + 69) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      *((_DWORD *)this + 69) = 0;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(this);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
}

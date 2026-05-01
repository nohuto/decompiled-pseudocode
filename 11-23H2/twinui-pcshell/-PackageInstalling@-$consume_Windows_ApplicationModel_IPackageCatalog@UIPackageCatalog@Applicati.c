/*
 * XREFs of ?PackageInstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageInstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x1806E3310
 * Callers:
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3070 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4A4C (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$?0AEBUIPackageCatalog@ApplicationModel@Windows@winrt@@X@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEAA@AEBUIPackageCatalog@ApplicationModel@Windows@1@@Z @ 0x180089BF4 (--$-0AEBUIPackageCatalog@ApplicationModel@Windows@winrt@@X@-$weak_ref@UIPackageCatalog@Applicati.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_ApplicationModel_IPackageCatalog<winrt::Windows::ApplicationModel::IPackageCatalog>::PackageInstalling(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v5; // eax
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 64LL))(*a1, *a4, &v8);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  v6 = v8;
  winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>(a2);
  result = a2;
  a2[1] = v6;
  return result;
}

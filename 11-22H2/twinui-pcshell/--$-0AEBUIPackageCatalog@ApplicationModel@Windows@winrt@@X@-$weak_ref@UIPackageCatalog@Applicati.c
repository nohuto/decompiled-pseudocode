/*
 * XREFs of ??$?0AEBUIPackageCatalog@ApplicationModel@Windows@winrt@@X@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEAA@AEBUIPackageCatalog@ApplicationModel@Windows@1@@Z @ 0x180089BF4
 * Callers:
 *     ?PackageUninstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUninstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x180089B7C (-PackageUninstalling@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Applica.c)
 *     ?PackageInstalling@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageInstallingEventArgs@234@@Foundation@Windows@3@@Z @ 0x1806E3310 (-PackageInstalling@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Applicati.c)
 *     ?PackageUpdating@?$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UPackageCatalog@ApplicationModel@Windows@winrt@@UPackageUpdatingEventArgs@234@@Foundation@Windows@3@@Z @ 0x1806F42F0 (-PackageUpdating@-$consume_Windows_ApplicationModel_IPackageCatalog@UIPackageCatalog@Application.c)
 * Callees:
 *     ??$from_com_ref@AEBUIPackageCatalog@ApplicationModel@Windows@winrt@@@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@AEAAXAEBUIPackageCatalog@ApplicationModel@Windows@1@@Z @ 0x1801B13B0 (--$from_com_ref@AEBUIPackageCatalog@ApplicationModel@Windows@winrt@@@-$weak_ref@UIPackageCatalog.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>(
        _QWORD *a1)
{
  *a1 = 0LL;
  winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::from_com_ref<winrt::Windows::ApplicationModel::IPackageCatalog const &>();
  return a1;
}

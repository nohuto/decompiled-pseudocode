/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180093070
 * Callers:
 *     ??D?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWebSearchProvider@Shell@UI@WindowsUdk@2@XZ @ 0x1801E8CFC (--D-$fast_iterator@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Fou.c)
 *     ??$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@3@XZ @ 0x180214A04 (--$ActivateInstance@UUserProfilePersonalizationSettings@UserProfile@System@WindowsUdk@winrt@@@IA.c)
 *     ??D?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA?AUPackageVolume@Deployment@Management@Windows@2@XZ @ 0x180235E00 (--D-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackageVolume@Deployment@Man.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_cf08e7fff4dde67b8d19a7111b5062ba_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18023E870 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UPackageVolume@Deployment@Management@Window.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180248A84 (-await_resume@-$await_adapter@U-$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@wi.c)
 *     _lambda_3af96972622813cad57e0b9ae8d4dbe0_::operator() @ 0x18025C2B0 (_lambda_3af96972622813cad57e0b9ae8d4dbe0_--operator().c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802638C0 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?Lookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180271C00 (-Lookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windo.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180272C08 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936cfdab1ef_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18027E4F0 (-Invoke@-$delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_3455f9b640c774812c562936.c)
 *     ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_28dbd2337059dd45743c62eabeaa809f_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x180283C6C (--$-RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_28dbd2337059dd45743c62eabeaa809f_@@QEBA.c)
 *     ?GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x180706970 (-GetProviderAppInfo@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AU-$IVectorView@UAppIn.c)
 *     ?IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z @ 0x180706F84 (-IsValidRegistrationData@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEB.c)
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180716018 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180718E60 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 *     ?GetProviderAppInfoForBoot@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@56@XZ @ 0x18072DB94 (-GetProviderAppInfoForBoot@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AU-$IVectorView.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
  return (void **)this;
}

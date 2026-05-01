/*
 * XREFs of ??1SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAA@XZ @ 0x18068E6C8
 * Callers:
 *     ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x180691C08 (-TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetDisplayRegion_::_1_::dtor$0 @ 0x180691FA7 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetDispl.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805E2C64 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::~SnapFlyoutInstance_GetDisplayRegion(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

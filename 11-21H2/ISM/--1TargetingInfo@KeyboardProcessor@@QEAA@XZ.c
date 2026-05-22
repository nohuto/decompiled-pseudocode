/*
 * XREFs of ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x18019311C
 * Callers:
 *     _KeyboardProcessor::OnInputReport_::_1_::dtor$5 @ 0x180193C42 (_KeyboardProcessor--OnInputReport_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyboardProcessor::TargetingInfo::~TargetingInfo(KeyboardProcessor::TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 46);
}

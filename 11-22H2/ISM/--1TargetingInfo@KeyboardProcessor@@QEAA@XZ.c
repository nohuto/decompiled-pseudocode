/*
 * XREFs of ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x1801BEFBC
 * Callers:
 *     _KeyboardProcessor::OnInputReport_::_1_::dtor$5 @ 0x1801BFB27 (_KeyboardProcessor--OnInputReport_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall KeyboardProcessor::TargetingInfo::~TargetingInfo(KeyboardProcessor::TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 46);
}

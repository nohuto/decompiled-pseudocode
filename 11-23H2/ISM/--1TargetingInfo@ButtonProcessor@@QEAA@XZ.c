/*
 * XREFs of ??1TargetingInfo@ButtonProcessor@@QEAA@XZ @ 0x1801D80F0
 * Callers:
 *     _ButtonProcessor::OnInputReport_::_1_::dtor$2 @ 0x1801D89A1 (_ButtonProcessor--OnInputReport_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ButtonProcessor::TargetingInfo::~TargetingInfo(ButtonProcessor::TargetingInfo *this)
{
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this);
}

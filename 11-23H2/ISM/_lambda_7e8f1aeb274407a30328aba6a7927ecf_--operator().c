/*
 * XREFs of _lambda_7e8f1aeb274407a30328aba6a7927ecf_::operator() @ 0x1801B1158
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_7e8f1aeb274407a30328aba6a7927ecf___ @ 0x1801B0C8C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_KeyboardProcessor--Targ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

bool __fastcall lambda_7e8f1aeb274407a30328aba6a7927ecf_::operator()(__int64 a1, __int64 a2)
{
  bool v3; // bl

  v3 = *(_WORD *)(*(_QWORD *)a1 + 60LL) == *(_WORD *)(a2 + 60);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(a2 + 376));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a2 + 368));
  return v3;
}

/*
 * XREFs of ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801BE840
 * Callers:
 *     _std::vector_KeyboardProcessor::TargetingInfo_std::allocator_KeyboardProcessor::TargetingInfo___::_Emplace_reallocate_KeyboardProcessor::TargetingInfo_&__::_1_::catch$0 @ 0x1801BE9F1 (_std--vector_KeyboardProcessor--TargetingInfo_std--allocator_KeyboardProcessor--TargetingInfo___.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x1801BEA8C (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x1801BEF10 (--1KeyboardProcessor@@MEAA@XZ.c)
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x1801BF180 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ?_Change_array@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAXQEAUTargetingInfo@KeyboardProcessor@@_K1@Z @ 0x1801BFB3C (-_Change_array@-$vector@UTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@KeyboardPr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 46;
    do
    {
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v3 + 1);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3);
      v3 += 48;
      result = v3 - 46;
    }
    while ( v3 - 46 != a2 );
  }
  return result;
}

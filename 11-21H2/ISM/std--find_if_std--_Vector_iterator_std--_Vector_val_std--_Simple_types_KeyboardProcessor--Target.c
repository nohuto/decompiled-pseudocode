/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_8ff6b2d91b019428ca0582bb0ab092c7___ @ 0x180192D34
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193890 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x180192F80 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 */

const struct KeyboardProcessor::TargetingInfo **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_KeyboardProcessor::TargetingInfo_______lambda_8ff6b2d91b019428ca0582bb0ab092c7___(
        const struct KeyboardProcessor::TargetingInfo **a1,
        const struct KeyboardProcessor::TargetingInfo *a2,
        const struct KeyboardProcessor::TargetingInfo *a3,
        __int64 a4)
{
  const struct KeyboardProcessor::TargetingInfo *i; // r15
  __int64 v8; // rax
  __int16 v9; // r14
  __int64 v10; // rsi
  __int16 v11; // bp
  _BYTE v13[384]; // [rsp+20h] [rbp-1A8h] BYREF

  for ( i = a2; i != a3; i = (const struct KeyboardProcessor::TargetingInfo *)((char *)i + 384) )
  {
    v8 = KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v13, i);
    v9 = *(_WORD *)(a4 + 60);
    v10 = v8;
    v11 = *(_WORD *)(v8 + 60);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v8 + 376));
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v10 + 368));
    if ( v9 == v11 )
      break;
  }
  *a1 = i;
  return a1;
}

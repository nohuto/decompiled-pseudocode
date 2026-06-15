/*
 * XREFs of wil::details::lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___::_lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___ @ 0x18013BE34
 * Callers:
 *     _PhoneCallAudio::OnPhoneCallStarted_::_1_::dtor$1 @ 0x18013CFBB (_PhoneCallAudio--OnPhoneCallStarted_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180140130 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___::_lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(*(_QWORD *)a1 + 136LL),
      *(_QWORD *)(*(_QWORD *)a1 + 144LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 144LL) = 0LL;
  }
  return result;
}

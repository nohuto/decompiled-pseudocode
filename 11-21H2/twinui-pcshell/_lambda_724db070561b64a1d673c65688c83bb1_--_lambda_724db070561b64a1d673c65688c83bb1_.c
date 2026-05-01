/*
 * XREFs of _lambda_724db070561b64a1d673c65688c83bb1_::_lambda_724db070561b64a1d673c65688c83bb1_ @ 0x1805C0118
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1801D1BE0.c)
 * Callees:
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1805C020C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1805C020C.c)
 */

_QWORD *__fastcall lambda_724db070561b64a1d673c65688c83bb1_::_lambda_724db070561b64a1d673c65688c83bb1_(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a2;
  *a2 = 0LL;
  *a1 = v3;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 1,
    a3);
  a1[1] = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
  return a1;
}

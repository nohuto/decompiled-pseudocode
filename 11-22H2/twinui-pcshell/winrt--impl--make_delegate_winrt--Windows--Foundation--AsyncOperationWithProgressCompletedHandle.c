/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1806B00CC
 * Callers:
 *     winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1806AEB04 (winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Windows--Internal-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1806B02F0 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *result; // rax
  char *v6; // [rsp+40h] [rbp+8h]

  v6 = (char *)operator new(0x158uLL);
  v4 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v6 + 1) = v4;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(v6 + 16));
  *((_QWORD *)v6 + 2) = &MeetAndChatTelemetry::UserInitiatedInstall::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 84) = 1;
  *(_QWORD *)v6 = off_1807CA258;
  result = a1;
  *a1 = v6;
  return result;
}

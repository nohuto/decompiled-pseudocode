/*
 * XREFs of ?Thunk_Message_CaptureCompleted_62@?$IVisualCaptureEvent_Receive@VVisualCapture@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801552C0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___ @ 0x180154B2C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a_.c)
 */

__int64 __fastcall IVisualCaptureEvent_Receive<Windows::UI::Composition::VisualCapture>::Thunk_Message_CaptureCompleted_62(
        unsigned __int64 a1)
{
  Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___(
    *(Microsoft::WRL2::ContextSession **)(a1 + 24),
    (a1 + 152) & ((unsigned __int128)-(__int128)a1 >> 64));
  return 0LL;
}

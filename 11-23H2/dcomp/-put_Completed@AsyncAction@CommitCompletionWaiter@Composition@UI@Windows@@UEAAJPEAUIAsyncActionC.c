/*
 * XREFs of ?put_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@5@@Z @ 0x180064A40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@4@@Z @ 0x180064AA4 (-put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHand.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitCompletionWaiter::AsyncAction::put_Completed(
        Windows::UI::Composition::CommitCompletionWaiter::AsyncAction *this,
        struct Windows::Foundation::IAsyncActionCompletedHandler *a2)
{
  Windows::UI::Composition::CommitCompletionWaiter *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  v2 = (Windows::UI::Composition::CommitCompletionWaiter::AsyncAction *)((char *)this - 128);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::CommitCompletionWaiter::put_Completed(v2, a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x61u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}

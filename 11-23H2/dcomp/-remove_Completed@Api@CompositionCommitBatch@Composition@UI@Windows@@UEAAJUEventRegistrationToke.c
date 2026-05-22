/*
 * XREFs of ?remove_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180197BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z @ 0x180197A1C (-remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCommitBatch::Api::remove_Completed(
        Windows::UI::Composition::CompositionCommitBatch::Api *this,
        struct EventRegistrationToken a2)
{
  Windows::UI::Composition::CompositionBatch *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (Windows::UI::Composition::CompositionCommitBatch::Api *)((char *)this - 200);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 22);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::CompositionBatch::remove_Completed(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0x89u);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}

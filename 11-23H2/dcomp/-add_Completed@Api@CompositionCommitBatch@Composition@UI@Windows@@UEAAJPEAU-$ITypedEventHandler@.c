/*
 * XREFs of ?add_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180011550
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x1800115CC (-add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAUIInspe.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCommitBatch::Api::add_Completed(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct Windows::UI::Composition::CompositionBatch *v3; // rdi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  *a3 = 0LL;
  v3 = (struct Windows::UI::Composition::CompositionBatch *)(a1 - 200);
  v4 = *(Microsoft::WRL2::ContextSession **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::CompositionBatch::add_Completed(v3);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x76u);
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

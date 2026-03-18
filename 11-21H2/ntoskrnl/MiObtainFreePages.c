/*
 * XREFs of MiObtainFreePages @ 0x140596A58
 * Callers:
 *     MiDecreaseAvailablePages @ 0x140264D88 (MiDecreaseAvailablePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 * Callees:
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     CcNotifyWriteBehindEx @ 0x14038AA18 (CcNotifyWriteBehindEx.c)
 */

void __fastcall MiObtainFreePages(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 16600);
  if ( v1 && !*(_BYTE *)(v1 + 52) )
  {
    v3 = *(_QWORD *)(a1 + 176);
    if ( PsReferencePartitionSafe(v3) )
    {
      CcNotifyWriteBehindEx(1, v3);
      PsDereferencePartition(v3);
    }
    v4 = *(_QWORD *)(a1 + 17504);
    if ( *(_QWORD *)(a1 + 17280) - v4 >= 0x10 )
    {
      KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
      v4 = *(_QWORD *)(a1 + 17504);
    }
    if ( v4 >= 0x10 )
      MiWakeModifiedPageWriter(a1, -1LL);
    if ( *(_BYTE *)(v1 + 98) )
      KeSetEvent((PRKEVENT)(v1 + 96), 0, 0);
  }
}

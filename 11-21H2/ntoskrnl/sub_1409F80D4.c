/*
 * XREFs of sub_1409F80D4 @ 0x1409F80D4
 * Callers:
 *     sub_1409ABED8 @ 0x1409ABED8 (sub_1409ABED8.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

__int64 __fastcall sub_1409F80D4(__int64 a1)
{
  bool v1; // di
  __int64 v2; // rbx

  v1 = 0;
  v2 = *((_QWORD *)sub_140204738(a1) + 157);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 560) )
      v1 = KeCancelTimer((PKTIMER)(v2 + 512)) == 0;
    if ( *(_QWORD *)(v2 + 720) && !KeCancelTimer((PKTIMER)(v2 + 672)) )
      v1 = 1;
    if ( *(_QWORD *)(v2 + 880) && !KeCancelTimer((PKTIMER)(v2 + 832)) || v1 )
      KeFlushQueuedDpcs();
  }
  return 0LL;
}

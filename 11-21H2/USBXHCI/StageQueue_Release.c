/*
 * XREFs of StageQueue_Release @ 0x1C000E344
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0008870 (Isoch_PrepareStage.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00090A0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_CompleteTransfers @ 0x1C000BAB8 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000E0D4 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C000F538 (Bulk_PrepareStage.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0041D04 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0041F9C (Isoch_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0044A5C (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r10d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a1[4];
  --a1[2];
  v4 = a1[1];
  if ( a2 == &a1[v2 * *a1 + 16] )
  {
    result = (v2 + 1) / v4;
    a1[4] = (v2 + 1) % v4;
  }
  else
  {
    result = (unsigned int)((int)(v4 + a1[3] - 1) / (int)v4);
    a1[3] = (int)(v4 + a1[3] - 1) % (int)v4;
  }
  return result;
}

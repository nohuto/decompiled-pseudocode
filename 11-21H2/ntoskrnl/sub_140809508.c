/*
 * XREFs of sub_140809508 @ 0x140809508
 * Callers:
 *     sub_1407F22AC @ 0x1407F22AC (sub_1407F22AC.c)
 *     sub_140808A40 @ 0x140808A40 (sub_140808A40.c)
 *     sub_140995D54 @ 0x140995D54 (sub_140995D54.c)
 *     sub_140995E60 @ 0x140995E60 (sub_140995E60.c)
 *     sub_140996F70 @ 0x140996F70 (sub_140996F70.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_140809508(__int64 a1)
{
  int v1; // eax

  *(_DWORD *)(a1 + 8) |= 2u;
  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 8) = v1 | 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 4400), DelayedWorkQueue);
  }
}

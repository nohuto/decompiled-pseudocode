/*
 * XREFs of sub_18001EC1C @ 0x18001EC1C
 * Callers:
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_18001EC1C(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

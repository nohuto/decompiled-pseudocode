/*
 * XREFs of PplpGenericFreeFunction @ 0x1C0029FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PplpGenericFreeFunction(PVOID Buffer, PLOOKASIDE_LIST_EX Lookaside)
{
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)Lookaside[1].L.ListHead.Alignment, Buffer);
}

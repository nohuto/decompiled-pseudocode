/*
 * XREFs of TppSimplepFree @ 0x180032EC0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 */

__int64 __fastcall TppSimplepFree(__int64 a1)
{
  TppCleanupGroupMemberDestroy();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}

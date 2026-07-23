/*
 * XREFs of sub_14024DFE4 @ 0x14024DFE4
 * Callers:
 *     sub_1406D1830 @ 0x1406D1830 (sub_1406D1830.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14024DFE4(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  _SLIST_ENTRY *v3; // rcx

  v2 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 944));
  while ( v2 )
  {
    v3 = v2 - 6;
    v2 = v2->Next;
    ExFreePoolWithTag(v3, 0);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 960));
  }
}

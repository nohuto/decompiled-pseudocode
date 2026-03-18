/*
 * XREFs of DestroyEventEntry @ 0x1C0046B7C
 * Callers:
 *     FlushEventEntryList @ 0x1C00F713C (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}

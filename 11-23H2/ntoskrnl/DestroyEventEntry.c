/*
 * XREFs of DestroyEventEntry @ 0x1403D081C
 * Callers:
 *     FlushEventEntryList @ 0x140880058 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}

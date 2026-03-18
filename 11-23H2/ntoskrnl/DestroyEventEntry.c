/*
 * XREFs of DestroyEventEntry @ 0x1403D063C
 * Callers:
 *     FlushEventEntryList @ 0x14087FE18 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}

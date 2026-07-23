/*
 * XREFs of DbgkpWerFreePool @ 0x14093BCF4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}

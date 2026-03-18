/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x140AC20F4
 * Callers:
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}

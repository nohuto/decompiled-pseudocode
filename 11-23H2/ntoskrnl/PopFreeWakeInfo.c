/*
 * XREFs of PopFreeWakeInfo @ 0x1409872B0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140987A4C (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}

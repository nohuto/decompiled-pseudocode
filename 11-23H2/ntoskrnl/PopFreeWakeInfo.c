/*
 * XREFs of PopFreeWakeInfo @ 0x1409874B0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140987C4C (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}

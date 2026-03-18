/*
 * XREFs of PopFreeWakeInfo @ 0x14098F2D0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x14098F3B8 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}

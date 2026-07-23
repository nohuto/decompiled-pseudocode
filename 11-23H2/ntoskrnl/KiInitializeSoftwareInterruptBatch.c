/*
 * XREFs of KiInitializeSoftwareInterruptBatch @ 0x140381238
 * Callers:
 *     KiInitPrcb @ 0x140A8BB8C (KiInitPrcb.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KiInitializeSoftwareInterruptBatch(_DWORD *a1)
{
  memset(a1, 0, 0x110uLL);
  a1[1] = -1;
  *(_BYTE *)a1 = 2;
  a1[3] = 0;
  a1[2] = 2097153;
  return memset(a1 + 4, 0, 0x100uLL);
}

/*
 * XREFs of ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x1C02D6050
 * Callers:
 *     <none>
 * Callees:
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02D6950 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall CleanUpPFF(struct PFF *a1)
{
  struct PFF *v1; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  PFFOBJ::vPFFC_DeleteAndCleanup((PFFOBJ *)&v1);
}

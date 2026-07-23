/*
 * XREFs of HalpPciMarkHiberPhase @ 0x140515B90
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A95B10 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}

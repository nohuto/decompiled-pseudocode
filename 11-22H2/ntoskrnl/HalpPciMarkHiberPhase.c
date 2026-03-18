/*
 * XREFs of HalpPciMarkHiberPhase @ 0x140515700
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A95D60 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058E930 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}

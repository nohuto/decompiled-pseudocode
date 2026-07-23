/*
 * XREFs of KeInitializeMutex @ 0x140261AA0
 * Callers:
 *     KeAllocateCalloutStackEx @ 0x1406EE1C0 (KeAllocateCalloutStackEx.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_14084EB98 @ 0x14084EB98 (sub_14084EB98.c)
 *     sub_140A5B0D0 @ 0x140A5B0D0 (sub_140A5B0D0.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  sub_140261ADC(Mutex, 0LL, v2, 0LL);
}

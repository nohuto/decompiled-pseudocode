/*
 * XREFs of KeInitializeMutant @ 0x1403A15E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  sub_140261ADC((__int64)Mutant, InitialOwner, 0, 0);
}

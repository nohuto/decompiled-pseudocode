/*
 * XREFs of KeInitializeMutant @ 0x1403D7370
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14033B07C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((__int64)Mutant, InitialOwner, 0, 0);
}

/*
 * XREFs of KeInitializeMutantEx @ 0x14033ADD0
 * Callers:
 *     NtCreateMutant @ 0x1407B3810 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x14033ADEC (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiInitializeMutant(a1, a2, 0LL, a3);
}

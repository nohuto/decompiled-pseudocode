/*
 * XREFs of KeInitializeMutantEx @ 0x14033B060
 * Callers:
 *     NtCreateMutant @ 0x1407B3A00 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x14033B07C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiInitializeMutant(a1, a2, 0LL, a3);
}

/*
 * XREFs of PsInsertPermanentSiloContext @ 0x140864C50
 * Callers:
 *     <none>
 * Callees:
 *     PsInsertPermanentSiloContextEx @ 0x14077CA5C (PsInsertPermanentSiloContextEx.c)
 */

__int64 __fastcall PsInsertPermanentSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  return PsInsertPermanentSiloContextEx(a1, a2, a3, 0);
}

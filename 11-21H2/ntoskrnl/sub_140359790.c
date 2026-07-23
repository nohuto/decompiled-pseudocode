/*
 * XREFs of sub_140359790 @ 0x140359790
 * Callers:
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 * Callees:
 *     sub_1403597CC @ 0x1403597CC (sub_1403597CC.c)
 *     sub_140359A34 @ 0x140359A34 (sub_140359A34.c)
 */

__int64 __fastcall sub_140359790(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = sub_140359A34(a2, a1);
  if ( result )
    return sub_1403597CC(a3, result, 1LL);
  return result;
}

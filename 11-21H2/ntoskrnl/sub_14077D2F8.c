/*
 * XREFs of sub_14077D2F8 @ 0x14077D2F8
 * Callers:
 *     sub_1406E9440 @ 0x1406E9440 (sub_1406E9440.c)
 *     sub_14077C860 @ 0x14077C860 (sub_14077C860.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 * Callees:
 *     sub_14077D368 @ 0x14077D368 (sub_14077D368.c)
 *     sub_14077D670 @ 0x14077D670 (sub_14077D670.c)
 */

__int64 __fastcall sub_14077D2F8(int a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rcx

  *a5 = 0;
  result = sub_14077D368(a1, a2, a3, a4, (__int64)a5);
  if ( (int)result < 0 || *a5 && (result = sub_14077D670(v9, a2, a3, a4, a5), (int)result < 0) )
    *a5 = 0;
  return result;
}

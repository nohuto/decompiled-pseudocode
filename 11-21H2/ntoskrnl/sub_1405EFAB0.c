/*
 * XREFs of sub_1405EFAB0 @ 0x1405EFAB0
 * Callers:
 *     sub_1405EF908 @ 0x1405EF908 (sub_1405EF908.c)
 *     sub_1409C02BC @ 0x1409C02BC (sub_1409C02BC.c)
 *     sub_140A6BF28 @ 0x140A6BF28 (sub_140A6BF28.c)
 *     sub_140A6C3EC @ 0x140A6C3EC (sub_140A6C3EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EFAB0(char *a1, _BYTE *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  char v5; // r8
  unsigned __int8 v7; // cl
  unsigned __int64 v8; // rcx

  v5 = *a1;
  v7 = a1[1];
  if ( v5 == -21 && v7 >= 0xEEu )
  {
    if ( v7 == 0xF9 && *(a1 - 5) == -23 )
    {
      v8 = (unsigned __int64)&a1[*((int *)a1 - 1)];
      if ( v8 >= (unsigned __int64)a1 && (v8 & 7) == 0 && v8 >= a5 && v8 - a5 <= 0xFFFFFFFF )
        return ((unsigned int)(v8 - a5) >> 13 << 9) + (((unsigned int)(v8 - a5) >> 3) & 0x3FF);
    }
    return 0xFFFFFFFFLL;
  }
  if ( a2 && (v5 != *a2 || v7 != a2[1]) )
    return 0xFFFFFFFFLL;
  return 4294967294LL;
}

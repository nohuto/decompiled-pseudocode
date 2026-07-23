/*
 * XREFs of sub_140A01DB0 @ 0x140A01DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 */

__int64 __fastcall sub_140A01DB0(__int64 a1, __int64 a2, __int64 *a3, int a4, const void *a5, unsigned int a6)
{
  if ( a4 )
    return sub_140793B84((__int64)a3, a5, a6, 0LL, 0LL, 0, 0, a2 != 0);
  else
    return sub_14085EB0C(a3, 0LL, a2 != 0);
}

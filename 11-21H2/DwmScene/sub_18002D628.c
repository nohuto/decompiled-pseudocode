/*
 * XREFs of sub_18002D628 @ 0x18002D628
 * Callers:
 *     sub_1801004DE @ 0x1801004DE (sub_1801004DE.c)
 *     sub_180103A41 @ 0x180103A41 (sub_180103A41.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18002D628(__int64 a1)
{
  char *v1; // rcx
  __int64 result; // rax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
    return sub_180010884(v1, 0x58uLL);
  return result;
}

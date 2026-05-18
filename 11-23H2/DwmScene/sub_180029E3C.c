/*
 * XREFs of sub_180029E3C @ 0x180029E3C
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_180029BDC @ 0x180029BDC (sub_180029BDC.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180029E3C(__int64 a1, _QWORD *a2, char *a3)
{
  char *v4; // rdx
  char *result; // rax

  v4 = *(char **)(a1 + 8);
  if ( v4 == *(char **)(a1 + 16) )
    return sub_1800299D8((__int128 **)a1, v4, a2, a3);
  *(_QWORD *)v4 = *a2;
  v4[8] = *a3;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 16;
  return result;
}

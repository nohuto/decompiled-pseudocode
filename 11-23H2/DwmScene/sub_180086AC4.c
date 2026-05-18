/*
 * XREFs of sub_180086AC4 @ 0x180086AC4
 * Callers:
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 * Callees:
 *     sub_1800861E4 @ 0x1800861E4 (sub_1800861E4.c)
 */

char *__fastcall sub_180086AC4(char **a1, _OWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[4];
  if ( v3 == a1[5] )
    return sub_1800861E4(a1 + 3, v3, a2);
  *(_OWORD *)v3 = *a2;
  a1[4] += 16;
  return result;
}

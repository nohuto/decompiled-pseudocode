/*
 * XREFs of sub_180081D34 @ 0x180081D34
 * Callers:
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180081D34(char **a1, _QWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return sub_1800818E4(a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  result = a1[1];
  a1[1] = result + 8;
  return result;
}

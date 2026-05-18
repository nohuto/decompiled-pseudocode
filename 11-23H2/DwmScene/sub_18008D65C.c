/*
 * XREFs of sub_18008D65C @ 0x18008D65C
 * Callers:
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18008D65C(char **a1, _QWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return sub_18008CC54(a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  a1[1] += 8;
  return result;
}

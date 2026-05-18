/*
 * XREFs of sub_18001B8BC @ 0x18001B8BC
 * Callers:
 *     sub_180015D28 @ 0x180015D28 (sub_180015D28.c)
 *     sub_1800C30C0 @ 0x1800C30C0 (sub_1800C30C0.c)
 *     sub_1800C3268 @ 0x1800C3268 (sub_1800C3268.c)
 *     sub_1800C3410 @ 0x1800C3410 (sub_1800C3410.c)
 *     sub_1800C35B8 @ 0x1800C35B8 (sub_1800C35B8.c)
 *     sub_1800C3760 @ 0x1800C3760 (sub_1800C3760.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18001B8BC(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return sub_180016F04(a1, (char *)v3, a2);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = *a2;
  result = (_QWORD *)a2[1];
  *(_QWORD *)(v3 + 8) = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[1] += 16LL;
  return result;
}

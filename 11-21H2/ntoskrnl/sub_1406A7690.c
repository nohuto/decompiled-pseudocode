/*
 * XREFs of sub_1406A7690 @ 0x1406A7690
 * Callers:
 *     sub_140657A44 @ 0x140657A44 (sub_140657A44.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 * Callees:
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 */

char __fastcall sub_1406A7690(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  char result; // al

  v4 = *(_QWORD *)(a1 + 240);
  if ( !v4 )
    return 1;
  result = sub_140721FD0(a2, v4, a3);
  if ( result )
    return 1;
  return result;
}

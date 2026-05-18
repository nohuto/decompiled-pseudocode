/*
 * XREFs of sub_1800B3460 @ 0x1800B3460
 * Callers:
 *     sub_1800290F0 @ 0x1800290F0 (sub_1800290F0.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 */

char __fastcall sub_1800B3460(__int64 a1)
{
  __int64 v1; // r8

  if ( *(_BYTE *)sub_1800441D8(a1 + 184) )
    return sub_1800B33F0(v1, *(_QWORD *)(v1 + 192));
  else
    return 0;
}

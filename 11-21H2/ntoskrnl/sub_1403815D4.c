/*
 * XREFs of sub_1403815D4 @ 0x1403815D4
 * Callers:
 *     sub_14037E8DC @ 0x14037E8DC (sub_14037E8DC.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     sub_14037EAF8 @ 0x14037EAF8 (sub_14037EAF8.c)
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 */

_WORD *__fastcall sub_1403815D4(_DWORD *a1)
{
  unsigned int v1; // eax
  _WORD *v3; // rbx
  int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx

  v1 = a1[71];
  v3 = 0LL;
  while ( !_BitScanForward((unsigned int *)&v5, v1) )
  {
    if ( !sub_14037EAF8(a1) )
      return v3;
    v1 = a1[71];
  }
  v6 = *(_QWORD *)&a1[4 * v5 + 72];
  v7 = *(unsigned int *)(v6 + 16);
  _BitScanReverse((unsigned int *)&v8, v7);
  v9 = *(_QWORD *)&a1[2 * v8] + 16 * (v7 ^ (unsigned int)(1 << v8));
  v3 = (_WORD *)(v6 + *(unsigned __int16 *)(v9 + 8));
  *(_WORD *)(v9 + 8) = *v3;
  sub_140381660(a1, v9, 0xFFFFFFFFLL);
  ++a1[141];
  return v3;
}

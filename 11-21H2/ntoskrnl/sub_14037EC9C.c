/*
 * XREFs of sub_14037EC9C @ 0x14037EC9C
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_1403820C0 @ 0x1403820C0 (sub_1403820C0.c)
 * Callees:
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 *     sub_1405FAB9C @ 0x1405FAB9C (sub_1405FAB9C.c)
 */

__int64 __fastcall sub_14037EC9C(_DWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  _WORD *v5; // rdi
  __int64 result; // rax
  int v7; // ecx

  v3 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v4, v3);
  v5 = (_WORD *)(*(_QWORD *)&a1[2 * v4] + 16 * (v3 ^ (unsigned int)(1 << v4)));
  *(_WORD *)a2 = v5[4];
  v5[4] = a2 - *v5;
  result = sub_140381660(a1, v5, 1LL);
  v7 = (unsigned __int16)v5[5];
  if ( v7 == a1[137] )
  {
    result = (unsigned int)(a1[140] - v7);
    if ( (unsigned int)result >= a1[139] )
      result = sub_1405FAB9C(a1);
  }
  --a1[141];
  return result;
}

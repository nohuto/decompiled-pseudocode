/*
 * XREFs of sub_1403823DC @ 0x1403823DC
 * Callers:
 *     sub_140381660 @ 0x140381660 (sub_140381660.c)
 * Callees:
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 */

__int64 __fastcall sub_1403823DC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9

  if ( !a3 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 16LL);
    _BitScanReverse((unsigned int *)&v8, v12);
    v9 = v12 ^ (unsigned int)(1 << v8);
    return sub_1403813C0(v8, *(_QWORD *)(a1 + 8 * v8) + 16 * v9, 1, 0);
  }
  if ( *a3 != a2 )
  {
    v10 = *(unsigned int *)(*a3 + 16LL);
    _BitScanReverse((unsigned int *)&v11, v10);
    sub_1403813C0(v11, *(_QWORD *)(a1 + 8 * v11) + 16 * (v10 ^ (unsigned int)(1 << v11)), 1, 0);
  }
  result = a3[1];
  if ( result != a2 )
  {
    v7 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v8, v7);
    v9 = v7 ^ (unsigned int)(1 << v8);
    return sub_1403813C0(v8, *(_QWORD *)(a1 + 8 * v8) + 16 * v9, 1, 0);
  }
  return result;
}

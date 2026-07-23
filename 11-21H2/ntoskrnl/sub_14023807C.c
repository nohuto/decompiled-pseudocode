/*
 * XREFs of sub_14023807C @ 0x14023807C
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1405F7E2C @ 0x1405F7E2C (sub_1405F7E2C.c)
 * Callees:
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 */

__int64 __fastcall sub_14023807C(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx

  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    _BitScanReverse((unsigned int *)&v7, i);
    result = i;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v7) + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v7)));
    if ( *v9 )
      result = sub_1403813C0(v7, v9, a2, a3);
  }
  return result;
}

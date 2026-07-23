/*
 * XREFs of sub_1405EECF4 @ 0x1405EECF4
 * Callers:
 *     sub_1405EEDA4 @ 0x1405EEDA4 (sub_1405EEDA4.c)
 *     sub_1405EEE8C @ 0x1405EEE8C (sub_1405EEE8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EECF4(__int64 a1, __int64 a2, unsigned int *a3)
{
  _BYTE *v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned int v7; // edx
  __int64 result; // rax

  v4 = (_BYTE *)(a1 + *(unsigned int *)(a2 + 8));
  v5 = 0;
  v6 = (unsigned __int8)v4[2];
  v7 = 2 * v6 + 6;
  if ( (v6 & 1) == 0 )
    v7 = 2 * v6 + 4;
  if ( (*v4 & 0x18) != 0 )
    v5 = v7;
  result = v7 + 8;
  if ( (*v4 & 0x18) == 0 )
    result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}

/*
 * XREFs of sub_14021BB70 @ 0x14021BB70
 * Callers:
 *     sub_14069437C @ 0x14069437C (sub_14069437C.c)
 * Callees:
 *     sub_14021BBE4 @ 0x14021BBE4 (sub_14021BBE4.c)
 */

__int64 __fastcall sub_14021BB70(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ecx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // xmm1_8

  v3 = 0;
  _BitScanReverse(&v6, a2);
  v7 = 1 << v6;
  v8 = v6 - 4;
  v9 = a2 ^ v7;
  v10 = *(_QWORD *)(a1 + 8 * v8);
  if ( v10 || (v10 = sub_14021BBE4(a1, (unsigned int)v8)) != 0 )
  {
    v11 = 3 * v9;
    v12 = *(_QWORD *)(a3 + 16);
    *(_OWORD *)(v10 + 8 * v11 + 8) = *(_OWORD *)a3;
    *(_QWORD *)(v10 + 8 * v11 + 24) = v12;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}

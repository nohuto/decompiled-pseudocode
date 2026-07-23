/*
 * XREFs of sub_1408626B8 @ 0x1408626B8
 * Callers:
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1408626B8(_DWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  memset(a1, 0, 0xE8uLL);
  v2 = a1 + 29;
  *a1 = 1;
  a1[10] = 1;
  a1[23] = 1;
  v3 = 4LL;
  a1[17] = 2;
  a1[18] = 4;
  a1[19] = 2;
  do
  {
    *v2 = 2;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  result = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  a1[1] = 6;
  *(_QWORD *)(a1 + 5) = 0LL;
  a1[4] = 2;
  *((_QWORD *)a1 + 4) = 0LL;
  a1[7] = 0;
  return result;
}

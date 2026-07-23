/*
 * XREFs of sub_140549E34 @ 0x140549E34
 * Callers:
 *     sub_14023BC48 @ 0x14023BC48 (sub_14023BC48.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_140549E34(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD v7[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v7, 0, 0x194uLL);
  v7[0] = 2;
  v7[2] = a1;
  v7[4] = a2;
  return sub_14054A3D8(v7, v4, v5);
}

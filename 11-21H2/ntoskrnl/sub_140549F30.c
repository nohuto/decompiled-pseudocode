/*
 * XREFs of sub_140549F30 @ 0x140549F30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_140549F30(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD v7[53]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v7, 0, 0x194uLL);
  LODWORD(v7[0]) = 6;
  LODWORD(v7[1]) = a1;
  v7[2] = a2;
  return sub_14054A3D8(v7, v4, v5);
}

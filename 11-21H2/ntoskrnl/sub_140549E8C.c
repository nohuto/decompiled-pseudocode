/*
 * XREFs of sub_140549E8C @ 0x140549E8C
 * Callers:
 *     sub_14099DE60 @ 0x14099DE60 (sub_14099DE60.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_140549E8C(int a1, __int128 *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD v13[26]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v13, 0, 0x194uLL);
  v4 = *a2;
  LODWORD(v13[0]) = 1;
  v5 = a2[1];
  DWORD2(v13[0]) = a1;
  v13[1] = v4;
  v6 = a2[2];
  v13[2] = v5;
  v7 = a2[3];
  v13[3] = v6;
  v8 = a2[4];
  v13[4] = v7;
  v9 = a2[5];
  v13[5] = v8;
  *(_QWORD *)&v13[7] = *((_QWORD *)a2 + 12);
  v13[6] = v9;
  return sub_14054A3D8(v13, v10, v11);
}

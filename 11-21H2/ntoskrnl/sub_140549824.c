/*
 * XREFs of sub_140549824 @ 0x140549824
 * Callers:
 *     sub_14099E040 @ 0x14099E040 (sub_14099E040.c)
 * Callees:
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 */

__int64 __fastcall sub_140549824(int a1, _OWORD *a2)
{
  char *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _DWORD v12[4]; // [rsp+20h] [rbp-1A8h] BYREF
  char v13; // [rsp+30h] [rbp-198h] BYREF

  v12[2] = a1;
  v12[0] = 0;
  v2 = &v13;
  v12[1] = 0;
  v12[3] = 0;
  v3 = 3LL;
  do
  {
    v4 = a2[1];
    *(_OWORD *)v2 = *a2;
    v5 = a2[2];
    *((_OWORD *)v2 + 1) = v4;
    v6 = a2[3];
    *((_OWORD *)v2 + 2) = v5;
    v7 = a2[4];
    *((_OWORD *)v2 + 3) = v6;
    v8 = a2[5];
    *((_OWORD *)v2 + 4) = v7;
    v9 = a2[6];
    *((_OWORD *)v2 + 5) = v8;
    v10 = a2[7];
    a2 += 8;
    *((_OWORD *)v2 + 6) = v9;
    v2 += 128;
    *((_OWORD *)v2 - 1) = v10;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)v2 = *(_QWORD *)a2;
  return sub_14054A3D8(v12, a2, 128LL);
}

/*
 * XREFs of sub_140416DC0 @ 0x140416DC0
 * Callers:
 *     sub_1404110E0 @ 0x1404110E0 (sub_1404110E0.c)
 *     sub_1404111A0 @ 0x1404111A0 (sub_1404111A0.c)
 *     sub_140411200 @ 0x140411200 (sub_140411200.c)
 *     sub_1404112A0 @ 0x1404112A0 (sub_1404112A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140416DC0(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  int v4; // ebp
  __int64 v5; // r13
  unsigned __int64 *v6; // rcx
  int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 *v9; // r10
  unsigned __int64 *v10; // r9
  __int64 v11; // rbx
  int v12; // esi
  unsigned __int64 v13; // r12
  unsigned __int128 v14; // rax
  unsigned __int128 v15; // rax
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // kr10_8
  bool v18; // cf
  int v19; // esi
  unsigned __int64 *v20; // r10
  unsigned __int64 *v21; // r9
  _QWORD *v22; // r12
  unsigned __int64 v23; // rtt
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rtt
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rtt
  unsigned __int64 v28; // r14
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 4) + 1;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (unsigned __int64 *)(a1 + 128);
  v7 = 3 * v4;
  v8 = 0LL;
  do
  {
    v9 = a2;
    v10 = v6;
    v11 = v5 * *a2;
    v12 = v4;
    v13 = 0LL;
    do
    {
      v14 = v13 + *v9 + (unsigned __int64)v11 * (unsigned __int128)*v10;
      *v9 = v14;
      v15 = *((unsigned __int64 *)&v14 + 1) + v9[1] + (unsigned __int64)v11 * (unsigned __int128)v10[1];
      v9[1] = v15;
      v16 = *((unsigned __int64 *)&v15 + 1) + v9[2] + (unsigned __int64)v11 * (unsigned __int128)v10[2];
      v9[2] = v16;
      v13 = *((_QWORD *)&v16 + 1);
      v10 += 3;
      v9 += 3;
      --v12;
    }
    while ( v12 );
    v17 = v8 + *((_QWORD *)&v16 + 1) + *v9;
    v8 = (v8 + (unsigned __int128)*((unsigned __int64 *)&v16 + 1) + *v9) >> 64;
    *v9 = v17;
    ++a2;
    v18 = v7-- == 0;
  }
  while ( v7 );
  v19 = v4;
  v20 = a2;
  v21 = v6;
  v22 = a3;
  do
  {
    v23 = v18 + *v21;
    v18 = *v20 < v23;
    *v22 = *v20 - v23;
    v24 = v20[1];
    v25 = v18 + v21[1];
    v18 = v24 < v25;
    v22[1] = v24 - v25;
    v26 = v20[2];
    v27 = v18 + v21[2];
    v18 = v26 < v27;
    v22[2] = v26 - v27;
    v20 += 3;
    v21 += 3;
    v22 += 3;
    --v19;
  }
  while ( v19 );
  v28 = v8 - v18;
  do
  {
    *a3 ^= v28 & (*a3 ^ *a2);
    a3[1] ^= v28 & (a3[1] ^ a2[1]);
    result = a3[2] ^ v28 & (a3[2] ^ a2[2]);
    a3[2] = result;
    a2 += 3;
    a3 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}

/*
 * XREFs of sub_140212300 @ 0x140212300
 * Callers:
 *     sub_140212200 @ 0x140212200 (sub_140212200.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __fastcall sub_140212300(__int64 a1)
{
  __int64 v1; // r14
  _DWORD *v3; // rbx
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int i; // edi
  unsigned int j; // eax
  unsigned int v21; // r10d
  unsigned int k; // r9d
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  unsigned int v28; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+88h] [rbp+10h]
  unsigned __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = *(_DWORD **)(v1 + 152);
    v27 = *(_QWORD *)(v1 + 96) - *(_QWORD *)(v1 + 32);
    v4 = *(_QWORD *)(v1 + 104) - *(_QWORD *)(v1 + 40);
    v5 = *(_QWORD **)(v1 + 88);
    v30 = v4;
    v6 = *(_QWORD *)v3 - *v5;
    if ( !v4 )
      v4 = 1LL;
    v7 = (*(_QWORD *)(v1 + 128) - *(_QWORD *)(v1 + 64)) / v4;
    v8 = *(_QWORD *)v3 - *v5;
    v29 = v7;
    if ( !v6 )
      v8 = 1LL;
    v28 = (unsigned __int8)(100LL * (*((_QWORD *)v3 + 1) - v5[1]) / v8);
    if ( v28 > 0x64 )
      LOWORD(v28) = 100;
    v9 = *(_QWORD *)(a1 + 8);
    v31 = v9;
    if ( !(_DWORD)v7 )
    {
      if ( v9 )
        v29 = *(_DWORD *)(v9 + 120);
      else
        v29 = 100;
    }
    v10 = *(_QWORD *)v3 - *v5;
    if ( !v6 )
      v10 = 1LL;
    v11 = 100LL * (*((_QWORD *)v3 + 2) - v5[2]) / v10;
    if ( (unsigned __int8)v11 > 0x64u )
      LOBYTE(v11) = 100;
    *(_BYTE *)(v1 + 232) = v11;
    v12 = v6;
    if ( !v6 )
      v12 = 1LL;
    v13 = 100LL * (*((_QWORD *)v3 + 3) - v5[3]) / v12;
    if ( (unsigned __int8)v13 > 0x64u )
      LOBYTE(v13) = 100;
    *(_BYTE *)(v1 + 233) = v13;
    v14 = v6;
    if ( !v6 )
      v14 = 1LL;
    v15 = 100LL * (*((_QWORD *)v3 + 4) - v5[4]) / v14;
    if ( (unsigned __int8)v15 > 0x64u )
      LOBYTE(v15) = 100;
    *(_BYTE *)(v1 + 234) = v15;
    v16 = v6;
    if ( !v6 )
      v16 = 1LL;
    v17 = 100LL * (*((_QWORD *)v3 + 5) - v5[5]) / v16;
    if ( (unsigned __int8)v17 > 0x64u )
      LOBYTE(v17) = 100;
    v18 = 0LL;
    *(_BYTE *)(v1 + 235) = v17;
    for ( i = 0; i < 6; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        if ( *((_DWORD *)&unk_140D05420 + 2 * (int)i + (int)j) != 3 )
        {
          v21 = v3[12];
          for ( k = 0; k < v21; v18 += *(_QWORD *)&v3[2 * v23 + 14] - v5[v23 + 7] )
            v23 = v21 * (j + 2 * i) + k++;
        }
      }
    }
    if ( !v6 )
      v6 = 1LL;
    v24 = 100 * v18 / v6;
    if ( (unsigned __int8)v24 > 0x64u )
      LOBYTE(v24) = 100;
    *(_BYTE *)(v1 + 236) = v24;
    *(_WORD *)(a1 + 56) = v28;
    if ( v31 )
    {
      v25 = v30;
      if ( !v30 )
        v25 = 1LL;
      v26 = (*(_QWORD *)(v1 + 120) - *(_QWORD *)(v1 + 56)) / v25;
      if ( !(_DWORD)v26 )
        LODWORD(v26) = *(_DWORD *)(v31 + 116);
      *(_DWORD *)(v31 + 116) = v26;
      *(_DWORD *)(v31 + 120) = v29;
    }
    *(_OWORD *)(v1 + 32) = *(_OWORD *)(v1 + 96);
    *(_OWORD *)(v1 + 48) = *(_OWORD *)(v1 + 112);
    *(_OWORD *)(v1 + 64) = *(_OWORD *)(v1 + 128);
    *(_QWORD *)(v1 + 80) = *(_QWORD *)(v1 + 144);
    memmove(v5, v3, 96 * v3[12] + 56);
    if ( *(_BYTE *)(a1 + 64) )
    {
      *(_QWORD *)(a1 + 104) += v30;
      *(_QWORD *)(a1 + 112) += v27;
    }
  }
}

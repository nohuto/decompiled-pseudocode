/*
 * XREFs of sub_1406503B0 @ 0x1406503B0
 * Callers:
 *     sub_14064FAD0 @ 0x14064FAD0 (sub_14064FAD0.c)
 *     sub_14064FFEC @ 0x14064FFEC (sub_14064FFEC.c)
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14064FC7C @ 0x14064FC7C (sub_14064FC7C.c)
 *     sub_1406516CC @ 0x1406516CC (sub_1406516CC.c)
 *     sub_140651754 @ 0x140651754 (sub_140651754.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 *     sub_140930370 @ 0x140930370 (sub_140930370.c)
 */

__int64 __fastcall sub_1406503B0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r9
  unsigned int v13; // r15d
  int v14; // r14d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  SIZE_T v20; // r13
  char *v21; // rax
  char *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rcx
  char *v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbx
  int v28; // ecx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned __int64 v34; // r12
  __int128 v35; // xmm0
  __int64 v36; // rcx
  __int64 v37; // r8
  char *v38; // r9
  unsigned int v39; // edi
  __int64 v40; // rbx
  __int64 v41; // rax
  ULONG v42; // r8d
  __int64 v43; // rbx
  int v45; // [rsp+20h] [rbp-68h]
  int v46; // [rsp+24h] [rbp-64h]
  unsigned __int64 v47; // [rsp+28h] [rbp-60h]
  unsigned __int64 v48; // [rsp+30h] [rbp-58h]
  char *Buffer; // [rsp+40h] [rbp-48h]
  int v50; // [rsp+90h] [rbp+8h]
  __int64 v51; // [rsp+90h] [rbp+8h]
  unsigned int v53; // [rsp+A8h] [rbp+20h]

  v46 = 0;
  v4 = *a1;
  v6 = *(_QWORD *)(*a1 + 264);
  if ( !a3 )
  {
    v13 = 2 - ((*(_BYTE *)(v4 + 200) & 1) != 0);
    v14 = 0;
    while ( 1 )
    {
      v8 = sub_14064FC7C(a1, v14, (_QWORD *)v6);
      if ( v8 >= 0 )
        break;
      if ( ++v14 >= v13 )
        return (unsigned int)v8;
    }
    v11 = *(_DWORD *)(v6 + 80);
    v12 = *(_QWORD *)(v6 + 40);
    v45 = *(_DWORD *)(v6 + 84);
    v9 = -*(_DWORD *)(*a1 + 236) & (v45 * v11 + *(_DWORD *)(*a1 + 236) - 1);
    v10 = v9 >> *(_DWORD *)(*a1 + 240);
LABEL_14:
    v15 = *(_DWORD *)(a2 + 4);
    v53 = v11;
    v47 = v12;
    if ( v15 > v11 )
      return (unsigned int)-1073741811;
    v16 = 0LL;
    if ( v15 )
    {
      while ( *(_OWORD *)(a2 + 144 * v16 + 80) != xmmword_140017E68 )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_25;
      }
      if ( (_DWORD)v16 != -1 )
      {
        v17 = *(_QWORD *)(a2 + 144 * v16 + 64);
        v18 = *(_DWORD *)(*a1 + 236);
        if ( v18 )
          v17 /= (__int64)v18;
        if ( v12 < (unsigned __int64)v10 + v17 + 2 )
          v12 = v10 + v17 + 2;
        v47 = v12;
      }
    }
LABEL_25:
    v19 = *a1;
    if ( (*(_DWORD *)(*a1 + 200) & 1) != 0 )
      v48 = *(_QWORD *)(v19 + 248) - 1LL;
    else
      v48 = *(_QWORD *)(v19 + 248) - v10 - 2LL;
    v20 = (2 << *(_DWORD *)(v19 + 240)) + v9;
    v21 = (char *)sub_140930250(v20);
    v22 = v21;
    if ( !v21 )
      return (unsigned int)-1073741670;
    memset(v21, 0, v20);
    v23 = 0LL;
    v50 = 0;
    v24 = 1 << *(_DWORD *)(*a1 + 240);
    v25 = &v22[v20 - v24];
    Buffer = &v22[v24];
    if ( *(_DWORD *)(a2 + 4) )
    {
      v26 = (__int64)&v22[v24 + 32];
      do
      {
        v27 = 144 * v23;
        v28 = *(_DWORD *)(144 * v23 + a2 + 48);
        if ( v28 )
        {
          if ( v28 == 1 && !*(_QWORD *)(v27 + a2 + 80) && !*(_QWORD *)(v27 + a2 + 88) )
            goto LABEL_48;
        }
        else if ( !*(_BYTE *)(v27 + a2 + 80) )
        {
          goto LABEL_48;
        }
        v29 = (_QWORD *)(v27 + a2 + 96);
        if ( !*v29 && !v29[1] )
        {
          ((void (*)(void))sub_140930370)();
          LODWORD(v23) = v50;
          v29 = (_QWORD *)(v27 + a2 + 96);
        }
        *(_OWORD *)(v26 - 32) = *(_OWORD *)(v27 + a2 + 80);
        *(_OWORD *)(v26 - 16) = *(_OWORD *)v29;
        v30 = *(_QWORD *)(v27 + a2 + 56);
        v31 = *(_DWORD *)(*a1 + 236);
        if ( v31 )
          v30 = (__int64)v30 / v31;
        *(_QWORD *)v26 = v30;
        v32 = *(_QWORD *)(v27 + a2 + 64) - 1LL + *(_QWORD *)(v27 + a2 + 56);
        v33 = *(_DWORD *)(*a1 + 236);
        if ( v33 )
          v32 /= (__int64)v33;
        *(_QWORD *)(v26 + 8) = v32;
        *(_QWORD *)(v26 + 16) = *(_QWORD *)(v27 + a2 + 112);
        *(_OWORD *)(v26 + 24) = *(_OWORD *)(v27 + a2 + 120);
        *(_OWORD *)(v26 + 40) = *(_OWORD *)(v27 + a2 + 136);
        *(_OWORD *)(v26 + 56) = *(_OWORD *)(v27 + a2 + 152);
        *(_OWORD *)(v26 + 72) = *(_OWORD *)(v27 + a2 + 168);
        *(_QWORD *)(v26 + 88) = *(_QWORD *)(v27 + a2 + 184);
        if ( v30 < v47 || v32 > v48 )
        {
          v8 = -1073741811;
          goto LABEL_62;
        }
        v26 += 128LL;
LABEL_48:
        v23 = (unsigned int)(v23 + 1);
        v50 = v23;
      }
      while ( (unsigned int)v23 < *(_DWORD *)(a2 + 4) );
    }
    if ( !*(_QWORD *)(a2 + 8) && !*(_QWORD *)(a2 + 16) )
      sub_140930370(a2 + 8);
    *(_QWORD *)(a2 + 32) = (v48 - v47 + 1) << *(_DWORD *)(*a1 + 240);
    *(_DWORD *)(a2 + 40) = v53;
    *(_QWORD *)v22 = 0x5452415020494645LL;
    *((_QWORD *)v22 + 6) = v48;
    *((_QWORD *)v22 + 5) = v47;
    *((_DWORD *)v22 + 2) = 0x10000;
    *((_QWORD *)v22 + 4) = v10 + v48 + 1;
    v34 = v47 - v10;
    *((_DWORD *)v22 + 3) = 92;
    *((_QWORD *)v22 + 3) = 1LL;
    v35 = *(_OWORD *)(a2 + 8);
    *((_DWORD *)v22 + 20) = v53;
    *((_QWORD *)v22 + 9) = v34;
    *(_OWORD *)(v22 + 56) = v35;
    *((_DWORD *)v22 + 21) = v45;
    v51 = v10;
    *((_DWORD *)v22 + 22) = RtlComputeCrc32(0, Buffer, v10 << *(_DWORD *)(*a1 + 240));
    *((_DWORD *)v22 + 4) = RtlComputeCrc32(0, v22, 0x5Cu);
    v36 = *a1;
    v37 = 1LL;
    v38 = v22;
    if ( v34 == 2 )
    {
      v39 = ++v10;
    }
    else
    {
      v8 = sub_1406516CC(v36, 1LL, 1LL, v22);
      if ( v8 < 0 )
      {
LABEL_62:
        sub_1406D9550(v22);
        return (unsigned int)v8;
      }
      v36 = *a1;
      v38 = Buffer;
      v37 = *((_QWORD *)v22 + 9);
      v39 = v10 + 1;
    }
    v8 = sub_1406516CC(v36, v10, v37, v38);
    if ( v8 >= 0 )
    {
      if ( (*(_DWORD *)(*a1 + 200) & 1) != 0 )
        goto LABEL_60;
      *(_OWORD *)v25 = *(_OWORD *)v22;
      *((_OWORD *)v25 + 1) = *((_OWORD *)v22 + 1);
      *((_OWORD *)v25 + 2) = *((_OWORD *)v22 + 2);
      *((_OWORD *)v25 + 3) = *((_OWORD *)v22 + 3);
      *((_OWORD *)v25 + 4) = *((_OWORD *)v22 + 4);
      *((_QWORD *)v25 + 10) = *((_QWORD *)v22 + 10);
      *((_DWORD *)v25 + 22) = *((_DWORD *)v22 + 22);
      v40 = *((_QWORD *)v25 + 4);
      v41 = *((_QWORD *)v25 + 3);
      v42 = *((_DWORD *)v25 + 3);
      *((_DWORD *)v25 + 4) = 0;
      *((_QWORD *)v25 + 3) = v40;
      v43 = v40 - v51;
      *((_QWORD *)v25 + 9) = v43;
      *((_QWORD *)v25 + 4) = v41;
      *((_DWORD *)v25 + 4) = RtlComputeCrc32(0, v25, v42);
      v8 = sub_1406516CC(*a1, v39, v43, Buffer);
      if ( v8 >= 0 )
      {
LABEL_60:
        *(_DWORD *)(*a1 + 200) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v46;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          sub_140651754(v6 + 446, *a1 + 216);
          *(_WORD *)(v6 + 510) = -21931;
          v8 = sub_1406516CC(*a1, 1LL, 0LL, 0LL);
        }
      }
    }
    goto LABEL_62;
  }
  if ( *(_WORD *)(v6 + 510) == 0xAA55 )
    v46 = *(_DWORD *)(v6 + 440);
  v7 = *(_DWORD *)(a2 + 40);
  if ( v7 <= 0x80 )
  {
    v7 = 128;
    goto LABEL_8;
  }
  if ( v7 <= 0x400 )
  {
LABEL_8:
    v45 = 128;
    v9 = -*(_DWORD *)(v4 + 236) & ((v7 << 7) + *(_DWORD *)(v4 + 236) - 1);
    v10 = v9 >> *(_DWORD *)(v4 + 240);
    v11 = v9 >> 7;
    v12 = v10 + 2;
    goto LABEL_14;
  }
  return (unsigned int)-1073741811;
}

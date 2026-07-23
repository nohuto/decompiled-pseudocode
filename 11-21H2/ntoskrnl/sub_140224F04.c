/*
 * XREFs of sub_140224F04 @ 0x140224F04
 * Callers:
 *     sub_14069DDE8 @ 0x14069DDE8 (sub_14069DDE8.c)
 * Callees:
 *     sub_140225C88 @ 0x140225C88 (sub_140225C88.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14069DF5C @ 0x14069DF5C (sub_14069DF5C.c)
 */

char __fastcall sub_140224F04(__int64 a1)
{
  char v1; // si
  _DWORD *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // r13
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // xmm1_8
  __int64 v16; // rdx
  int v17; // ebx
  SIZE_T v18; // rax
  __int64 v19; // xmm1_8
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r9d
  _WORD *v23; // rdi
  unsigned int i; // esi
  unsigned int j; // ebx
  __int64 v27; // rax
  __int64 *v28; // r10
  _DWORD *v29; // rax
  unsigned int v30; // esi
  unsigned int v31; // ebx
  int v32; // eax
  unsigned int v33; // r11d
  char v34; // al
  char v35; // al
  char v36; // dl
  char v37; // al
  int v38; // eax
  __int64 v39; // rbx
  SIZE_T v40; // rax
  __int128 v41; // xmm0
  __int64 v42; // xmm1_8
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // [rsp+20h] [rbp-40h]
  char v52; // [rsp+24h] [rbp-3Ch]
  char v53; // [rsp+28h] [rbp-38h]
  int v54; // [rsp+2Ch] [rbp-34h]
  __int128 Source2; // [rsp+30h] [rbp-30h] BYREF
  __int64 v56; // [rsp+40h] [rbp-20h]
  int v57; // [rsp+48h] [rbp-18h]

  v1 = 0;
  v53 = 0;
  v52 = 0;
  v3 = 0LL;
  v51 = 0;
  v4 = 0;
  v54 = dword_140C232CC;
  v5 = 0LL;
  v8 = (unsigned __int8)sub_140225C88(*(_QWORD *)(a1 + 16));
  v9 = v7 + 64;
  while ( 1 )
  {
    v56 = 0LL;
    v57 = 0;
    Source2 = 0LL;
    switch ( v4 )
    {
      case 0u:
        v27 = dword_140C232CC;
        v28 = off_140C03040 + 5;
LABEL_47:
        v11 = &v28[534 * v27];
        goto LABEL_13;
      case 1u:
        v10 = qword_140C1D030;
LABEL_11:
        if ( !v10 )
          goto LABEL_12;
        goto LABEL_94;
      case 2u:
        v10 = qword_140C1D040;
        goto LABEL_11;
      case 3u:
        v10 = qword_140C1D038;
        v3 = (_DWORD *)(a1 + 520);
        goto LABEL_11;
    }
    if ( v4 != 4 )
    {
      v10 = qword_140C1D048;
      v3 = (_DWORD *)(a1 + 576);
      if ( !qword_140C1D048 )
      {
        v11 = (__int64 *)v7;
LABEL_14:
        v12 = v7;
        v13 = v7;
        goto LABEL_15;
      }
LABEL_94:
      v27 = v6;
      v28 = (__int64 *)(v10 + 40);
      goto LABEL_47;
    }
    if ( qword_140C1D038 == v7 )
    {
LABEL_12:
      v11 = (__int64 *)v7;
      goto LABEL_13;
    }
    v11 = (__int64 *)((char *)&unk_140C1D088 + 4272 * v6);
LABEL_13:
    if ( !v11 )
      goto LABEL_14;
    v12 = *v11;
    v13 = v11[v8];
LABEL_15:
    if ( v3 )
    {
      v14 = v3[6];
      v15 = *((_QWORD *)v3 + 2);
      Source2 = *(_OWORD *)v3;
      if ( !dword_140D0696C )
        LODWORD(v7) = v9;
      v56 = v15;
      v57 = v14;
      if ( dword_140D06B4C )
        LODWORD(v7) = v7 | 0x100;
      if ( !byte_140D068E7 )
        LODWORD(v7) = v7 | 0x80;
      if ( v11 )
      {
        if ( (v13 & 0x400000040C0LL) == 0 && (v12 & 0x1C000000C00LL) == 0 )
          LODWORD(v7) = v7 | 4;
      }
      else
      {
        LODWORD(v7) = v7 | 2;
      }
      v16 = *(__int64 *)((char *)off_140C03040 + 12) - 0x4C0B8FCF0DA965DCLL;
      if ( *(__int64 *)((char *)off_140C03040 + 12) == 0x4C0B8FCF0DA965DCLL )
        v16 = *(__int64 *)((char *)off_140C03040 + 20) + 0x656A43182A720172LL;
      v17 = v7 | 0x20;
      if ( v16 )
        v17 = v7;
      v7 = 0LL;
      if ( byte_140C239E0 )
        v17 |= 0x10u;
      if ( dword_140D06A84 )
        v17 |= 1u;
      if ( v17 )
      {
        v18 = RtlCompareMemory((const void *)(a1 + 28LL * v4 + 520), &Source2, 0x1CuLL);
        v19 = v56;
        if ( v18 == 28 )
          v1 = 1;
        v20 = v57;
        v21 = 28 * v5;
        v52 = v1;
        *(_OWORD *)(v21 + a1 + 520) = Source2;
        *(_QWORD *)(v21 + a1 + 536) = v19;
        *(_DWORD *)(v21 + a1 + 544) = v20;
        *(_DWORD *)(a1 + 4 * v5 + 688) = v17;
        goto LABEL_36;
      }
      LOBYTE(v9) = 64;
    }
    if ( v4 == 3 )
    {
      v12 = 0x1C000000C00LL;
      v13 = 0x400000040C0LL;
    }
    v29 = (_DWORD *)v7;
    if ( v4 != 3 )
      v29 = v3;
    v3 = v29;
    if ( byte_140D069CF == (_BYTE)v7 )
      goto LABEL_58;
    if ( !v29 || (BYTE4(v13) & (unsigned __int8)v9) != 0 && v29[4] < *((_DWORD *)v11 + v8 + 16) )
    {
      LODWORD(v56) = *((_DWORD *)v11 + v8 + 16);
LABEL_58:
      if ( !v29 )
        goto LABEL_59;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v9) == 0
      || v29[2] <= (unsigned int)*((unsigned __int8 *)v11 + v8 + 26) )
    {
      v30 = DWORD2(Source2);
      goto LABEL_105;
    }
LABEL_59:
    v30 = *((unsigned __int8 *)v11 + v8 + 26);
    DWORD2(Source2) = v30;
    if ( !v29 )
      goto LABEL_60;
LABEL_105:
    if ( (v13 & 0x80u) != 0LL && *v29 > (unsigned int)*((unsigned __int8 *)v11 + v8 + 28) )
    {
LABEL_60:
      v31 = *((unsigned __int8 *)v11 + v8 + 28);
      LODWORD(Source2) = v31;
      goto LABEL_61;
    }
    v31 = Source2;
LABEL_61:
    if ( dword_140C23998 )
    {
      v45 = (unsigned int)(100 * dword_140C23998 + (*(_DWORD *)(a1 + 440) >> 1)) / *(_DWORD *)(a1 + 440);
      if ( v45 < v30 )
        v30 = (unsigned int)(100 * dword_140C23998 + (*(_DWORD *)(a1 + 440) >> 1)) / *(_DWORD *)(a1 + 440);
      DWORD2(Source2) = v30;
      if ( v45 < v31 )
        v31 = v45;
      LODWORD(v7) = 0;
      LODWORD(Source2) = v31;
    }
    v32 = *((_DWORD *)v11 + v8 + 11);
    v33 = *(_DWORD *)(a1 + 444);
    if ( v32 )
    {
      v46 = (unsigned int)((*(_DWORD *)(a1 + 440) >> 1) + 100 * v32) / *(_DWORD *)(a1 + 440);
      if ( v46 < v33 )
        v33 = v46;
      LODWORD(v7) = 0;
    }
    if ( !v3 || (v13 & 0x40000000000LL) != 0 && v3[1] > v33 )
      DWORD1(Source2) = v33;
    else
      v33 = DWORD1(Source2);
    if ( byte_140D069E1 != (_BYTE)v7 )
    {
      if ( v3 && (v12 & 0x8000000000LL) == 0 )
      {
LABEL_122:
        if ( (v12 & 0x400) == 0 || *((_BYTE *)v3 + 22) == (_BYTE)v7 || *((_DWORD *)v11 + 14) != (_DWORD)v7 )
          goto LABEL_125;
        goto LABEL_67;
      }
      HIDWORD(Source2) = *((_DWORD *)v11 + 18);
    }
    if ( v3 )
      goto LABEL_122;
LABEL_67:
    BYTE6(v56) = *((_BYTE *)v11 + 56);
    if ( !v3 )
      goto LABEL_68;
LABEL_125:
    if ( (v13 & 0x4000) != 0 && *((_BYTE *)v3 + 23) > *((_BYTE *)v11 + v8 + 77) )
LABEL_68:
      HIBYTE(v56) = *((_BYTE *)v11 + v8 + 77);
    v34 = *((_BYTE *)v11 + 16);
    if ( v34 == 1 || v34 == 2 && *(_BYTE *)(a1 + 484) != (_BYTE)v7 )
      v35 = 1;
    else
      v35 = v7;
    if ( !v3 || (v12 & 0x800) != 0 )
      BYTE5(v56) = v35;
    if ( *((_BYTE *)v11 + 76) == (_BYTE)v7 || (v36 = v7, *(_BYTE *)(a1 + 504) == (_BYTE)v7) )
      v36 = 1;
    if ( !v3 || (v12 & 0x10000000000LL) != 0 )
    {
      v37 = v53;
      if ( v36 )
        v37 = 1;
      BYTE4(v56) = v36;
      v53 = v37;
    }
    if ( v31 < v30 )
      v31 = v30;
    LODWORD(Source2) = v31;
    if ( v33 < v30 )
      v33 = v30;
    DWORD1(Source2) = v33;
    if ( v4 == 4 )
    {
      v47 = *(unsigned __int8 *)(a1 + 627);
      v48 = v33;
      if ( v31 < v33 )
        v48 = v31;
      if ( v48 >= v47 )
      {
        v49 = *(unsigned __int8 *)(a1 + 627);
      }
      else
      {
        v49 = v33;
        if ( v31 < v33 )
          v49 = v31;
      }
      if ( v30 <= v49 )
      {
        v50 = v33;
        if ( v31 < v33 )
          v50 = v31;
        if ( v50 >= v47 )
        {
          DWORD2(Source2) = *(unsigned __int8 *)(a1 + 627);
        }
        else
        {
          if ( v31 < v33 )
            v33 = v31;
          DWORD2(Source2) = v33;
        }
      }
    }
    if ( v36 )
    {
      v38 = dword_140D07088[v5];
      if ( v38 == 1 )
        goto LABEL_89;
      if ( v38 == 3 )
      {
        if ( *(_BYTE *)(a1 + 300) > (unsigned __int8)v7 )
          goto LABEL_89;
      }
      else if ( v38 == 2 && *(_BYTE *)(a1 + 300) == (_BYTE)v7 )
      {
LABEL_89:
        LOBYTE(v57) = 1;
        goto LABEL_90;
      }
    }
    LOBYTE(v57) = v7;
LABEL_90:
    v39 = 28LL * v4;
    v40 = RtlCompareMemory((const void *)(v39 + a1 + 520), &Source2, 0x1CuLL);
    v1 = v52;
    v41 = Source2;
    v42 = v56;
    if ( v40 != 28 )
      v1 = 1;
    *(_DWORD *)(a1 + 4 * v5 + 688) = 0;
    v43 = v57;
    v44 = 28 * v5;
    v52 = v1;
    *(_OWORD *)(v44 + a1 + 520) = v41;
    *(_QWORD *)(v44 + a1 + 536) = v42;
    *(_DWORD *)(v44 + a1 + 544) = v43;
    if ( v3 && RtlCompareMemory(v3, &Source2, 0x1CuLL) == 28 )
    {
      *(_DWORD *)(a1 + 4 * v5 + 688) = 8;
LABEL_36:
      v22 = v51;
      goto LABEL_37;
    }
    v3 = (_DWORD *)(v39 + a1 + 520);
    v22 = ++v51;
LABEL_37:
    v6 = v54;
    ++v4;
    ++v5;
    v9 = 64;
    if ( v4 >= 6 )
      break;
    v7 = 0LL;
  }
  v23 = (_WORD *)(a1 + 712);
  *(_BYTE *)(a1 + 724) = v22 > 1;
  *(_BYTE *)(a1 + 505) = v53;
  for ( i = 0; i < 6; ++i )
  {
    *v23 = 0;
    for ( j = 0; j < 6; ++j )
    {
      if ( i == j
        || RtlCompareMemory((const void *)(a1 + 28LL * i + 520), (const void *)(28LL * j + a1 + 520), 0x1CuLL) == 28 )
      {
        *v23 |= 1 << j;
      }
    }
    ++v23;
  }
  sub_14069DF5C(a1, 0LL);
  return v52;
}

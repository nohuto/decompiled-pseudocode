/*
 * XREFs of sub_140343DC0 @ 0x140343DC0
 * Callers:
 *     sub_140343C60 @ 0x140343C60 (sub_140343C60.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_14021087C @ 0x14021087C (sub_14021087C.c)
 *     sub_140290B74 @ 0x140290B74 (sub_140290B74.c)
 *     sub_1402B1050 @ 0x1402B1050 (sub_1402B1050.c)
 *     sub_1402B4AE0 @ 0x1402B4AE0 (sub_1402B4AE0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F69A0 @ 0x1402F69A0 (sub_1402F69A0.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_1403441B0 @ 0x1403441B0 (sub_1403441B0.c)
 *     sub_14035C560 @ 0x14035C560 (sub_14035C560.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045B7FC @ 0x14045B7FC (sub_14045B7FC.c)
 */

__int64 __fastcall sub_140343DC0(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  BOOL v9; // ebp
  char v10; // al
  BOOL v11; // edi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rax
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE *v23; // r15
  char v24; // cl
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rbp
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v38; // rdx
  int v39; // eax
  _QWORD *v40; // rdi
  char v41; // r15
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KPRCB *v45; // rdi
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdi
  _BYTE *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  int v57; // eax
  char v58; // cl
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // r8
  unsigned int v63; // edx
  char v64; // al
  char v65; // al
  char v66; // cl
  __int64 v67; // rdx
  unsigned int v68; // edx
  char v69; // al
  char v70; // al
  char v71; // cl
  _QWORD v72[11]; // [rsp+30h] [rbp-58h] BYREF
  int v73; // [rsp+A0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  memset(&v72[1], 0, 24);
  if ( v2 )
  {
LABEL_37:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  while ( 1 )
  {
    v5 = sub_1402B4AE0(1, a1, 0LL);
    if ( v5 )
      goto LABEL_26;
    if ( dword_140D06AC0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
          - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL);
      if ( (unsigned int)((0x101010101010101LL
                         * (((v31 & 0x3333333333333333LL)
                           + ((v31 >> 2) & 0x3333333333333333LL)
                           + (((v31 & 0x3333333333333333LL) + ((v31 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < dword_140D06AC0 )
        break;
      v32 = *(_QWORD *)(a1 + 200);
      v33 = *(_QWORD *)(a1 + 34912);
      if ( v32 != v33 )
      {
        v34 = v33 & ~v32;
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v34) == 0 )
        {
          _BitScanForward64(&v35, v34);
          if ( (*(_DWORD *)(qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(a1 + 208) + (unsigned int)v35]]
                          + 236) & 0x400) == 0 )
            break;
        }
      }
    }
    v5 = 0LL;
    v7 = *(_QWORD *)(a1 + 32568);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 == 1 )
        break;
      v8 = v7 ^ ((a1 + 32560) | 1);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 32568);
    }
    while ( v8 )
    {
      v30 = v8 - 88;
      v5 = sub_14021087C(a1, v8 - 88, 0);
      if ( v5 )
        break;
      v36 = *(_QWORD *)(v30 + 400);
      if ( (v36 & 1) != 0 )
      {
        if ( v36 == 1 )
          goto LABEL_8;
        v8 = v36 ^ ((v30 + 392) | 1);
      }
      else
      {
        v8 = *(_QWORD *)(v30 + 400);
      }
    }
    if ( !v5 )
      break;
LABEL_26:
    if ( sub_140290B74(v5) )
    {
      v23 = *(_BYTE **)(a1 + 56);
      if ( (*(_BYTE *)(v5 + 2) & 4) != 0
        && *(char *)(v5 + 195) < 16
        && *(_QWORD *)(v5 + 104)
        && (v28 = *(_QWORD *)(v5 + 104)) != 0
        && (v29 = *(unsigned int *)(a1 + 216) + v28) != 0
        && (unsigned int)sub_1402103E0(v21, v29, v22, 0, 0LL) )
      {
        v24 = 1;
      }
      else
      {
        v24 = *(_BYTE *)(v5 + 195);
      }
      v25 = v24 & 0x7F | (*(_BYTE *)(v5 + 119) << 7);
      *v23 = v25;
      v26 = *(_QWORD *)(a1 + 35000);
      if ( v26 )
      {
        if ( v5 == *(_QWORD *)(a1 + 24) )
          v67 = (unsigned int)dword_140D0504C;
        else
          v67 = v25 & 0x7F;
        sub_14045B7FC(v26, v67, 0LL);
      }
      v27 = *(_QWORD *)(a1 + 56);
      if ( dword_140D068FC )
      {
        v68 = *(_DWORD *)(v5 + 80);
        v69 = (*(_BYTE *)(v27 + 64) ^ *(_BYTE *)(v5 + 512)) & 7 ^ *(_BYTE *)(v27 + 64);
        v70 = (v69 ^ (8 * *(_BYTE *)(v5 + 516))) & 0x38 ^ v69;
        if ( v68 <= *(_DWORD *)(v5 + 84) )
          v68 = *(_DWORD *)(v5 + 84);
        v71 = 64;
        if ( v68 < dword_140D05308 )
          v71 = 0;
        *(_BYTE *)(v27 + 64) = v71 | v70 & 0xBF;
      }
      *(_QWORD *)(a1 + 8) = v5;
      if ( *(_BYTE *)(v5 + 388) == 1 )
        *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v5 + 388) = 2;
      if ( a2 )
        sub_14035C560(a1, 0LL, 0LL);
      if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
        return v5;
LABEL_25:
      __fastfail(0x21u);
    }
    sub_1402F69A0(v21);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v38 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v39 = *(_DWORD *)(v38 + 24) - 1;
        *(_DWORD *)(v38 + 24) = v39;
        if ( !v39 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    v40 = (_QWORD *)(v5 + 216);
    v72[0] = 0LL;
    v41 = 0;
    *v40 = 0LL;
    do
    {
      sub_1403405E0(a1, (ULONG_PTR)(v40 - 27), (__int64)v72);
      v40 = (_QWORD *)v72[0];
      ++v41;
      if ( v72[0] )
        v72[0] = *(_QWORD *)v72[0];
      if ( (v41 & 0xF) == 0 )
        sub_140340300((unsigned __int8 *)(a1 + 12760));
    }
    while ( v40 );
    sub_140340300((unsigned __int8 *)(a1 + 12760));
    v45 = KeGetCurrentPrcb();
    v73 = 0;
    v46 = *((_QWORD *)v45 + 4375);
    if ( v46 )
    {
      if ( *((_BYTE *)v45 + 32) <= 1u )
      {
        v47 = *(_DWORD *)(v46 + 24);
        *(_DWORD *)(v46 + 24) = v47 + 1;
        if ( v47 == -1 )
LABEL_72:
          sub_140418E4C(v45);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      v48 = *((_QWORD *)v45 + 4375);
      if ( v48 )
      {
        if ( *((_BYTE *)v45 + 32) <= 1u )
        {
          v49 = *(_DWORD *)(v48 + 24) - 1;
          *(_DWORD *)(v48 + 24) = v49;
          if ( !v49 )
            sub_140418E4C(v45);
        }
      }
      do
        sub_1402F32E0(&v73, v42, v43, v44);
      while ( *(_QWORD *)(a1 + 48) );
      v50 = *((_QWORD *)v45 + 4375);
      if ( v50 )
      {
        if ( *((_BYTE *)v45 + 32) <= 1u )
        {
          v51 = *(_DWORD *)(v50 + 24);
          *(_DWORD *)(v50 + 24) = v51 + 1;
          if ( v51 == -1 )
            goto LABEL_72;
        }
      }
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      goto LABEL_37;
  }
LABEL_8:
  v5 = sub_1402B4AE0(0, a1, v6);
  if ( v5 )
    goto LABEL_26;
  v9 = *(_BYTE *)(a1 + 35) == 7;
  if ( !a2 )
  {
    sub_14035C560(a1, 1LL, 0LL);
    v53 = *(_QWORD *)(a1 + 24);
    v54 = *(_BYTE **)(a1 + 56);
    if ( (*(_BYTE *)(v53 + 2) & 4) == 0
      || *(char *)(v53 + 195) >= 16
      || !*(_QWORD *)(v53 + 104)
      || (v55 = *(_QWORD *)(v53 + 104)) == 0
      || (v56 = *(unsigned int *)(a1 + 216) + v55) == 0
      || (v57 = sub_1402103E0(v53, v56, v52, 0, 0LL), v58 = 1, !v57) )
    {
      v58 = *(_BYTE *)(v53 + 195);
    }
    v59 = v58 & 0x7F | (*(_BYTE *)(v53 + 119) << 7);
    *v54 = v59;
    v60 = *(_QWORD *)(a1 + 35000);
    if ( v60 )
    {
      if ( v53 == *(_QWORD *)(a1 + 24) )
        v61 = (unsigned int)dword_140D0504C;
      else
        v61 = v59 & 0x7F;
      sub_14045B7FC(v60, v61, 0LL);
    }
    v62 = *(_QWORD *)(a1 + 56);
    if ( dword_140D068FC )
    {
      v63 = *(_DWORD *)(v53 + 80);
      v64 = (*(_BYTE *)(v62 + 64) ^ *(_BYTE *)(v53 + 512)) & 7 ^ *(_BYTE *)(v62 + 64);
      v65 = (v64 ^ (8 * *(_BYTE *)(v53 + 516))) & 0x38 ^ v64;
      if ( v63 <= *(_DWORD *)(v53 + 84) )
        v63 = *(_DWORD *)(v53 + 84);
      v66 = 64;
      if ( v63 < dword_140D05308 )
        v66 = 0;
      *(_BYTE *)(v62 + 64) = v66 | v65 & 0xBF;
    }
  }
  v10 = *(_BYTE *)(a1 + 35);
  if ( (v10 & 1) != 0 )
    goto LABEL_25;
  v11 = (v10 & 2) != 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  sub_1402B1050((__int64)KeGetCurrentPrcb(), 0);
  if ( v11 && !v9 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 192);
  result = sub_1403441B0(a1);
  if ( !result )
  {
    v14 = *(unsigned __int16 *)(v12 + 138);
    LODWORD(v72[1]) = *(unsigned __int16 *)(v12 + 138);
    *(_OWORD *)((char *)&v72[1] + 4) = 0LL;
    v72[2] = qword_140D31700[v14];
    v15 = *(_DWORD *)(v72[2] + 16LL);
    while ( 1 )
    {
      while ( !v15 )
      {
        v16 = HIDWORD(v72[1]) + 1;
        HIDWORD(v72[1]) = v16;
        if ( v16 == (unsigned __int16)word_140D05000 )
          return 0LL;
        v19 = *(unsigned int *)(qword_140C506D8
                              + 4LL * (v16 + LODWORD(v72[1]) * (unsigned int)(unsigned __int16)word_140D05000));
        if ( (_DWORD)v19 == -1 )
          return 0LL;
        v20 = qword_140D31700[v19];
        v72[3] = 0LL;
        v72[2] = v20;
        v15 = *(_DWORD *)(v20 + 16);
      }
      _BitScanForward((unsigned int *)&v17, v15);
      v15 &= ~(1 << v17);
      v18 = *(_QWORD *)(v72[2] + 8 * v17 + 24);
      if ( !v18 )
        return 0LL;
      if ( v18 != *(_QWORD *)(a1 + 192) )
      {
        result = sub_1403441B0(a1);
        if ( result )
          break;
      }
    }
  }
  return result;
}

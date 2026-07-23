/*
 * XREFs of sub_140328690 @ 0x140328690
 * Callers:
 *     sub_14029C154 @ 0x14029C154 (sub_14029C154.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_140328510 @ 0x140328510 (sub_140328510.c)
 *     sub_140329470 @ 0x140329470 (sub_140329470.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 * Callees:
 *     sub_14023261C @ 0x14023261C (sub_14023261C.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14023A12C @ 0x14023A12C (sub_14023A12C.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140268A70 @ 0x140268A70 (sub_140268A70.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 *     sub_14033E11C @ 0x14033E11C (sub_14033E11C.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 *     sub_1405B7728 @ 0x1405B7728 (sub_1405B7728.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_1405B809C @ 0x1405B809C (sub_1405B809C.c)
 */

__int64 __fastcall sub_140328690(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  char v4; // r15
  char v5; // r11
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r14
  __int64 v24; // rbx
  char v25; // r15
  __int64 v26; // rbx
  signed __int32 v27; // eax
  __int64 v28; // rax
  ULONG_PTR v29; // r13
  __int64 v30; // r15
  int v31; // r12d
  unsigned __int64 *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 *v38; // r14
  unsigned __int8 CurrentIrql; // bl
  __int64 v40; // r15
  struct _KTHREAD *CurrentThread; // rbx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // r14d
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int16 v49; // bx
  __int16 v50; // bx
  unsigned __int64 v51; // rdx
  char v52; // al
  __int64 v53; // rcx
  unsigned __int64 v54; // r14
  __int64 v55; // rdi
  struct _KPRCB *v56; // r8
  __int64 v57; // rdx
  bool v58; // zf
  signed __int32 v59; // eax
  unsigned __int8 v60; // bl
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rdx
  ULONG_PTR v65; // r15
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // r12
  char v69; // al
  _QWORD *v70; // r12
  __int64 v71; // rax
  int v72; // ecx
  unsigned __int64 v73; // rbx
  unsigned __int64 v74; // r14
  __int64 v75; // rax
  _SLIST_ENTRY *v76; // rbx
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v80; // r9
  int v81; // eax
  int v82; // ecx
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r9
  __int64 v85; // r8
  int v86; // eax
  unsigned __int8 v87; // [rsp+20h] [rbp-138h] BYREF
  char v88; // [rsp+21h] [rbp-137h]
  unsigned int v89; // [rsp+24h] [rbp-134h]
  __int64 v90; // [rsp+28h] [rbp-130h]
  int v91; // [rsp+30h] [rbp-128h] BYREF
  int v92; // [rsp+34h] [rbp-124h]
  unsigned __int64 *v93; // [rsp+38h] [rbp-120h]
  __int64 v94; // [rsp+40h] [rbp-118h]
  __int64 v95; // [rsp+48h] [rbp-110h]
  int v96; // [rsp+50h] [rbp-108h] BYREF
  int v97; // [rsp+54h] [rbp-104h] BYREF
  unsigned __int64 v98; // [rsp+58h] [rbp-100h]
  __int64 v99; // [rsp+60h] [rbp-F8h]
  __int128 v100; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v101; // [rsp+78h] [rbp-E0h]
  char *v102; // [rsp+80h] [rbp-D8h]
  _QWORD v103[16]; // [rsp+90h] [rbp-C8h] BYREF

  v102 = a4;
  v4 = a3;
  v91 = a3;
  v5 = 1;
  v87 = 17;
  v6 = 0;
  v88 = 1;
  v7 = 0LL;
  v92 = 0;
  v8 = 0LL;
  v89 = 0;
  v90 = 0LL;
  v9 = 0LL;
  v100 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v98 = v11;
  v12 = 48 * ((*(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v95 = v12;
  v13 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x21FFFFFFFFF0LL);
  if ( v13 )
    v13 += 40 * ((a1 >> 18) & 7);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v14 & 1) == 0 )
    v15 = (__int64 *)v14;
  v99 = *v15;
  v101 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v99 + 60) & 0x3FF));
  if ( v10 > v11 )
    goto LABEL_70;
  v16 = 0xFFFFDE0000000028uLL;
  while ( 2 )
  {
    v17 = *(_QWORD *)v10;
    v18 = 0;
    LODWORD(v94) = 0;
    if ( (v17 & 1) != 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        if ( v8 )
        {
          sub_140334790(v8, v87);
          v8 = 0LL;
          v90 = 0LL;
        }
        sub_14023A12C((__int64 *)v10);
      }
      v19 = 0LL;
      v10 += 8LL;
      goto LABEL_63;
    }
    if ( (v17 & 8) != 0 )
    {
      v18 = 1;
      LODWORD(v94) = 1;
    }
    v20 = v17;
    if ( qword_140C50780 && (v17 & 0x10) == 0 )
      v20 = v17 & ~qword_140C50780;
    v21 = v20 >> 16;
    v22 = v21 ^ v9;
    v93 = (unsigned __int64 *)v21;
    if ( !v8 )
    {
      if ( (v22 & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
LABEL_19:
        v23 = *(_QWORD *)v21;
        if ( (*(_QWORD *)v21 & 1) == 0 && (*(_QWORD *)v21 & 0xC00LL) != 0x800 )
        {
          v8 = 0LL;
          v90 = 0LL;
LABEL_26:
          v24 = v23;
          v94 = v8;
          if ( qword_140C50780 && (v23 & 0x10) == 0 )
            v24 = v23 & ~qword_140C50780;
          v25 = v91;
          v26 = v24 >> 16;
          if ( (*(_BYTE *)(v99 + 62) & 0xC) == 0 && (v91 & 1) != 0 )
          {
            sub_140339C20(0LL, (*(_DWORD *)(v99 + 56) >> 20) & 0x7F, &v100);
            v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v100, 1u);
            v28 = sub_1403250B0(v101, DWORD2(v100) & (unsigned int)v27 | HIDWORD(v100), 2u);
            v29 = v28;
            if ( v28 != -1 )
            {
              v30 = 48 * v28 - 0x220000000000LL;
              v31 = sub_14033D7D0((v23 >> 5) & 0x1F);
              if ( sub_140268A70(v30, v31) )
              {
                if ( v90 )
                  sub_140334790(v90, v87);
                sub_1402359C4(v29, 1, v31);
                *(_QWORD *)(v30 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
              }
              else
              {
                v90 = v94;
                if ( v94 )
                {
                  v32 = v93;
LABEL_36:
                  sub_14033E11C(v99, v26, 1LL);
                  v34 = (v23 >> 5) & 0x1F;
                  sub_14033C880(v30, v32, (unsigned int)v34, 18LL);
                  v35 = sub_1402CBD10(v10, v29, (unsigned int)v34 | 0x20000000);
                  *v32 = v35;
                  v23 = v35;
LABEL_47:
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
                  {
                    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
                    v36 = (-1LL << (CurrentIrql + 1)) & 4;
                    v7 = (unsigned int)v36 | *(_DWORD *)(v16 + 20);
                    *(_DWORD *)(v16 + 20) = v7;
                  }
                  v40 = v95;
                  v97 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
                  {
                    do
                      sub_1402F32E0(&v97, v36, v7, v16);
                    while ( *(__int64 *)(v40 + 24) < 0 );
                  }
                  *(_QWORD *)(v40 + 24) ^= (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( dword_140D06B08 )
                  {
                    if ( (dword_140D06B08 & 1) != 0 )
                    {
                      v78 = KeGetCurrentIrql();
                      if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        v80 = *((_QWORD *)CurrentPrcb + 4375);
                        v81 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                        v58 = (v81 & *(_DWORD *)(v80 + 20)) == 0;
                        v7 = (unsigned int)v81 & *(_DWORD *)(v80 + 20);
                        *(_DWORD *)(v80 + 20) = v7;
                        if ( v58 )
                          sub_140418E4C(CurrentPrcb);
                      }
                    }
                  }
                  __writecr8(CurrentIrql);
                  if ( v18 )
                  {
                    v23 = sub_1402CBD10(v10, (v23 >> 12) & 0xFFFFFFFFFFLL, 536870913);
                  }
                  else if ( (v91 & 4) != 0 && (v23 & 0x42) == 0 && (v23 & 0x800) != 0 )
                  {
                    v23 |= 0x42uLL;
                  }
                  v11 = v98;
                  v19 = v23 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C51864 & 1) << 8);
                  goto LABEL_61;
                }
              }
              v32 = v93;
              v33 = sub_140273AAC((ULONG_PTR)v93, (__int64)&v87);
              v23 = *v32;
              v90 = v33;
              if ( (v23 & 1) != 0 || (v23 & 0x800) != 0 && (v23 & 0x400) == 0 )
              {
                sub_140334790(v33, v87);
                sub_140268408(v30);
                v11 = v98;
                v8 = 0LL;
                v90 = 0LL;
                v9 = 0LL;
                goto LABEL_65;
              }
              goto LABEL_36;
            }
            v8 = v90;
          }
          if ( (v25 & 2) == 0 )
          {
            if ( v8 )
            {
              sub_140334790(v8, v87);
              v90 = 0LL;
            }
            CurrentThread = KeGetCurrentThread();
            v42 = *((unsigned __int8 *)CurrentThread + 1388);
            v43 = *((_DWORD *)CurrentThread + 342);
            *((_BYTE *)CurrentThread + 1388) = 1;
            v44 = v42 + 2 * v43;
            v45 = (__int64)(v11 - v10) >> 3;
            if ( (unsigned int)v45 > v43 )
            {
              if ( (unsigned int)v45 <= 0xF )
                *((_DWORD *)CurrentThread + 342) = v45;
              else
                *((_DWORD *)CurrentThread + 342) = 15;
            }
            v46 = sub_14031C860(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
            if ( v46 < 0 )
            {
              v82 = v92;
              if ( v92 >= 0 )
                v82 = v46;
              v92 = v82;
            }
            *((_DWORD *)CurrentThread + 342) = v44 >> 1;
            *((_BYTE *)CurrentThread + 1388) = v44 & 1;
          }
          v88 = 0;
          goto LABEL_60;
        }
        while ( 1 )
        {
          v90 = sub_140273AF0(v21, (__int64)&v87);
          if ( v90 )
            break;
          sub_14031C860(2uLL, v21, 0, 0LL);
        }
        v17 = *(_QWORD *)v10;
        v18 = v94;
        v8 = v90;
        v11 = v98;
        v16 = 0xFFFFDE0000000028uLL;
        goto LABEL_23;
      }
LABEL_17:
      if ( (_DWORD)v7 )
      {
        sub_140333AC0(v10 - 8LL * (unsigned int)v7, v103, v7, v12);
        v89 = 0;
      }
      goto LABEL_19;
    }
    if ( (v22 & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      sub_140334790(v8, v87);
      v7 = v89;
      goto LABEL_17;
    }
LABEL_23:
    if ( (v17 & 1) != 0 )
      goto LABEL_60;
    v23 = *(_QWORD *)v21;
    if ( (*(_QWORD *)v21 & 1) == 0 && (*(_QWORD *)v21 & 0xC00LL) != 0x800 )
      goto LABEL_26;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v21;
        v61 = *(_QWORD *)v21;
        v62 = *(_QWORD *)v21;
        if ( (*(_QWORD *)v21 & 1) != 0 )
          goto LABEL_112;
        if ( (*(_QWORD *)v21 & 0xC00LL) != 0x800 )
          goto LABEL_26;
        if ( !v61 || !qword_140C50780 || (v61 & qword_140C50780) != 0 )
        {
          v62 = *(_QWORD *)v21;
          if ( qword_140C50780 && (v61 & 0x10) == 0 )
            v62 = v61 & ~qword_140C50780;
LABEL_112:
          v63 = (v62 >> 12) & 0xFFFFFFFFFFLL;
          if ( v63 <= qword_140C50840 )
          {
            v64 = 6 * v63;
            if ( (*(_QWORD *)(48 * v63 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
              break;
          }
        }
      }
      v65 = 48 * v63 - 0x220000000000LL;
      v96 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
      {
        do
        {
          do
            sub_1402F32E0(&v96, v64, v7, v16);
          while ( *(__int64 *)(v65 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) );
        v16 = 0xFFFFDE0000000028uLL;
      }
      v7 = (__int64)v93;
      v23 = *v93;
      if ( *v93 == v61 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v7;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v65 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
    {
      v75 = sub_14059A31C(v65, 2LL);
      v7 = (__int64)v93;
      v65 = v75;
      v23 = *v93;
    }
    if ( !v65 )
      goto LABEL_26;
    if ( (v23 & 1) != 0 )
    {
      if ( (*(_BYTE *)(v65 + 35) & 0x40) != 0 )
        goto LABEL_139;
      v36 = 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v65 + 24) ^= (*(_QWORD *)(v65 + 24) ^ (*(_QWORD *)(v65 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_46:
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_47;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v65 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
    {
      v65 = sub_140599EBC(0LL, (__int64)(v10 << 25) >> 16, v7);
      if ( !v65 )
      {
        v9 = 0LL;
        goto LABEL_65;
      }
    }
    if ( (*(_BYTE *)(v65 + 34) & 0x20) == 0 && (*(_BYTE *)(v65 + 35) & 0x40) == 0 )
    {
      v66 = *(_QWORD *)(v65 + 16);
      v67 = v66 >> 11;
      if ( (v66 & 0x400) == 0 )
        v67 = v66 >> 3;
      if ( (v67 & 1) != 0 )
      {
        v76 = (_SLIST_ENTRY *)sub_1405B7B38(v65, 0LL, ((__int64)(v11 - v10) >> 3) + 1);
        if ( v76 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          sub_140334790(v8, v87);
          v8 = 0LL;
          v90 = 0LL;
          if ( v76 == (_SLIST_ENTRY *)-1LL )
          {
            sub_1405B809C();
          }
          else
          {
            sub_1405B7EB4(v76);
            sub_1405B7728(v76);
          }
          v9 = 0LL;
          goto LABEL_65;
        }
      }
      if ( (sub_140326870(v65, 0) & 3) != 0 )
      {
        sub_1403941B0(v65, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v9 = 0LL;
        goto LABEL_65;
      }
      v16 = 0x8000000000000000uLL;
      v68 = *(_QWORD *)(v65 + 8);
      v69 = *(_BYTE *)(v65 + 34) & 0xFE;
      ++*(_WORD *)(v65 + 32);
      *(_BYTE *)(v65 + 34) = v69 | 6;
      v70 = (_QWORD *)(v68 | 0x8000000000000000uLL);
      v71 = (*(_QWORD *)(v65 + 16) >> 5) & 7LL;
      v72 = *(unsigned __int8 *)(v65 + 34) >> 6;
      if ( v72 != 1 )
      {
        if ( v72 )
        {
          if ( v72 == 2 )
            LOBYTE(v71) = v71 | 0x18;
        }
        else
        {
          LOBYTE(v71) = v71 | 8;
        }
      }
      v7 = 0x140000000uLL;
      v36 = ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(v65 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12;
      v73 = v36 | qword_140016200[v71 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
      if ( v10 >= 0xFFFFF68000000000uLL )
      {
        v36 = 0xFFFFF6FFFFFFFFFFuLL;
        if ( v10 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v74 = (__int64)(v10 << 25) >> 16;
          if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v10 == 0xFFFFF6FB7DBEDF68uLL )
              v73 |= 0x8000000000000000uLL;
            else
              v73 &= ~0x8000000000000000uLL;
            v77 = sub_14023261C(v10);
            v36 = 0xFFFFF6FFFFFFFFFFuLL;
            v7 = 0x140000000uLL;
            if ( v77 )
              v73 |= 4uLL;
          }
          if ( v10 <= 0xFFFFF6BFFFFFFF78uLL )
            v73 |= 4uLL;
          if ( v74 < 0xFFFF800000000000uLL )
          {
            v37 = HIBYTE(word_140C51864);
          }
          else
          {
            if ( byte_140C53F50[((v74 >> 39) & 0x1FF) - 256] == 1
              || v74 >= 0xFFFFF68000000000uLL && v74 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
LABEL_45:
              v38 = v93;
              *v70 = v73 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C51864 & 1 | 0xA000000000000LL) << 8);
              *(_QWORD *)(v65 + 24) = *(_QWORD *)(v65 + 24) & 0xC000000000000000uLL | 1;
              v23 = *v38;
              goto LABEL_46;
            }
            if ( v74 < qword_140C540C0 || v74 > qword_140C51BF0 )
              v37 = (unsigned __int8)word_140C51864;
            else
              v37 = HIBYTE(word_140C51864);
          }
          if ( !v37 )
            goto LABEL_45;
        }
      }
      v73 |= 0x100uLL;
      goto LABEL_45;
    }
LABEL_139:
    _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_60:
    v19 = 0LL;
LABEL_61:
    v8 = v90;
    v10 += 8LL;
    v9 = (unsigned __int64)v93;
    v12 = v95;
    if ( v18 >= 2 )
      v19 &= ~1uLL;
LABEL_63:
    v47 = v89;
    if ( v89 || v19 )
    {
      v103[v89] = v19;
      v47 = (unsigned int)(v47 + 1);
      v89 = v47;
      if ( (_DWORD)v47 == 16 )
      {
        if ( v8 )
        {
          sub_140334790(v8, v87);
          v8 = 0LL;
          v90 = 0LL;
        }
        sub_140333AC0(v10 - 128, v103, 16LL, v12);
        v89 = 0;
      }
    }
LABEL_65:
    v12 = v95;
    v4 = v91;
    v16 = 0xFFFFDE0000000028uLL;
    if ( v10 <= v11 )
    {
      v7 = v89;
      continue;
    }
    break;
  }
  if ( !v8 )
    goto LABEL_67;
  v91 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v91, v47, v7, v16);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  *(_BYTE *)(v8 + 34) &= ~0x20u;
  v49 = *(_WORD *)(v8 + 32);
  if ( !v49 )
    sub_1405AD67C(v8);
  v50 = v49 - 1;
  *(_WORD *)(v8 + 32) = v50;
  if ( !v50 && _bittest64((const signed __int64 *)(v8 + 40), 0x35u) )
  {
LABEL_200:
    sub_140338500(v8, 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4));
    goto LABEL_96;
  }
  if ( !(unsigned int)sub_140337EA0(v8, v47, v7, v16) )
    goto LABEL_96;
  v51 = *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL;
  if ( v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL )
  {
    v52 = *(_BYTE *)(v8 + 35);
    if ( (v52 & 0x20) != 0 )
    {
      *(_BYTE *)(v8 + 35) = v52 & 0xDF;
      goto LABEL_95;
    }
  }
  v53 = *(_QWORD *)(v8 + 40);
  if ( v53 < 0 && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0
    || v51 <= 0xFFFFF6BFFFFFFF78uLL && v51 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v8 + 35) & 0x20) != 0
    || !v50 && (*(_QWORD *)(v8 + 24) & 0x4000000000000000LL) != 0 )
  {
    v54 = 1LL;
    v55 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v53 >> 43) & 0x3FF));
    sub_14028CE10(v55, 1LL);
  }
  else
  {
    v54 = 1LL;
    v55 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v53 >> 43) & 0x3FF));
  }
  if ( (ULONG_PTR *)v55 != &StartContext || (v56 = KeGetCurrentPrcb(), v57 = *((int *)v56 + 8615), (_DWORD)v57 == -1) )
  {
LABEL_164:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 16960), v54);
    goto LABEL_95;
  }
  if ( (unsigned __int64)(v57 + 1) > 0x100 )
  {
LABEL_160:
    if ( (int)v57 > 192 && (_DWORD)v57 == _InterlockedCompareExchange((volatile signed __int32 *)v56 + 8615, 192, v57) )
      v54 = (int)v57 - 192 + 1LL;
    if ( !v54 )
      goto LABEL_95;
    goto LABEL_164;
  }
  while ( 1 )
  {
    v59 = _InterlockedCompareExchange((volatile signed __int32 *)v56 + 8615, v57 + 1, v57);
    v58 = (_DWORD)v57 == v59;
    LODWORD(v57) = v59;
    if ( v58 )
      break;
    if ( v59 == -1 || (unsigned __int64)(v59 + 1LL) > 0x100 )
      goto LABEL_160;
  }
LABEL_95:
  if ( !v50 )
    goto LABEL_200;
LABEL_96:
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v60 = v87;
  if ( v87 != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v83 = KeGetCurrentIrql();
        if ( v83 <= 0xFu && v87 <= 0xFu && v83 >= 2u )
        {
          v84 = KeGetCurrentPrcb();
          v85 = *((_QWORD *)v84 + 4375);
          v60 = v87;
          v86 = ~(unsigned __int16)(-1LL << (v87 + 1));
          v58 = (v86 & *(_DWORD *)(v85 + 20)) == 0;
          *(_DWORD *)(v85 + 20) &= v86;
          if ( v58 )
            sub_140418E4C(v84);
        }
      }
    }
    __writecr8(v60);
  }
LABEL_67:
  if ( v89 )
    sub_140333AC0(v10 - 8LL * v89, v103, v89, v95);
  v5 = v88;
  v6 = v92;
LABEL_70:
  if ( v102 )
    *v102 = v5;
  return v6;
}

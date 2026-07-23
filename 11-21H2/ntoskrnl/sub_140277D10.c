/*
 * XREFs of sub_140277D10 @ 0x140277D10
 * Callers:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_14025AEEC @ 0x14025AEEC (sub_14025AEEC.c)
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 *     sub_1405897C4 @ 0x1405897C4 (sub_1405897C4.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 *     sub_140982F64 @ 0x140982F64 (sub_140982F64.c)
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_14024EA68 @ 0x14024EA68 (sub_14024EA68.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_14027738C @ 0x14027738C (sub_14027738C.c)
 *     sub_1402783C0 @ 0x1402783C0 (sub_1402783C0.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     sub_1403D6C20 @ 0x1403D6C20 (sub_1403D6C20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059726C @ 0x14059726C (sub_14059726C.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 */

__int64 __fastcall sub_140277D10(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 *a13)
{
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  int v16; // r12d
  int v18; // r10d
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned __int8 CurrentIrql; // dl
  int v23; // edx
  _DWORD *v24; // r9
  unsigned int v25; // edi
  unsigned int *v26; // rdx
  __int64 v27; // rsi
  ULONG_PTR v28; // r13
  unsigned int v29; // ebx
  unsigned __int8 *v30; // r10
  __int64 v31; // r8
  unsigned __int8 *v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rax
  bool v37; // r12
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r13
  __int64 v41; // r15
  unsigned __int64 v42; // r14
  __int64 v43; // rsi
  int v44; // ecx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // r14
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  unsigned int v50; // esi
  __int64 v52; // rbx
  char v53; // r14
  __int64 v54; // rbx
  int v55; // eax
  int v56; // r9d
  int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r10
  unsigned int v61; // ebx
  unsigned int v62; // r8d
  unsigned __int64 *v63; // rdx
  unsigned __int64 v64; // rax
  ULONG_PTR v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // ecx
  unsigned __int64 v70; // rsi
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v73; // r9
  int v74; // eax
  bool v75; // zf
  BOOL v76; // ecx
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  __int64 v79; // r9
  int v80; // eax
  unsigned int *v81; // r11
  __int64 v82; // rcx
  struct _KPRCB *v83; // r8
  __int64 v84; // rdx
  signed __int32 v85; // eax
  unsigned int v86; // [rsp+50h] [rbp-B0h]
  BOOL v87; // [rsp+54h] [rbp-ACh]
  int v88; // [rsp+5Ch] [rbp-A4h]
  int v89; // [rsp+60h] [rbp-A0h] BYREF
  int v90; // [rsp+64h] [rbp-9Ch]
  int v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v93; // [rsp+78h] [rbp-88h]
  unsigned int *v94; // [rsp+80h] [rbp-80h]
  unsigned int *v95; // [rsp+88h] [rbp-78h]
  __int64 v96; // [rsp+90h] [rbp-70h]
  int v97; // [rsp+98h] [rbp-68h] BYREF
  int v98; // [rsp+9Ch] [rbp-64h]
  int v99; // [rsp+A0h] [rbp-60h]
  int v100; // [rsp+A4h] [rbp-5Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v102; // [rsp+B0h] [rbp-50h]
  int v103; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v104; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v105; // [rsp+C8h] [rbp-38h]
  __int64 v106; // [rsp+D0h] [rbp-30h]
  __int64 v107; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v110; // [rsp+F8h] [rbp-8h]
  __int64 v111; // [rsp+100h] [rbp+0h]
  unsigned __int64 v112; // [rsp+108h] [rbp+8h]
  __int64 v113; // [rsp+110h] [rbp+10h]
  bool v114; // [rsp+118h] [rbp+18h]
  int v115; // [rsp+119h] [rbp+19h]
  __int16 v116; // [rsp+11Dh] [rbp+1Dh]
  char v117; // [rsp+11Fh] [rbp+1Fh]
  unsigned int *v118; // [rsp+120h] [rbp+20h]
  __int64 v119; // [rsp+128h] [rbp+28h]
  __int64 *v120; // [rsp+130h] [rbp+30h]
  __int128 v121; // [rsp+138h] [rbp+38h] BYREF
  __int64 v122; // [rsp+148h] [rbp+48h]
  _QWORD v123[2]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v124[2]; // [rsp+160h] [rbp+60h] BYREF

  v13 = 0LL;
  v14 = a6;
  v15 = a1;
  v16 = a10;
  v18 = a11;
  v120 = a13;
  v122 = 0LL;
  v117 = 0;
  v96 = a1;
  v20 = a12;
  BugCheckParameter2 = a3;
  v21 = a7;
  v102 = a6;
  v86 = a8;
  v88 = a10;
  v91 = a11;
  v92 = a12;
  v89 = 0;
  v107 = 0LL;
  v108 = 0LL;
  v115 = 0;
  v116 = 0;
  v121 = 0LL;
  if ( (dword_140C29CB0 & 1) != 0 )
  {
    memset(&dword_140C29CC0, 0, 0x2E4uLL);
    v20 = v92;
    v21 = a7;
    v18 = v91;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a8 < (unsigned __int16)word_140D05000 )
  {
    if ( !*(_QWORD *)(24512LL * a8 + *(_QWORD *)(v15 + 16) + 22608) && (_DWORD)dword_140C4E560 )
      return 3221225495LL;
    v20 = v92;
  }
  if ( CurrentIrql == 2 || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0 )
  {
    v16 = a10 | 8;
    v88 = a10 | 8;
  }
  if ( (v16 & 0x20000000) == 0 )
  {
    if ( (int)sub_14026A784(v15, a6, 0LL, 2u) < 0 )
      return 3221225626LL;
    v20 = v92;
    v21 = a7;
    v18 = v91;
  }
  if ( v20 )
    v98 = a6 + (*(_DWORD *)(v20 + 40) >> 12);
  else
    v98 = 0;
  if ( (v16 & 0x40) != 0 )
  {
    if ( a2 == 0x100000 )
      v16 |= 0x8000u;
    if ( _bittest64(&qword_140D068D8, 0x25u) )
    {
      v55 = 0;
      v56 = 0;
    }
    else
    {
      v55 = 1;
      v56 = 1;
    }
    v97 = v56;
    do
    {
      v57 = v55;
      if ( a6 == qword_14001C780[v55] )
        break;
      v56 = v55 + 1;
      v97 = ++v55;
    }
    while ( (unsigned int)(v57 + 1) < 3 );
    v58 = sub_1403D6C20(v15, a8, (unsigned int)&v97, v56, v16, v18, v21);
    if ( v58 )
    {
      v59 = 0xAAAAAAAAAAAAAAABuLL * ((v58 + 0x220000000000LL) >> 4);
      if ( v59 + a6 - 1 <= BugCheckParameter2 )
      {
        v60 = v92;
        *v120 = v59;
        if ( v60 )
        {
          v62 = *(_DWORD *)(v60 + 40);
          v63 = (unsigned __int64 *)(v60 + 8 * (((unsigned __int64)v62 >> 12) + 6));
          if ( (*(_DWORD *)(v58 + 16) & 0x3E0LL) != 0 )
            *(_QWORD *)(v60 + 24) = 1LL;
          if ( a6 )
          {
            do
            {
              v64 = v59 + v13++;
              *v63++ = v64;
            }
            while ( v13 < a6 );
            v62 = *(_DWORD *)(v60 + 40);
          }
          *(_DWORD *)(v60 + 40) = v62 + ((_DWORD)a6 << 12);
        }
        return 0LL;
      }
      sub_140213FA8(v59, a6);
      v61 = -1073741801;
    }
    else
    {
      v61 = -1073741801;
    }
  }
  else if ( (*(_DWORD *)(v15 + 4) & 0x20) != 0 || (unsigned int)sub_140285380(v15, a6 + 160) )
  {
    v103 = v16 & 0x10000000;
    if ( (v16 & 0x10000000) != 0 )
      goto LABEL_17;
    v23 = 2;
    if ( a6 >= 2 )
      v23 = a6;
    sub_14024B428(2uLL, v23, (__int64)&v121);
    if ( DWORD1(v121) )
    {
LABEL_17:
      v87 = 0;
      if ( (v16 & 0xB800008) == 0x8000000 )
        v87 = dword_140C4E560 != 0;
      if ( a8 >= (unsigned __int16)word_140D05000 )
        v86 = a8 | 0x80000000;
      v95 = (unsigned int *)sub_14023FF18(v15, 1u);
      v24 = v95;
      v118 = 0LL;
      v25 = -1;
      v106 = 0LL;
      v26 = &v95[4 * *v95 + 4];
      v94 = v26;
      if ( ((a4 - 1) & a4) != 0 )
        a4 = 0LL;
      v109 = a2;
      v111 = a4;
      v100 = v16 & 0x2000;
      v113 = 0LL;
      v112 = a6;
      v114 = (v16 & 0x2000) != 0;
      v27 = *(_QWORD *)(v15 + 16);
      v28 = BugCheckParameter2;
      v119 = v27;
      v90 = 0;
LABEL_24:
      while ( 2 )
      {
        v29 = dword_140D05004;
        v30 = 0LL;
        v93 = 0LL;
        if ( (unsigned int)dword_140D05004 > 1 )
        {
          v31 = v86;
          if ( (v86 & 0x80000000) == 0 )
          {
            v67 = 24512LL * v86;
          }
          else
          {
            if ( v25 == -1 )
            {
              v65 = *(_QWORD *)(v15 + 16712);
              if ( v28 <= v65 )
                v65 = v28;
              v66 = sub_1402C1550(v65);
              v30 = 0LL;
              v24 = v95;
              v25 = *(_DWORD *)(v66 + 8);
              v106 = qword_140C506D8 + 4LL * v25 * (unsigned __int16)word_140D05000;
              v26 = v94;
              v31 = v86;
              v118 = (unsigned int *)(v106 + 4LL * (unsigned __int16)word_140D05000);
            }
            v67 = 24512LL * v25;
          }
          v68 = v27 + v67;
          if ( (*(_DWORD *)(v68 + 22784) & 1) != 0 )
          {
            v30 = (unsigned __int8 *)(v68 + 22821);
            v93 = (unsigned __int8 *)(v68 + 22821);
            if ( a9 >= 0 )
            {
              v69 = 0;
              do
              {
                if ( *v30 == a9 )
                  break;
                ++v30;
                ++v69;
              }
              while ( v69 < v29 );
              v93 = v30;
              v29 = 1;
            }
          }
        }
        else
        {
          v31 = v86;
        }
        v32 = &v30[v29];
        v105 = v32;
        while ( 1 )
        {
          LODWORD(v33) = *v24;
          v110 = v28;
          if ( (_DWORD)v33 )
          {
            while ( 1 )
            {
              v33 = (unsigned int)(v33 - 1);
              v99 = v33;
              v34 = v26[2 * v33];
              v35 = v26[2 * v33 + 1];
              v36 = *(_QWORD *)&v24[4 * (unsigned int)v33 + 6];
              v107 = *(_QWORD *)&v24[4 * (unsigned int)v33 + 4];
              v108 = v36 + v107;
              if ( v109 >= v36 + v107 )
                break;
              if ( ((int)v31 < 0 || (_DWORD)v34 == (_DWORD)v31) && (!v30 || (_DWORD)v35 == *v30) )
              {
                while ( 1 )
                {
                  if ( !(unsigned int)sub_1402783C0(&v107, v35)
                    || !*(_QWORD *)(*(_QWORD *)(v15 + 16) + 24512 * v34 + 22608) && (_DWORD)dword_140C4E560 )
                  {
                    v30 = v93;
                    LODWORD(v33) = v99;
                    v24 = v95;
                    v31 = v86;
                    break;
                  }
                  v37 = v114;
                  v38 = v112;
                  v39 = v108;
                  v104 = v112;
                  v89 = 0;
                  if ( v114 && v112 > v108 - v107 )
                  {
                    v38 = v108 - v107;
                    v104 = v108 - v107;
                  }
                  v40 = v108 - v38;
                  v41 = 48 * (v108 - v38) - 0x220000000000LL;
                  if ( !v114 )
                  {
                    v42 = sub_140278460(v15, 48 * (int)v40, v112, v88, (__int64)&v89);
                    if ( v42 )
                      goto LABEL_36;
                    v15 = v96;
                    if ( v89 )
                    {
                      ++dword_140C29E98;
                      sub_1405A54BC(v96, 0LL);
                    }
                  }
                  v42 = sub_14027738C(v15, v40, v104, v110, (__int64)&v121, v88, -1, v92, a7, 0LL);
                  if ( v92 )
                  {
                    v44 = *(_DWORD *)(v92 + 40) >> 12;
                    if ( v44 == v98 )
                      goto LABEL_51;
                    v112 = (unsigned int)(v98 - v44);
                  }
                  else if ( !v42 )
                  {
LABEL_51:
                    v46 = 1;
                    sub_14023FD0C((__int64)v95, 1);
                    sub_140250BDC((__int64)&v121);
                    v47 = v102;
                    if ( v100 )
                    {
                      v50 = a7;
                    }
                    else
                    {
                      v48 = (v40 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v49 = (v102 + v40) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v48 < v49 )
                        sub_1402C38D0(v96, v48, v49 - v48, 1, 1);
                      v50 = a7;
                      sub_140265BE4((unsigned __int64 *)(48 * v40 - 0x220000000000LL), v47, a7);
                    }
                    if ( (v88 & 0x40000000) == 0 )
                    {
                      v52 = 3 * v47;
                      v53 = v91;
                      if ( (v88 & 0x100000) != 0 )
                        v46 = 2;
                      v54 = v41 + 16 * v52;
                      do
                      {
                        sub_14024EA68(v41, v53, -8LL, v50, v46);
                        v41 += 48LL;
                      }
                      while ( v41 != v54 );
                    }
                    *v120 = v40;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v41 + 40) >> 43) & 0x3FFLL)) == v96 )
                  {
                    if ( sub_140273354(48 * v40 - 0x220000000000LL) )
                    {
                      v70 = (unsigned __int8)sub_1402F2700(v45);
                      if ( sub_140273354(48 * v40 - 0x220000000000LL) )
                      {
                        if ( v103 )
                        {
                          _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( dword_140D06B08 )
                          {
                            if ( (dword_140D06B08 & 1) != 0 )
                            {
                              v71 = KeGetCurrentIrql();
                              if ( v71 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v71 >= 2u )
                              {
                                CurrentPrcb = KeGetCurrentPrcb();
                                v73 = *((_QWORD *)CurrentPrcb + 4375);
                                v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
                                v75 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
                                *(_DWORD *)(v73 + 20) &= v74;
                                if ( v75 )
                                  sub_140418E4C(CurrentPrcb);
                              }
                            }
                          }
                          __writecr8(v70);
                          v15 = v96;
                          v26 = v94;
                          v76 = 0;
                          v31 = v86;
                          v24 = v95;
                          v30 = v93;
                          v32 = v105;
                          v28 = BugCheckParameter2;
                          v87 = 0;
                          goto LABEL_142;
                        }
                      }
                      else
                      {
                        v90 = 1;
                      }
                      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( dword_140D06B08 )
                      {
                        if ( (dword_140D06B08 & 1) != 0 )
                        {
                          v77 = KeGetCurrentIrql();
                          if ( v77 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v77 >= 2u )
                          {
                            v78 = KeGetCurrentPrcb();
                            v35 = -1LL << ((unsigned __int8)v70 + 1);
                            v79 = *((_QWORD *)v78 + 4375);
                            v80 = ~(unsigned __int16)v35;
                            v75 = (v80 & *(_DWORD *)(v79 + 20)) == 0;
                            *(_DWORD *)(v79 + 20) &= v80;
                            if ( v75 )
                              sub_140418E4C(v78);
                          }
                        }
                      }
                      __writecr8(v70);
                      v37 = v114;
                      v39 = v108;
                    }
                    else
                    {
                      v90 = 1;
                    }
                  }
LABEL_36:
                  if ( v42 >= v39 - v107 || !v37 && v39 - v107 - v42 < v104 )
                    v110 = v39 - v42 - 1;
                  v43 = v39 - v42;
                  v15 = v96;
                  v108 = v43;
                }
              }
              v26 = v94;
              if ( !(_DWORD)v33 )
                goto LABEL_140;
            }
            v26 = v94;
LABEL_140:
            v28 = BugCheckParameter2;
            v32 = v105;
          }
          v76 = v87;
LABEL_142:
          if ( !v30 )
            break;
          v93 = ++v30;
          if ( v30 >= v32 )
          {
            if ( v25 != -1 )
            {
              v81 = (unsigned int *)(v106 + 4);
              v106 = (__int64)v81;
              if ( v81 != v118 )
              {
                v25 = *v81;
                v27 = v119;
                goto LABEL_24;
              }
            }
            break;
          }
        }
        if ( v76 && v90 )
        {
          if ( (DWORD1(xmmword_140D06900) & 0x100000) != 0 )
          {
            v123[1] = 16LL;
            v82 = *((_QWORD *)KeGetCurrentThread() + 154);
            v124[1] = v102 << 12;
            v124[0] = v82;
            v123[0] = v124;
            sub_14035EDE4((unsigned int)v123, 1, 537919488, 625, 4200962);
          }
          ++dword_140C29F7C;
          sub_14059726C(v15, v26, v31, v24);
          v26 = v94;
          v25 = -1;
          v24 = v95;
          v27 = v119;
          v87 = 0;
          continue;
        }
        break;
      }
      v61 = -1073741801;
      sub_14023FD0C((__int64)v24, 1);
      v16 = v88;
      v14 = v102;
    }
    else
    {
      v61 = -1073741670;
    }
  }
  else
  {
    v61 = -1073741670;
  }
  sub_140250BDC((__int64)&v121);
  if ( (v16 & 0x20000000) == 0 )
  {
    sub_14028CE10(v15, v14);
    if ( (ULONG_PTR *)v15 == &StartContext )
    {
      v83 = KeGetCurrentPrcb();
      v84 = *((int *)v83 + 8615);
      if ( (_DWORD)v84 != -1 )
      {
        if ( v84 + v14 <= 0x100 )
        {
          do
          {
            if ( v14 >= 0x80000 )
              break;
            v85 = _InterlockedCompareExchange((volatile signed __int32 *)v83 + 8615, v84 + v14, v84);
            v75 = (_DWORD)v84 == v85;
            LODWORD(v84) = v85;
            if ( v75 )
              return v61;
          }
          while ( v85 != -1 && v85 + v14 <= 0x100 );
        }
        if ( (int)v84 > 192
          && (_DWORD)v84 == _InterlockedCompareExchange((volatile signed __int32 *)v83 + 8615, 192, v84) )
        {
          v14 += (int)v84 - 192;
        }
      }
    }
    if ( v14 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 16960), v14);
  }
  return v61;
}

/*
 * XREFs of sub_140326870 @ 0x140326870
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_1402302B0 @ 0x1402302B0 (sub_1402302B0.c)
 *     sub_1402323E8 @ 0x1402323E8 (sub_1402323E8.c)
 *     sub_14023608C @ 0x14023608C (sub_14023608C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_140315EE0 @ 0x140315EE0 (sub_140315EE0.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_14038EE6C @ 0x14038EE6C (sub_14038EE6C.c)
 *     sub_140399444 @ 0x140399444 (sub_140399444.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     sub_140581640 @ 0x140581640 (sub_140581640.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059C6B4 @ 0x14059C6B4 (sub_14059C6B4.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 *     sub_14059F908 @ 0x14059F908 (sub_14059F908.c)
 *     sub_1405B130C @ 0x1405B130C (sub_1405B130C.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 *     sub_1405B3EB4 @ 0x1405B3EB4 (sub_1405B3EB4.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402C14C0 @ 0x1402C14C0 (sub_1402C14C0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_1402E4D70 @ 0x1402E4D70 (sub_1402E4D70.c)
 *     sub_1402E901C @ 0x1402E901C (sub_1402E901C.c)
 *     sub_1402E9070 @ 0x1402E9070 (sub_1402E9070.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 *     sub_1403C3E64 @ 0x1403C3E64 (sub_1403C3E64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 *     sub_1405B10D8 @ 0x1405B10D8 (sub_1405B10D8.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

__int64 __fastcall sub_140326870(ULONG_PTR BugCheckParameter2, char a2)
{
  ULONG_PTR v2; // rsi
  int v3; // ebx
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  char v7; // cl
  __int64 v8; // r15
  int v9; // r13d
  unsigned int v10; // ebx
  ULONG_PTR v11; // rdi
  char v12; // al
  unsigned int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rcx
  ULONG_PTR v17; // r14
  unsigned __int64 v18; // r10
  char v19; // al
  int v20; // eax
  char v21; // al
  int v22; // eax
  _QWORD *v23; // r12
  volatile signed __int64 *v24; // r9
  volatile signed __int64 v25; // rdx
  signed __int64 v26; // rax
  signed __int64 v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  ULONG_PTR v31; // r8
  char *v32; // rax
  __int64 v33; // r13
  char v34; // al
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // r10d
  __int64 v38; // r8
  __int64 v39; // r11
  __int64 v40; // r13
  __int64 v41; // r11
  unsigned __int64 v42; // r10
  __int64 v43; // r9
  unsigned __int64 v44; // r14
  signed __int64 v45; // rdx
  signed __int64 v46; // r8
  __int64 v47; // rdx
  int v48; // eax
  unsigned __int64 v49; // rcx
  __int64 v50; // r11
  signed __int64 v51; // rax
  volatile signed __int32 *v52; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  volatile signed __int64 *v58; // rax
  __int64 v59; // rax
  char v60; // cl
  __int64 v61; // rax
  signed __int64 v62; // rcx
  int v63; // r10d
  int v64; // ecx
  ULONG_PTR v65; // rdx
  BOOL v66; // r12d
  unsigned __int64 *v67; // r8
  __int64 v68; // rax
  __int64 v69; // r9
  signed __int64 v70; // rdx
  signed __int64 v71; // r8
  __int64 v72; // rcx
  char v73; // al
  unsigned int v74; // r14d
  unsigned int v75; // eax
  unsigned __int64 v76; // r12
  int i; // esi
  _QWORD *v78; // rax
  _QWORD *v79; // rcx
  __int64 v80; // r14
  __int64 v81; // rdx
  unsigned __int64 v82; // r8
  unsigned int v83; // ebx
  volatile signed __int64 *v84; // r14
  ULONG_PTR v85; // r9
  unsigned __int64 v86; // rdx
  volatile signed __int32 *v87; // r8
  unsigned int v88; // r10d
  __int64 v89; // rdx
  signed __int64 v90; // rdx
  unsigned int v91; // eax
  ULONG_PTR v92; // r9
  unsigned int v93; // eax
  ULONG_PTR v94; // r9
  signed __int64 v95; // rcx
  signed __int64 v96; // rcx
  int v97; // edi
  unsigned __int64 v98; // rcx
  int v99; // eax
  __int64 v100; // rax
  int v101; // edx
  unsigned int v102; // [rsp+30h] [rbp-1A8h]
  unsigned int v103; // [rsp+34h] [rbp-1A4h]
  int v104; // [rsp+38h] [rbp-1A0h]
  unsigned int v105; // [rsp+40h] [rbp-198h]
  __int64 v106; // [rsp+48h] [rbp-190h]
  _QWORD *v107; // [rsp+50h] [rbp-188h]
  unsigned int v108; // [rsp+58h] [rbp-180h]
  __int64 v110; // [rsp+70h] [rbp-168h]
  __int64 v111; // [rsp+78h] [rbp-160h] BYREF
  __int64 v112; // [rsp+80h] [rbp-158h]
  __int64 v113; // [rsp+88h] [rbp-150h]
  unsigned int v114; // [rsp+90h] [rbp-148h]
  unsigned int v115; // [rsp+94h] [rbp-144h]
  __int64 v116; // [rsp+98h] [rbp-140h]
  __int64 v117; // [rsp+A0h] [rbp-138h]
  __int64 v118; // [rsp+A8h] [rbp-130h]
  __int64 v119; // [rsp+B0h] [rbp-128h]
  __int128 v120; // [rsp+B8h] [rbp-120h]
  __int128 v121; // [rsp+C8h] [rbp-110h]
  __int128 v122; // [rsp+D8h] [rbp-100h]
  __int128 v123; // [rsp+E8h] [rbp-F0h]
  __int128 v124; // [rsp+F8h] [rbp-E0h]
  __int128 v125; // [rsp+108h] [rbp-D0h]
  __int128 v126; // [rsp+118h] [rbp-C0h]
  __int128 v127; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v128; // [rsp+140h] [rbp-98h]
  __int128 v129; // [rsp+150h] [rbp-88h]
  __int128 v130; // [rsp+160h] [rbp-78h]
  __int128 v131; // [rsp+170h] [rbp-68h]
  __int128 v132; // [rsp+180h] [rbp-58h]
  __int64 v133; // [rsp+190h] [rbp-48h]
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  v2 = BugCheckParameter2;
  v3 = 0;
  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v102 = 0;
  if ( (_WORD)BugCheckParameter4 )
  {
    if ( (*(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v2 + 0x220000000000LL) >> 4),
        qword_140C590C8,
        BugCheckParameter4);
    return 0LL;
  }
  v5 = *(_QWORD *)(v2 + 40);
  v133 = 0LL;
  v127 = 0LL;
  v6 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v5 >> 43) & 0x3FF));
  v7 = *(_BYTE *)(v2 + 34);
  v106 = v6;
  v128 = 0LL;
  v129 = 0LL;
  v8 = *(_QWORD *)(v6 + 8LL * (v7 & 7) + 6632);
  v130 = 0LL;
  v131 = 0LL;
  v9 = *(_DWORD *)(v8 + 8);
  v132 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = 320;
  }
  else if ( (a2 & 2) != 0 )
  {
    v3 = 384;
  }
  if ( (v7 & 7) == 5 )
  {
    sub_1405ADEB8(v2, 0LL);
    return 0LL;
  }
  v10 = v3 | 0x20;
  v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v2 + 0x220000000000LL) >> 4);
  if ( v11 < qword_140C52CE0 || v11 >= qword_140C52CE0 + 2048 )
  {
    if ( byte_140C58C66 && _bittest64((const signed __int64 *)qword_140C58DE0, v11 >> 9) )
      v10 |= 8u;
  }
  else
  {
    v10 |= 2u;
  }
  v105 = 5;
  if ( v9 != 2 )
  {
    if ( v9 == 3 )
    {
      _InterlockedDecrement64((volatile signed __int64 *)v8);
      if ( *(__int64 *)(v2 + 40) >= 0 )
        v58 = (volatile signed __int64 *)(v6 + 15808);
      else
        v58 = (volatile signed __int64 *)(v6 + 6784);
      _InterlockedDecrement64(v58);
      v59 = *(_QWORD *)(v2 + 16);
      if ( (v59 & 0x400) != 0 )
      {
        v60 = *(_BYTE *)(v2 + 36);
        v61 = v60 & 0xF;
        v8 = v6 + 88 * v61 + 5120;
        if ( v10 < 0x100 )
        {
          sub_1403277D0(v6 + 88 * v61 + 5120, v2, 1LL, &v127);
          v60 = *(_BYTE *)(v2 + 36);
          v10 |= 0x200u;
        }
        *(_BYTE *)(v2 + 36) = v60 & 0xF0;
      }
      else
      {
        if ( (v59 & 2) != 0 || (unsigned __int16)v59 >> 12 == *(_DWORD *)(v6 + 1172) )
          v8 = 88LL * ((unsigned __int16)v59 >> 12) + v6 + 3712;
        else
          v8 = v6 + 3584;
        if ( v10 < 0x100 )
        {
          sub_1403277D0(v8, v2, 1LL, &v127);
          v10 |= 0x200u;
        }
        _InterlockedDecrement64((volatile signed __int64 *)(v6 + 17504));
      }
    }
    else
    {
      if ( v5 >= 0 )
        v84 = (volatile signed __int64 *)(v6 + 15808);
      else
        v84 = (volatile signed __int64 *)(v6 + 6784);
      _InterlockedDecrement64(v84);
      if ( v10 < 0x100 )
      {
        sub_1403277D0(v8, v2, 1LL, &v127);
        v10 |= 0x200u;
      }
    }
    v23 = (_QWORD *)(v2 + 24);
    v18 = *(_QWORD *)v2 & 0xFFFFFFFFFFLL;
    v17 = *(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFLL;
    goto LABEL_44;
  }
  if ( (v5 & 0x20000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    {
      v89 = 128LL;
      if ( v10 < 0x100 )
        v89 = 0LL;
      sub_1405ADEB8(v2, v89);
    }
    *(_QWORD *)v2 = 0LL;
    sub_140313CA0(v2, 0LL, 1);
    return 0LL;
  }
  v12 = *(_BYTE *)(v2 + 35);
  if ( (v12 & 8) != 0 )
    v13 = 5;
  else
    v13 = v12 & 7;
  v10 |= 1u;
  v103 = v13;
  if ( (v10 & 2) != 0 )
  {
    v10 &= 0xFFFFFFDE;
  }
  else if ( (v12 & 8) != 0 )
  {
    v10 |= 4u;
  }
  v8 = 88LL * v13 + v6 + 2880;
  if ( (v10 & 8) != 0 )
  {
    v82 = (unsigned __int64)v5 >> 20;
    if ( (v82 & 0x8000000000LL) != 0 )
    {
      v83 = v10 | 0x10;
      v8 = sub_1405B10D8(v2, 0LL, v82);
    }
    else
    {
      v83 = v10 & 0xFFFFFFDF;
    }
    v10 = v83 & 0xFFFFFFFE;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( *(__int64 *)(v2 + 40) >= 0 )
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 15808));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 6784));
  }
  if ( v10 < 0x100 )
  {
    v10 |= 0x200u;
    sub_1403277D0(v8, v2, 1LL, &v127);
  }
  if ( (v10 & 0x10) == 0 )
  {
    v104 = 0;
    if ( (v10 & 0x80u) != 0 || (_BYTE)v127 )
      v104 = 1;
    v111 = 0LL;
    v112 = 0LL;
    v14 = 16 * ((__int64)(v2 + 0x220000000000LL) >> 4) - 0x220000000000LL;
    if ( v11 >= qword_140C52CE0 && v11 < qword_140C52CE0 + 2048 )
    {
LABEL_137:
      v72 = (*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL;
      v113 = 16 * ((__int64)(v2 + 0x220000000000LL) >> 4) - 0x220000000000LL;
      v110 = *(_QWORD *)(qword_140C51F48 + 8 * v72);
      v111 = v110;
      v108 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((16 * ((__int64)(v2 + 0x220000000000LL) >> 4)) >> 4)) + 2);
      LODWORD(v112) = v108;
      v73 = *(_BYTE *)(v14 + 35);
      if ( (v73 & 8) != 0 )
        v74 = 5;
      else
        v74 = v73 & 7;
      v114 = v74;
      if ( qword_140C50710 )
        v75 = sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((16 * ((__int64)(v2 + 0x220000000000LL) >> 4)) >> 4));
      else
        v75 = 0;
      v76 = 16 * ((__int64)(v2 + 0x220000000000LL) >> 4) - 0x220000000000LL;
      v115 = v75;
      v116 = *(_QWORD *)(v110 + 16) + 24512LL * v108 + 88 * (v74 + 8LL * v75 + 37);
      for ( i = 0; i < 3; ++i )
      {
        v78 = (_QWORD *)sub_1402C14C0(&v111, i);
        v79 = v78;
        v107 = v78;
        v80 = 0LL;
        while ( *v78 != v11 )
        {
          if ( v78[1] == v11 )
          {
            v80 = (unsigned int)(v80 + 1);
            goto LABEL_148;
          }
          if ( v78[2] == v11 )
          {
            v80 = (unsigned int)(v80 + 2);
            goto LABEL_148;
          }
          if ( v78[3] == v11 )
          {
            v80 = (unsigned int)(v80 + 3);
LABEL_148:
            if ( (_DWORD)v80 == 64 )
              goto LABEL_149;
            break;
          }
          v78 += 4;
          v80 = (unsigned int)(v80 + 4);
          if ( (unsigned int)v80 >= 0x40 )
            goto LABEL_148;
        }
        if ( !sub_1402E9070(i, v79, v80, v76, v104) )
          sub_1402E901C(&v107[v80], 3LL, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_149:
        ;
      }
      v2 = BugCheckParameter2;
      v13 = v103;
      goto LABEL_32;
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (v15 & 0x400) != 0 )
    {
      if ( (v15 & 8) != 0 )
        goto LABEL_137;
    }
    else if ( (v15 & 0x8000000) != 0 )
    {
      goto LABEL_137;
    }
  }
LABEL_32:
  v16 = (_QWORD *)(v2 + 24);
  v17 = *(_QWORD *)(v2 + 24) & 0xFFFFFFFFFFLL;
  v18 = *(_QWORD *)v2 & 0xFFFFFFFFFFLL;
  if ( (v10 & 4) != 0 )
  {
    v65 = qword_140C52CE0;
    v66 = 0;
    if ( v17 >= qword_140C52CE0 && v17 < qword_140C52CE0 + 2048 )
      v66 = v18 == v17;
    v67 = (unsigned __int64 *)(48 * v17 - 0x220000000000LL);
    if ( v17 < qword_140C52CE0 || v17 >= qword_140C52CE0 + 2048 )
    {
      *v67 = v18 | *v67 & 0xFFFFFF0000000000uLL;
    }
    else
    {
      v68 = (v18 << 12) | 0x880;
      if ( qword_140C50780 )
      {
        if ( (qword_140C50780 & v68) != 0 )
          v68 = (v18 << 12) | 0x890;
        else
          v68 |= qword_140C50780;
      }
      v67[2] = v68;
    }
    v69 = 48 * v18 - 0x220000000000LL;
    if ( v18 < v65 || v18 >= v65 + 2048 )
    {
      v70 = *(_QWORD *)(v69 + 24);
      v71 = _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 24), v17 | v70 & 0xFFFFFF0000000000uLL, v70);
      if ( v70 != v71 )
      {
        do
        {
          v90 = v71;
          v71 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v69 + 24),
                  v17 | v71 & 0xFFFFFF0000000000uLL,
                  v71);
        }
        while ( v90 != v71 );
      }
    }
    else
    {
      sub_14033C3E0(48 * v18 - 0x220000000000LL, v17);
    }
    if ( v66 )
      sub_1402E4BF0(v17);
    v18 = 0x3FFFFFFFFFLL;
    v16 = (_QWORD *)(v2 + 24);
    v17 = 0x3FFFFFFFFFLL;
  }
  else
  {
    if ( v18 != 0x3FFFFFFFFFLL && (v18 < qword_140C52CE0 || v18 >= qword_140C52CE0 + 2048) )
    {
      v19 = *(_BYTE *)(48 * v18 - 0x220000000000LL + 35);
      v20 = (v19 & 8) != 0 ? 5 : v19 & 7;
      if ( v13 != v20 )
      {
        v91 = sub_140273234(48 * v18 - 0x220000000000LL);
        KeBugCheckEx(0x1Au, 0x8886uLL, v2, v92, (v13 << 8) | (unsigned __int64)v91);
      }
    }
    if ( v17 != 0x3FFFFFFFFFLL && (v17 < qword_140C52CE0 || v17 >= qword_140C52CE0 + 2048) )
    {
      v21 = *(_BYTE *)(48 * v17 - 0x220000000000LL + 35);
      v22 = (v21 & 8) != 0 ? 5 : v21 & 7;
      if ( v13 != v22 )
      {
        v93 = sub_140273234(48 * v17 - 0x220000000000LL);
        KeBugCheckEx(0x1Au, 0x8887uLL, v2, v94, (v13 << 8) | (unsigned __int64)v93);
      }
    }
  }
  v23 = v16;
  if ( v103 < *(unsigned __int8 *)(v106 + 15588) && (v10 & 0x10) == 0 )
    v102 = 1;
LABEL_44:
  if ( v18 == 0x3FFFFFFFFFLL )
  {
    v28 = v10 >> 2;
    if ( (v10 & 4) == 0 )
      *(_QWORD *)(v8 + 24) = v17;
  }
  else
  {
    v24 = (volatile signed __int64 *)(48 * v18 - 0x21FFFFFFFFE8LL);
    v25 = *v24;
    v26 = _InterlockedCompareExchange64(v24, v17 | *v24 & 0xFFFFFF0000000000uLL, *v24);
    v27 = v26;
    if ( v9 == 2 )
    {
      if ( v25 != v26 )
      {
        do
        {
          v95 = v27;
          v27 = _InterlockedCompareExchange64(v24, v17 | v27 & 0xFFFFFF0000000000uLL, v27);
        }
        while ( v95 != v27 );
      }
    }
    else if ( v25 != v26 )
    {
      do
      {
        v62 = v27;
        v27 = _InterlockedCompareExchange64(v24, v17 | v27 & 0xFFFFFF0000000000uLL, v27);
      }
      while ( v62 != v27 );
      v2 = BugCheckParameter2;
    }
    v28 = v10 >> 2;
  }
  if ( v17 == 0x3FFFFFFFFFLL )
  {
    if ( (v28 & 1) == 0 )
      *(_QWORD *)(v8 + 16) = v18;
  }
  else
  {
    *(_QWORD *)(48 * v17 - 0x220000000000LL) = v18 | *(_QWORD *)(48 * v17 - 0x220000000000LL) & 0xFFFFFF0000000000uLL;
  }
  if ( (v10 & 0x20) != 0 )
    _InterlockedDecrement64((volatile signed __int64 *)v8);
  if ( v9 != 2 || (v10 & 0xA) != 0 )
    goto LABEL_68;
  v118 = 0LL;
  v120 = 0LL;
  v29 = (*(_QWORD *)(48 * v11 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
  v119 = 48 * v11 - 0x220000000000LL;
  v117 = *(_QWORD *)(qword_140C51F48 + 8 * v29);
  v30 = dword_140C506C8;
  v31 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v11) >> 4);
  if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
  {
    v32 = (char *)qword_140C50708 + 16 * dword_140C506C4;
    if ( v31 >= *(_QWORD *)v32 && (dword_140C506C4 == dword_140C506C8 || v31 < *((_QWORD *)v32 + 2)) )
      goto LABEL_57;
  }
  v63 = 0;
  if ( dword_140C506C8 < 0 )
LABEL_221:
    KeBugCheckEx(0x1Au, 0x6201uLL, v31, 0LL, 0LL);
  while ( 1 )
  {
    v64 = (v63 + v30) >> 1;
    v32 = (char *)qword_140C50708 + 16 * v64;
    if ( v31 < *(_QWORD *)v32 )
    {
      if ( !v64 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v31, (ULONG_PTR)qword_140C50708, 0LL);
      v30 = v64 - 1;
      goto LABEL_192;
    }
    if ( v64 == dword_140C506C8 || v31 < *((_QWORD *)v32 + 2) )
      break;
    v63 = v64 + 1;
LABEL_192:
    if ( v30 < v63 )
      goto LABEL_221;
  }
  dword_140C506C4 = (v63 + v30) >> 1;
LABEL_57:
  v33 = *((unsigned int *)v32 + 2);
  v34 = *(_BYTE *)(48 * v11 - 0x220000000000LL + 35);
  LODWORD(v118) = v33;
  if ( (v34 & 8) != 0 )
  {
    v35 = 5;
  }
  else
  {
    v35 = v34 & 7;
    v105 = v35;
  }
  LODWORD(v120) = v35;
  if ( qword_140C50710 )
    v36 = sub_1403B76EC(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v11) >> 4));
  else
    v36 = 0;
  v37 = *(_DWORD *)(v2 + 36);
  v38 = *(_QWORD *)(v117 + 16) + 24512 * v33;
  v39 = *(_QWORD *)(v2 + 40) >> 20;
  DWORD1(v120) = v36;
  *((_QWORD *)&v120 + 1) = 88 * (v105 + 8LL * v36 + 37) + v38;
  v40 = *((_QWORD *)&v120 + 1);
  v41 = (*(_QWORD *)v2 >> 40) | (8LL * (v37 & 0xFFE00000)) | v39 & 0xF800000000LL;
  v42 = (*v23 >> 40) & 0x7FFFFLL | ((unsigned __int64)(v37 & 0x1FFFFF) << 19);
  if ( v41 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(*((_QWORD *)&v120 + 1) + 24LL) = v42;
  }
  else
  {
    v43 = 48 * v41 - 0x220000000000LL;
    v44 = (v42 & 0x7FFFF) << 40;
    v45 = *(_QWORD *)(v43 + 24);
    v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 24), v44 | v45 & 0xF80000FFFFFFFFFFuLL, v45);
    if ( v45 != v46 )
    {
      do
      {
        v96 = v46;
        v46 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v43 + 24),
                v44 | v46 & 0xF80000FFFFFFFFFFuLL,
                v46);
      }
      while ( v96 != v46 );
    }
    *(_DWORD *)(v43 + 36) = *(_DWORD *)(v43 + 36) & 0xFFE00000 | (v42 >> 19);
  }
  if ( v42 == 0x3FFFFFFFFFLL )
  {
    *(_QWORD *)(v40 + 16) = v41;
  }
  else
  {
    v47 = 48 * v42 - 0x220000000000LL;
    v123 = 0LL;
    v48 = *(_DWORD *)(v47 + 36);
    *(_QWORD *)v47 = *(_QWORD *)v47 & 0xFFFFFFFFFFLL | (v41 << 40);
    v49 = v41;
    v50 = (v41 & 0xF800000000LL) << 20;
    *(_DWORD *)(v47 + 36) = v48 & 0x1FFFFF | ((unsigned int)(v49 >> 24) << 21);
    *((_QWORD *)&v123 + 1) = *(_QWORD *)(v47 + 40);
    v121 = 0LL;
    v122 = 0LL;
    v124 = 0LL;
    v125 = 0LL;
    v126 = 0LL;
    v51 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v47 + 40),
            v50 | *((_QWORD *)&v123 + 1) & 0xF07FFFFFFFFFFFFFuLL,
            *((signed __int64 *)&v123 + 1));
    for ( *((_QWORD *)&v126 + 1) = v51; *((_QWORD *)&v123 + 1) != v51; *((_QWORD *)&v126 + 1) = v51 )
    {
      *((_QWORD *)&v123 + 1) = v51;
      v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 40), v50 | v51 & 0xF07FFFFFFFFFFFFFuLL, v51);
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)v40);
  if ( (v10 & 4) != 0 )
    *(_BYTE *)(v2 + 35) &= ~8u;
LABEL_68:
  *(_QWORD *)v2 = 0LL;
  if ( (v10 & 2) != 0 )
  {
    sub_140313CA0(v2, 0LL, 0);
    sub_1402E4D70(v2, v81);
    goto LABEL_71;
  }
  *v23 &= 0xFFFFFF0000000000uLL;
  if ( !_bittest64((const signed __int64 *)(v2 + 40), 0x35u) && dword_140C529CC == 1 )
  {
    v85 = v11 & 0x1F;
    LOBYTE(v86) = 1;
    v87 = (volatile signed __int32 *)(qword_140C52A28 + 4 * (v11 >> 5));
    if ( v85 + 1 > 0x20 )
    {
      if ( (v11 & 0x1F) != 0 )
      {
        v97 = v11 & 0x1F;
        _InterlockedOr(v87++, ((1 << (32 - v97)) - 1) << v85);
        v86 = 1LL - (unsigned int)(32 - v97);
        if ( v86 >= 0x20 )
        {
          v98 = v86 >> 5;
          v86 += -32LL * (v86 >> 5);
          do
          {
            *v87++ = -1;
            --v98;
          }
          while ( v98 );
        }
        if ( !v86 )
          goto LABEL_71;
      }
      v88 = (1 << v86) - 1;
    }
    else
    {
      v88 = 1 << v85;
    }
    _InterlockedOr(v87, v88);
  }
LABEL_71:
  if ( (v10 & 0x100) == 0 )
  {
    if ( (_BYTE)v127 && v10 >= 0x200 )
    {
      if ( BYTE8(v128) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v128) = 0;
      }
      if ( (_BYTE)v130 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v129 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v130) = 0;
      }
      if ( BYTE8(v131) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v131 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        BYTE8(v131) = 0;
      }
      if ( (_BYTE)v133 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v132 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v133) = 0;
      }
      v52 = (volatile signed __int32 *)(v8 + 32);
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      {
        sub_14063D8E0(v52, retaddr);
      }
      else
      {
        _InterlockedAnd(v52, 0xBFFFFFFF);
        _InterlockedDecrement(v52);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v54 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v54 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v99 = *(_DWORD *)(v54 + 24) - 1;
          *(_DWORD *)(v54 + 24) = v99;
          if ( !v99 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 32));
    }
  }
  if ( (v10 & 1) == 0 )
    return v102;
  v55 = v106;
  v56 = _InterlockedDecrement64((volatile signed __int64 *)(v106 + 16896));
  if ( v56 == *(_QWORD *)(v106 + 15944) || v56 == *(_QWORD *)(v106 + 15952) )
  {
    sub_1403C3E64(v106);
    v55 = v106;
  }
  if ( v56 <= 0x420 )
  {
    v100 = *(_QWORD *)(v55 + 16600);
    if ( !v100 || !*(_BYTE *)(v100 + 52) )
    {
      sub_140596A58(v55);
      v55 = v106;
    }
    if ( v56 < 0xA0 && v56 + 1 >= 0xA0 && *(_DWORD *)(v55 + 1176) )
    {
      KeSetEvent((PRKEVENT)(v55 + 1032), 0, 0);
      v55 = v106;
    }
  }
  if ( v56 >= 0x9F )
    return v102;
  v101 = *((_DWORD *)KeGetCurrentThread() + 345);
  if ( (v101 & 0xC) == 8 )
    return v102;
  if ( (v56 >= 0x20 || (ULONG_PTR *)v55 != &StartContext)
    && ((v101 & 2) != 0 && v56 >= 0x21 || (*(_DWORD *)(v55 + 4) & 0x20) != 0) )
  {
    return v102;
  }
  else
  {
    return v102 | 2;
  }
}

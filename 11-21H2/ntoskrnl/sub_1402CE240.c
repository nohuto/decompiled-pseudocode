/*
 * XREFs of sub_1402CE240 @ 0x1402CE240
 * Callers:
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 *     sub_1407BC9B0 @ 0x1407BC9B0 (sub_1407BC9B0.c)
 *     sub_1407FABA0 @ 0x1407FABA0 (sub_1407FABA0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140222280 @ 0x140222280 (sub_140222280.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402297E4 @ 0x1402297E4 (sub_1402297E4.c)
 *     sub_14023210C @ 0x14023210C (sub_14023210C.c)
 *     sub_140234F14 @ 0x140234F14 (sub_140234F14.c)
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_1402405EC @ 0x1402405EC (sub_1402405EC.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF100 @ 0x1402CF100 (sub_1402CF100.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140319990 @ 0x140319990 (sub_140319990.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140597940 @ 0x140597940 (sub_140597940.c)
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 *     sub_14062E40C @ 0x14062E40C (sub_14062E40C.c)
 */

__int64 __fastcall sub_1402CE240(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r10
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  ULONG_PTR v25; // r13
  int v26; // r15d
  __int64 v27; // rbx
  int v28; // ecx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int16 v31; // ax
  int v32; // r12d
  __int64 v33; // rdi
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  ULONG_PTR v36; // rbx
  int v37; // edx
  unsigned __int64 v38; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  int v40; // edx
  unsigned int v41; // r9d
  unsigned int v42; // r10d
  int v43; // r8d
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rbx
  _DWORD *v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // r9
  char *v53; // rbx
  int v54; // eax
  unsigned int v55; // ecx
  unsigned __int64 v56; // r8
  _QWORD *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r15
  unsigned int v61; // r14d
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rax
  unsigned int v68; // ebx
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r8
  ULONG_PTR v72; // r10
  unsigned __int64 v73; // rbx
  BOOL v74; // r15d
  unsigned __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rdx
  unsigned __int64 v79; // rbx
  bool v80; // zf
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // ecx
  __int64 v90; // r9
  int v91; // eax
  unsigned __int64 v92; // r9
  _QWORD *v93; // rax
  ULONG_PTR v94; // rdx
  unsigned __int64 v95; // rbx
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v101; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v102; // [rsp+30h] [rbp-D0h]
  int v103; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v104; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v105; // [rsp+38h] [rbp-C8h]
  __int64 v107; // [rsp+50h] [rbp-B0h]
  __int64 v108; // [rsp+58h] [rbp-A8h]
  unsigned int v109; // [rsp+60h] [rbp-A0h]
  int v110; // [rsp+64h] [rbp-9Ch]
  int v111; // [rsp+68h] [rbp-98h]
  __int64 v112; // [rsp+70h] [rbp-90h]
  unsigned __int64 v113; // [rsp+78h] [rbp-88h]
  int v114; // [rsp+80h] [rbp-80h]
  unsigned __int64 v115; // [rsp+88h] [rbp-78h]
  __int64 v116; // [rsp+90h] [rbp-70h]
  unsigned __int64 v117; // [rsp+98h] [rbp-68h] BYREF
  int v118; // [rsp+A0h] [rbp-60h]
  int v119; // [rsp+A4h] [rbp-5Ch] BYREF
  int v120; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v121; // [rsp+B0h] [rbp-50h]
  __int64 v122; // [rsp+B8h] [rbp-48h]
  __int64 v123; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v124; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v125; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v126; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v127; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v128; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v129; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v130; // [rsp+108h] [rbp+8h]
  __int64 v131; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v132[22]; // [rsp+120h] [rbp+20h] BYREF
  int v133; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v134; // [rsp+1D4h] [rbp+D4h]
  __int16 v135; // [rsp+1D6h] [rbp+D6h]
  __int64 v136; // [rsp+1D8h] [rbp+D8h]
  __int64 v137; // [rsp+1E0h] [rbp+E0h]
  __int64 v138; // [rsp+1E8h] [rbp+E8h]
  _BYTE v139[152]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v140[24]; // [rsp+290h] [rbp+190h] BYREF
  int v141; // [rsp+350h] [rbp+250h] BYREF
  __int16 v142; // [rsp+354h] [rbp+254h]
  __int16 v143; // [rsp+356h] [rbp+256h]
  __int64 v144; // [rsp+358h] [rbp+258h]
  __int64 v145; // [rsp+360h] [rbp+260h]
  __int64 v146; // [rsp+368h] [rbp+268h]
  _BYTE v147[2040]; // [rsp+370h] [rbp+270h] BYREF

  v125 = a2;
  v143 = 0;
  v123 = a4;
  v124 = 0LL;
  memset(v147, 0, sizeof(v147));
  v9 = *(_DWORD *)(a4 + 48);
  v144 = 256LL;
  v141 = 1;
  v142 = 0;
  v130 = 0LL;
  v110 = v9 & 0x2200000;
  v129 = 0LL;
  DWORD2(v130) = 2;
  v10 = 1LL;
  v145 = 0LL;
  v146 = 0LL;
  v112 = 1LL;
  v114 = 0;
  v11 = sub_1402CCC50(512LL);
  v14 = *(unsigned __int8 *)(a4 + 33);
  v15 = v11;
  v121 = v11;
  v16 = v11;
  v17 = 0xFFFFF68000000000uLL;
  v18 = *(_DWORD *)(a4 + 52);
  v19 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v14 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v20 = *(unsigned __int8 *)(a4 + 34);
  v126 = v19;
  v21 = (unsigned int)v18;
  LODWORD(v21) = v18 & 0x7FFFFFFF;
  if ( (v21 | (v20 << 31)) == 0x7FFFFFFFELL )
  {
    v15 = sub_1402CCC50(32LL * (((unsigned int)v12 >> 7) & 0x1F));
    v121 = v15;
    v16 = v15;
  }
  else if ( v18 >= 0 )
  {
    if ( (v12 & 0x6200000) != 0x4200000 )
      v16 = 0LL;
    v126 = 0LL;
    v114 = sub_140319990(a4);
  }
  v122 = v13;
  v109 = 3;
  if ( (v12 & 0xA00000) == 0xA00000 )
  {
    v22 = (v12 >> 19) & 3;
    v10 = qword_1400161D0[v22];
    v109 = dword_140037160[v22];
    v23 = 16LL;
    v112 = v10;
    if ( v10 != 16 )
      v23 = v13;
    v122 = v23;
  }
  v24 = 2;
  v115 = 0LL;
  if ( a5 )
    v24 = 0;
  v107 = 0LL;
  v113 = 0LL;
  v118 = v24;
  v111 = v13;
  v25 = v17 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v104 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v26 = v13;
  v27 = a3 + 1664;
  v103 = 0;
  v108 = a3 + 1664;
  v116 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v102 = sub_1402CF4F0(a3 + 1664);
  if ( v25 > a2 )
  {
LABEL_81:
    v57 = a6;
    goto LABEL_82;
  }
  while ( 1 )
  {
    v28 = 0;
    v29 = v25;
    if ( v26 )
    {
      v28 = 1;
    }
    else if ( v109 <= 1 )
    {
      v81 = 2 - v109;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v81;
      }
      while ( v81 );
      v15 = v121;
      v10 = v112;
    }
    if ( (v29 & 0xFFF) == 0 || v28 )
      break;
LABEL_17:
    v30 = *(_QWORD *)v29;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL
      && v29 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      v84 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v84 )
      {
        v85 = *(_QWORD *)(v84 + 8 * ((v29 >> 3) & 0x1FF));
        if ( (v85 & 0x20) != 0 )
          v30 |= 0x20uLL;
        if ( (v85 & 0x42) != 0 )
          v30 |= 0x42uLL;
      }
    }
    v127 = v30;
    if ( !v30 )
    {
      if ( v25 > v126 )
        a6[4] += v10;
      if ( v16 )
      {
        v65 = sub_1402D03D0((__int64)(v29 << 25) >> 16);
        v66 = v122;
        sub_14028FB74(v65, v122);
        v67 = 0LL;
        do
          *(_QWORD *)(v29 + 8 * v67++) = v16;
        while ( v67 < v66 );
      }
LABEL_59:
      v38 = v104;
      goto LABEL_40;
    }
    if ( (v30 & 1) != 0 )
    {
      v45 = v115;
      v46 = v122 + v107;
      if ( !v115 )
        v45 = v29;
      v115 = v45;
      if ( v10 != 1 )
      {
        v86 = sub_140597940(v123, v29, v16, (_DWORD)a6, (__int64)&v141);
        v87 = v103;
        v107 = v46;
        if ( v86 )
          v87 = 1;
        v103 = v87;
        goto LABEL_59;
      }
      v38 = v104;
      v119 = 0;
      if ( (HIBYTE(*(_QWORD *)(((v104 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF) == 8
        || !(unsigned int)sub_1402CF100(&v129, v108, v25) )
      {
        sub_1403146E0(v108, v104, 0LL, &v119, BugCheckParameter4, v101);
        sub_1402CF280(&v141, v104, 1LL, 0LL);
        v49 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v127 = v49;
        if ( (unsigned int)sub_140317A80(v25) && (unsigned int)sub_140229550() )
        {
          *(_QWORD *)v25 = v49;
          sub_1402294F0(v25, v49);
        }
        else
        {
          *(_QWORD *)v25 = v49;
        }
      }
      v107 = v46;
      if ( HIDWORD(v144) == (_DWORD)v144 - 1 )
      {
        v88 = sub_1402405EC((__int64)&v129, a3, v16, (int)a6);
        v89 = v103;
        v107 = v46;
        if ( v88 )
          v89 = 1;
        v103 = v89;
        if ( v110 == 35651584 )
        {
          v107 = v46;
          if ( v46 )
          {
            v115 = 0LL;
            v107 = 0LL;
          }
        }
        LODWORD(BugCheckParameter4) = 1;
        if ( (unsigned int)sub_1402C3BA0((__int64)&v141, a3, v16, a6, BugCheckParameter4) )
          v103 = 1;
      }
      goto LABEL_40;
    }
    if ( (v30 & 0x400) != 0 )
    {
      if ( sub_1402802DC(v30) )
      {
        v91 = sub_1402399A8(v108, v90);
LABEL_202:
        if ( v91 == 3 )
        {
          ++a6[1];
        }
        else if ( v91 == 5 )
        {
          ++a6[3];
        }
      }
      else if ( !sub_1402806A0(v30) )
      {
        v93 = sub_140234F14(a3, v92);
        if ( v93 )
        {
          v91 = sub_1405BA498((ULONG_PTR)v93, v94);
          goto LABEL_202;
        }
      }
      v95 = v16;
      if ( (unsigned int)sub_140317A80(v25) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          if ( !HIBYTE(word_140C51864) && (v16 & 1) != 0 )
            v95 = v16 | 0x8000000000000000uLL;
          *(_QWORD *)v25 = v95;
          sub_1402294F0(v25, v95);
          goto LABEL_216;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v16 & 1) != 0 )
          v95 = v16 | 0x8000000000000000uLL;
      }
      *(_QWORD *)v25 = v95;
LABEL_216:
      v80 = v16 == 0;
      goto LABEL_134;
    }
    if ( (v30 & 0x800) == 0 )
    {
      if ( ((v30 >> 5) & 0x1F) == 0x10 )
      {
        v38 = v104;
        a6[4] += v10;
        goto LABEL_40;
      }
      v31 = v30;
      if ( qword_140C50780 && (v30 & 0x10) == 0 )
        v31 = v30 & ~(_WORD)qword_140C50780;
      if ( (v31 & 0x400) != 0 || (v31 & 0x800) != 0 || (v31 & 4) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v32 = 1;
      v33 = v16;
      v116 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838));
      if ( ((v30 >> 1) & 1) != 0
        && !sub_1402297E4(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838)), &v127) )
      {
        v32 = 0;
        HIDWORD(v64) = HIDWORD(v30);
        if ( qword_140C50780 && (v30 & 0x10) == 0 )
          v64 = v30 & ~qword_140C50780;
        v33 = sub_140340078(v15, *(_QWORD *)(v63 + 8LL * ((unsigned __int16)v30 >> 12) + 16736), HIDWORD(v64), 2LL);
      }
      v117 = v30;
      *(_QWORD *)v25 = v33;
      if ( (v30 & 4) != 0 )
      {
        v97 = sub_140317A10(&v117);
        if ( !v32 )
          v97 &= ~2uLL;
      }
      else
      {
        if ( !v32 || ((v30 >> 1) & 1) == 0 )
        {
          v117 = 0LL;
LABEL_34:
          if ( v33 )
          {
            v10 = v112;
            v38 = v104;
          }
          else
          {
            v34 = ((((__int64)(v25 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v35 = *(_QWORD *)v34;
            if ( v34 >= 0xFFFFF6FB7DBED000uLL
              && v34 <= 0xFFFFF6FB7DBED7F8uLL
              && (dword_140D06880 & 0xC00000) != 0
              && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
              && (v35 & 1) != 0
              && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
            {
              v98 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
              if ( v98 )
              {
                v99 = *(_QWORD *)(v98 + 8 * ((v34 >> 3) & 0x1FF));
                if ( (v99 & 0x20) != 0 )
                  v35 |= 0x20uLL;
                if ( (v99 & 0x42) != 0 )
                  v35 |= 0x42uLL;
              }
            }
            v131 = v35;
            v36 = 48 * (((unsigned __int64)sub_140317A10(&v131) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_DWORD *)(v36 + 16) & 0x3FF0000) == 0 )
              KeBugCheckEx(0x1Au, 0x41790uLL, v36, HIWORD(*(_DWORD *)(v36 + 16)) & 0x3FF, 1uLL);
            v120 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v120);
              while ( *(__int64 *)(v36 + 24) < 0 );
            }
            v37 = ((*(_QWORD *)(v36 + 16) >> 16) & 0x3FF) - 1;
            *(_QWORD *)(v36 + 16) ^= ((unsigned int)*(_QWORD *)(v36 + 16) ^ (v37 << 16)) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v10 = v112;
            v38 = v104;
            if ( !v37 )
              v103 = 1;
          }
          goto LABEL_40;
        }
        v97 = sub_140317A10(&v117);
      }
      v117 = v97;
      if ( v97 )
        sub_1402E20D0(v116, v97, 0LL);
      goto LABEL_34;
    }
    if ( v10 != 1 )
    {
      v96 = sub_140597940(v123, v29, v16, (_DWORD)a6, (__int64)&v141);
      v38 = v104;
      if ( v96 )
        v103 = 1;
      goto LABEL_40;
    }
    v69 = 0LL;
    v124 = 0LL;
    v70 = sub_140315D60(v25);
    v72 = v70;
    if ( v70 )
    {
      v73 = 0LL;
      v74 = 1;
      if ( !*(_WORD *)(v70 + 32) )
      {
        v69 = *(_QWORD *)(v70 + 16);
        v75 = *(_QWORD *)(v70 + 40);
        v73 = v69;
        v124 = v69;
        v76 = *(_QWORD *)(qword_140C51F48 + 8 * ((v75 >> 43) & 0x3FF));
        v116 = v76;
        if ( (v69 & 2) != 0 )
          v74 = sub_1402297E4(v76, &v124);
      }
      LOBYTE(v71) = 17;
      if ( (unsigned int)sub_1402C3100(v25, v72, v71, 0) == 3 )
        ++a6[1];
      if ( v73 )
        sub_140274E48(v116, v69, v74);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v77 = v16;
      if ( !v74 )
      {
        v78 = *(_QWORD *)(v116 + 8LL * ((unsigned __int16)v73 >> 12) + 16736);
        if ( qword_140C50780 && (v73 & 0x10) == 0 )
          v73 &= ~qword_140C50780;
        v77 = sub_140340078(v15, v78, HIDWORD(v73), 2LL);
      }
      v79 = v77;
      if ( (unsigned int)sub_140317A80(v25) )
      {
        if ( !(unsigned int)sub_140229550() )
        {
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v77 & 1) != 0 )
            v79 = v77 | 0x8000000000000000uLL;
          goto LABEL_132;
        }
        if ( !HIBYTE(word_140C51864) && (v77 & 1) != 0 )
          v79 = v77 | 0x8000000000000000uLL;
        *(_QWORD *)v25 = v79;
        sub_1402294F0(v25, v79);
      }
      else
      {
LABEL_132:
        *(_QWORD *)v25 = v79;
      }
      v80 = v77 == 0;
LABEL_134:
      if ( !v80 )
        goto LABEL_59;
      v38 = v104;
      if ( sub_14023210C(v25, 1u) )
        v103 = 1;
LABEL_40:
      v25 += 8 * v10;
      if ( (v25 & 0x78) == 0 )
      {
        v47 = a3 + 1664;
        v48 = (*(_BYTE *)(a3 + 1848) & 7) == 2 ? &unk_140C53D00 : (_DWORD *)(a3 + 1856);
        if ( (*v48 & 0x40000000) != 0 )
        {
LABEL_108:
          if ( (unsigned int)sub_1402405EC((__int64)&v129, a3, v16, (int)a6) )
            v103 = 1;
          if ( v110 == 35651584 && v107 )
          {
            v115 = 0LL;
            v107 = 0LL;
          }
          if ( HIDWORD(v144) )
          {
            LODWORD(BugCheckParameter4) = 1;
            if ( (unsigned int)sub_1402C3BA0((__int64)&v141, a3, v16, a6) )
              v103 = 1;
          }
          if ( v113 )
          {
            sub_14020D8D0(v47, v113);
            v113 = 0LL;
          }
          sub_1402B0CE0(v47, v102);
          v111 = 1;
          sub_1402CF4F0(v47);
          goto LABEL_46;
        }
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v40 = *((_DWORD *)CurrentPrcb + 3311);
      v41 = *((_DWORD *)CurrentPrcb + 8107);
      v42 = *((_DWORD *)CurrentPrcb + 8279);
      if ( (v40 & 1) != 0 )
      {
        v43 = 1;
        if ( v42 <= 7 )
          goto LABEL_45;
        if ( *((_BYTE *)CurrentPrcb + 13241) )
        {
          v68 = 1;
          goto LABEL_104;
        }
      }
      else
      {
        v43 = 0;
        if ( (v40 & 0x1E) != 0 )
        {
          v68 = 2;
LABEL_104:
          if ( (DWORD1(xmmword_140D06900) & 0x4000000) != 0 )
            sub_14062E40C(v68, v41, v42);
          if ( v68 )
          {
            v47 = a3 + 1664;
            goto LABEL_108;
          }
          goto LABEL_46;
        }
        if ( *((_BYTE *)CurrentPrcb + 13241) )
        {
          v68 = 3;
          goto LABEL_104;
        }
        v44 = *((_QWORD *)CurrentPrcb + 2);
        if ( v44 && v44 != *((_QWORD *)CurrentPrcb + 1) )
        {
          v68 = 4;
          goto LABEL_104;
        }
LABEL_45:
        if ( v41 <= 7 )
        {
LABEL_46:
          v104 = (v10 << 12) + v38;
          goto LABEL_47;
        }
        if ( !v43 )
        {
LABEL_150:
          _disable();
          *((_DWORD *)CurrentPrcb + 8107) = 0;
          *((_DWORD *)CurrentPrcb + 8279) = 0;
          sub_140222280((__int64)CurrentPrcb);
          _enable();
          v68 = 0;
          goto LABEL_104;
        }
      }
      if ( (v40 & 0x1E) != 0 )
      {
        v68 = 5;
        goto LABEL_104;
      }
      if ( *((_QWORD *)CurrentPrcb + 1) != *((_QWORD *)CurrentPrcb + 3) )
      {
        v68 = 6;
        goto LABEL_104;
      }
      goto LABEL_150;
    }
LABEL_47:
    v27 = a3 + 1664;
    if ( v25 > v125 )
      goto LABEL_81;
    v26 = v111;
  }
  memset(v140, 0, 0xB8uLL);
  if ( *((_QWORD *)&v129 + 1) )
  {
    LODWORD(v140[0]) = 1;
    WORD2(v140[0]) = 0;
    v140[2] = 0LL;
    LODWORD(v140[1]) = 20;
    v140[3] = 0LL;
    sub_1402CF280(v140, (__int64)(*((_QWORD *)&v129 + 1) << 25) >> 16, v130, 0LL);
    sub_14032F750(&v129);
    LODWORD(BugCheckParameter4) = 0;
    if ( (unsigned int)sub_1402C3BA0((__int64)v140, a3, v16, a6) )
      v103 = 1;
  }
  if ( v110 == 35651584 && v107 )
  {
    v115 = 0LL;
    v107 = 0LL;
  }
  if ( HIDWORD(v144) )
  {
    LODWORD(BugCheckParameter4) = 1;
    if ( (unsigned int)sub_1402C3BA0((__int64)&v141, a3, v16, a6) )
      v103 = 1;
  }
  if ( v113 )
  {
    sub_14020D8D0(v27, v113);
    v113 = 0LL;
  }
  if ( !v114 )
  {
    v29 = v25;
    if ( v109 <= 1 )
    {
      v83 = 2 - v109;
      do
      {
        v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v83;
      }
      while ( v83 );
      v15 = v121;
      v10 = v112;
    }
    sub_14032CE60(v29, 0, (*(_DWORD *)(v123 + 48) >> 12) & 0x7F, v102, v118);
    goto LABEL_79;
  }
  v128 = 0LL;
  memset((char *)v132 + 4, 0, 0xACuLL);
  v105 = (__int64)(v25 << 25) >> 16;
  v50 = (__int64)(v125 << 25) >> 16;
  LODWORD(v132[0]) = 2145;
  v51 = sub_1402CFEB0(v105);
  if ( v51 < 0xFFFF800000000000uLL || v51 >= qword_140C540C0 && v51 <= qword_140C51BF0 )
    v53 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  else
    v53 = sub_14026DFC0(1);
  v54 = sub_14031D9B0(v53, v52, 0LL);
  if ( v54 )
  {
    v55 = v54 - 1;
    LODWORD(v128) = v54 - 1;
    v56 = ((v105 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v128 + 1) = v56;
  }
  else
  {
    LODWORD(v132[0]) |= 4u;
    v132[21] = &v128;
    v132[3] = v53;
    BYTE4(v132[0]) = BYTE4(v132[0]) & 0xE3 | 4;
    v132[20] = sub_14023E500;
    HIBYTE(v132[0]) = v102;
    v132[2] = 0LL;
    v132[4] = (__int64)(v25 << 25) >> 16;
    v132[5] = v50;
    sub_14030CF90(v132);
    v56 = *((_QWORD *)&v128 + 1);
    v55 = v128;
  }
  v57 = a6;
  v58 = a6[4];
  if ( v56 )
  {
    v59 = v56 - v25;
    v25 = v56;
    a6[4] = v58 + (v59 >> 3);
    v29 = v56;
    if ( v55 )
    {
      v29 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v55 > 1 )
      {
        v82 = v55 - 1;
        do
        {
          v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v82;
        }
        while ( v82 );
      }
    }
    v104 = (__int64)(v56 << 25) >> 16;
LABEL_79:
    v113 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v111 = 0;
    goto LABEL_17;
  }
  v27 = a3 + 1664;
  a6[4] = v58 + ((__int64)(v125 - v25) >> 3) + 1;
LABEL_82:
  v135 = 0;
  memset(v139, 0, sizeof(v139));
  if ( *((_QWORD *)&v129 + 1) )
  {
    v136 = 20LL;
    v134 = 0;
    v137 = 0LL;
    v138 = 0LL;
    v133 = 1;
    sub_1402CF280(&v133, (__int64)(*((_QWORD *)&v129 + 1) << 25) >> 16, v130, 0LL);
    sub_14032F750(&v129);
    v60 = a3;
    LODWORD(BugCheckParameter4) = 0;
    if ( !(unsigned int)sub_1402C3BA0((__int64)&v133, a3, v16, v57, BugCheckParameter4) )
      goto LABEL_84;
    v61 = 1;
  }
  else
  {
    v60 = a3;
LABEL_84:
    v61 = v103;
  }
  if ( HIDWORD(v144) )
  {
    LODWORD(BugCheckParameter4) = 1;
    if ( (unsigned int)sub_1402C3BA0((__int64)&v141, v60, v16, v57, BugCheckParameter4) )
      v61 = 1;
  }
  if ( v113 )
    sub_14020D8D0(v27, v113);
  sub_1402B0CE0(v27, v102);
  return v61;
}

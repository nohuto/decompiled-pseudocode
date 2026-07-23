/*
 * XREFs of sub_1403419B0 @ 0x1403419B0
 * Callers:
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140342260 @ 0x140342260 (sub_140342260.c)
 *     sub_140342694 @ 0x140342694 (sub_140342694.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14045B3BC @ 0x14045B3BC (sub_14045B3BC.c)
 *     sub_14056A438 @ 0x14056A438 (sub_14056A438.c)
 *     sub_14056D9C0 @ 0x14056D9C0 (sub_14056D9C0.c)
 *     sub_140571770 @ 0x140571770 (sub_140571770.c)
 *     sub_140573CBC @ 0x140573CBC (sub_140573CBC.c)
 *     sub_140574678 @ 0x140574678 (sub_140574678.c)
 *     sub_14057D168 @ 0x14057D168 (sub_14057D168.c)
 */

__int64 __fastcall sub_1403419B0(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, unsigned __int8 a5)
{
  char v5; // r14
  unsigned __int16 *v6; // rdi
  __int64 v7; // r15
  int v8; // ebx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int16 v19; // di
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int16 v30; // di
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int16 v35; // cx
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  unsigned __int8 *v39; // rdx
  __int64 v40; // rdi
  int v41; // ebx
  _BYTE *v42; // rsi
  char v43; // r15
  unsigned int v44; // r9d
  int v45; // r12d
  char v46; // r10
  struct _KPRCB *v47; // rbx
  __int64 result; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v54; // rcx
  char v55; // al
  __int64 *v56; // rsi
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  char v62; // cl
  unsigned __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rax
  __int64 v66; // r11
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdi
  __int64 v70; // rsi
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  bool v75; // zf
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r10
  __int64 v78; // r9
  char v79; // cl
  unsigned int v80; // eax
  __int64 v81; // r9
  unsigned __int8 v82; // dl
  unsigned int v83; // ecx
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rcx
  struct _KPRCB *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  char v91; // al
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  unsigned __int16 v96; // si
  _QWORD *v97; // rdi
  __int64 v98; // rcx
  int v99; // eax
  int v100; // eax
  int v101; // eax
  unsigned int v102; // r11d
  _BYTE *v103; // rbx
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  struct _KPRCB *v108; // rcx
  __int64 v109; // r9
  int v110; // eax
  __int64 v111; // [rsp+20h] [rbp-E0h]
  char v112; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v115; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v116; // [rsp+60h] [rbp-A0h]
  _QWORD *v117; // [rsp+68h] [rbp-98h] BYREF
  int v118; // [rsp+70h] [rbp-90h] BYREF
  int v119; // [rsp+74h] [rbp-8Ch]
  int v120; // [rsp+78h] [rbp-88h] BYREF
  int v121; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v122; // [rsp+80h] [rbp-80h]
  __int64 v123; // [rsp+88h] [rbp-78h] BYREF
  __int64 v124; // [rsp+90h] [rbp-70h] BYREF
  __int64 v125; // [rsp+98h] [rbp-68h]
  _OWORD v126[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v127[42]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = a5;
  v6 = a3;
  v7 = a2;
  v116 = a2;
  v8 = a1;
  v117 = 0LL;
  v125 = a4;
  memset(v127, 0, 0x108uLL);
  v9 = 0;
  v112 = 0;
  memset(v126, 0, 24);
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(unsigned int *)(v7 + 536);
      LODWORD(v10) = v10 & 0x7FFFFFFF;
      v11 = qword_140D088C0[v10];
      v13 = sub_140342260(v8, v11, v7, (_DWORD)v6, v5, v9);
      if ( v13 )
        goto LABEL_67;
      v16 = *(_QWORD *)(v11 + 192);
      v17 = qword_140D088C0[*(unsigned int *)(v7 + 588)];
      v122 = v17;
      WORD1(v127[0]) = 32;
      v18 = *(_QWORD *)(v17 + 192);
      memset(&v127[1], 0, 0x100uLL);
      v19 = *v6;
      v20 = 32;
      v21 = v19;
      if ( v19 > 0x20u )
        v21 = 32;
      v15 = 0LL;
      LOWORD(v127[0]) = v21;
      HIDWORD(v127[0]) = 0;
      v22 = 0;
      if ( v21 )
      {
        memmove(&v127[1], a3 + 4, 8LL * v21);
        v20 = WORD1(v127[0]);
        v22 = v21;
        v15 = 0LL;
      }
      if ( v22 < v20 )
      {
        do
        {
          v23 = v22++;
          v127[v23 + 1] = 0LL;
        }
        while ( v22 < WORD1(v127[0]) );
      }
      v24 = *(unsigned __int16 *)(v18 + 136);
      v25 = (int)a3;
      v13 = 0LL;
      if ( v16 == v18 )
        v13 = v11;
      if ( (unsigned __int16)v24 >= v19 )
        v26 = 0LL;
      else
        v26 = *(_QWORD *)&a3[4 * v24 + 4];
      v27 = *(_QWORD *)(v18 + 8);
      v28 = v26 & v27;
      v115 = v26 & v27;
      if ( v9 )
      {
        if ( v28 )
          goto LABEL_56;
        v27 = *(_QWORD *)(v18 + 40) & *(_QWORD *)(v18 + 88);
        v28 = v26 & v27;
        v115 = v26 & v27;
      }
      if ( !v28 )
      {
        v13 = 0LL;
LABEL_16:
        v14 = a5;
        goto LABEL_17;
      }
LABEL_56:
      if ( (*(_BYTE *)(v18 + 184) & 1) == 0 )
        goto LABEL_61;
      v14 = a5;
      if ( a5 )
      {
        v91 = sub_140573CBC(v17, &v115);
        v25 = (int)a3;
        v15 = 0LL;
        if ( v91 )
          goto LABEL_61;
        v14 = a5;
      }
      v12 = v115 & *(_QWORD *)(v18 + 16);
      if ( !v12 )
      {
        if ( (_BYTE)v14 )
        {
          v13 = 0LL;
          goto LABEL_17;
        }
        v66 = a1;
        v67 = *(_QWORD *)(a1 + 192);
        if ( v67 == v18 )
        {
          v12 = v115 & *(_QWORD *)(v67 + 40);
          v69 = v115 & *(_QWORD *)(a1 + 34912) & ~*(_QWORD *)(a1 + 200);
          if ( v69 )
          {
            v68 = *(_QWORD *)(a1 + 34912) & ~*(_QWORD *)(a1 + 200);
            if ( (v12 & v68) == v68 && (*(_BYTE *)(a1 + 13244) & 1) == 0 && !*(_DWORD *)(a1 + 32472) )
            {
              v70 = *(_QWORD *)(a1 + 8);
              if ( !*(_BYTE *)(a1 + 32) )
              {
                _disable();
                *(_BYTE *)(a1 + 32) = 1;
                v71 = __rdtsc();
                v72 = v71 - *(_QWORD *)(a1 + 33152);
                v73 = *(unsigned int *)(v70 + 80);
                *(_QWORD *)(v70 + 72) += v72;
                v74 = ((v72 * *(unsigned int *)(a1 + 33208)) >> 16) + v73;
                if ( v74 > 0xFFFFFFFF )
                  LODWORD(v74) = -1;
                *(_QWORD *)(a1 + 33152) = v71;
                v75 = (*(_BYTE *)(v70 + 2) & 0xBE) == 0;
                *(_DWORD *)(v70 + 80) = v74;
                if ( !v75 )
                {
                  sub_1402B9680(a1, v70, v72, 0LL);
                  v66 = a1;
                }
                v76 = __rdtsc();
                v12 = (unsigned __int64)HIDWORD(v76) << 32;
                v77 = v76;
                v78 = v76 - *(_QWORD *)(v66 + 33152);
                *(_QWORD *)(v66 + 33400) += v78;
                v79 = *(_BYTE *)(v70 + 2);
                if ( (v79 & 0x20) != 0 )
                {
                  v80 = sub_140342694(v66, v12, v72, v78);
                  if ( dword_140D068FC )
                    v82 = *(_BYTE *)(v66 + 34056);
                  else
                    v82 = *(_BYTE *)(v66 + 34059);
                  v12 = v66 + 8 * (v82 + 2 * (v80 + 2088LL));
                  *(_QWORD *)v12 += v81;
                  v79 = *(_BYTE *)(v70 + 2);
                }
                if ( (v79 & 0x40) != 0 )
                {
                  v92 = *(_QWORD *)(v70 + 968);
                  if ( v92 )
                    *(_BYTE *)(v92 + 64) = 1;
                }
                *(_QWORD *)(v66 + 33152) = v77;
                if ( (*(_BYTE *)(v70 + 2) & 2) != 0 )
                {
                  sub_140571770(v70, 0LL);
                  v66 = a1;
                }
                v75 = *(_BYTE *)(v66 + 6) == 0;
                *(_BYTE *)(v66 + 32) = 0;
                if ( !v75 )
                {
                  *(_BYTE *)(v66 + 6) = 0;
                  HalRequestSoftwareInterrupt(2);
                }
                _enable();
                v25 = (int)a3;
                v15 = 0LL;
              }
              v83 = *(_DWORD *)(v70 + 80);
              v84 = *(_DWORD *)(v70 + 84);
              if ( v83 >= v84 || v84 - v83 < dword_140D06B94 )
              {
                v9 = v112;
                v115 = v69;
              }
              else
              {
                v9 = v112;
              }
            }
          }
        }
LABEL_61:
        v52 = *(_QWORD *)(v18 + 32);
        v14 = v115;
        if ( (v52 & v115) != 0 )
          v14 = v52 & v115;
        v115 = v14;
        if ( (v14 & *(_QWORD *)(v17 + 200)) != 0 )
        {
          v13 = v17;
        }
        else
        {
          if ( v13 && (v14 & *(_QWORD *)(v13 + 200)) != 0 )
            goto LABEL_66;
          v57 = v14 & *(_QWORD *)(v17 + 34912);
          if ( v57 )
          {
            v14 &= *(_QWORD *)(v17 + 34912);
            v115 = v57;
          }
          else if ( v13 && (v58 = v14 & *(_QWORD *)(v13 + 34912)) != 0 )
          {
            v14 &= *(_QWORD *)(v13 + 34912);
            v115 = v58;
          }
          else
          {
            v59 = v14 & *(_QWORD *)(v17 + 34936);
            if ( v59 )
            {
              v14 &= *(_QWORD *)(v17 + 34936);
              v115 = v59;
            }
            else if ( v13 && (v60 = v14 & *(_QWORD *)(v13 + 34912)) != 0 )
            {
              v14 &= *(_QWORD *)(v13 + 34912);
              v115 = v60;
            }
            else if ( (dword_140D0507C & 1) != 0 )
            {
              v61 = v14 & *(_QWORD *)(v17 + 34928);
              if ( v61 )
              {
                v14 &= *(_QWORD *)(v17 + 34928);
                v115 = v61;
              }
              else if ( v13 )
              {
                if ( (v14 & *(_QWORD *)(v13 + 34928)) != 0 )
                  v14 &= *(_QWORD *)(v13 + 34928);
                v115 = v14;
              }
            }
          }
          v62 = *(_BYTE *)(v17 + 209);
          v14 = __ROR8__(v14, v62);
          _BitScanForward64(&v63, v14);
          v64 = *(unsigned __int8 *)(v17 + 208) << 6;
          v119 = ((_BYTE)v63 + v62) & 0x3F;
          v65 = (unsigned int)(v119 + v64);
          v12 = 0x140000000uLL;
          v13 = qword_140D088C0[dword_140D105E0[v65]];
        }
        if ( v13 )
          goto LABEL_66;
        goto LABEL_16;
      }
      if ( !(_BYTE)v14
        || (unsigned int)((0x101010101010101LL
                         * ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= dword_140D06AC0 )
      {
        v115 &= *(_QWORD *)(v18 + 16);
        goto LABEL_61;
      }
      v13 = 0LL;
LABEL_17:
      v29 = *(unsigned __int16 *)(v18 + 136);
      v30 = v127[0];
      if ( LOWORD(v127[0]) > (unsigned __int16)v29 )
      {
        v127[v29 + 1] &= ~*(_QWORD *)(v18 + 128);
        v30 = v127[0];
      }
      if ( v16 == v18 || (v93 = *(unsigned __int16 *)(v16 + 136), (unsigned __int16)v93 >= v30) || !v127[v93 + 1] )
      {
        v31 = a1;
        goto LABEL_21;
      }
      v111 = v11;
      v31 = a1;
      v13 = sub_140574678(v25, a1, v17, v16, v111, v14, v9);
      if ( !v13 )
        break;
LABEL_66:
      v7 = v116;
      v5 = a5;
LABEL_67:
      CurrentPrcb = KeGetCurrentPrcb();
      v120 = 0;
      v54 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v54 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v99 = *(_DWORD *)(v54 + 24);
          *(_DWORD *)(v54 + 24) = v99 + 1;
          if ( v99 == -1 )
LABEL_165:
            sub_140418E4C(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
      {
        v85 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v85 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v100 = *(_DWORD *)(v85 + 24) - 1;
            *(_DWORD *)(v85 + 24) = v100;
            if ( !v100 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        do
          sub_1402F32E0(&v120, v12, v14, v15);
        while ( *(_QWORD *)(v13 + 48) );
        v86 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v86 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v101 = *(_DWORD *)(v86 + 24);
            *(_DWORD *)(v86 + 24) = v101 + 1;
            if ( v101 == -1 )
              goto LABEL_165;
          }
        }
      }
      v55 = *(_BYTE *)(v13 + 35);
      if ( !v55 || v9 && v55 == 6 )
      {
        v56 = (__int64 *)v125;
        result = 1LL;
        *(_DWORD *)(v125 + 8) = 1;
        *v56 = v13;
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      v6 = a3;
LABEL_114:
      v87 = KeGetCurrentPrcb();
      v8 = a1;
      v88 = *((_QWORD *)v87 + 4375);
      if ( v88 )
      {
        if ( *((_BYTE *)v87 + 32) <= 1u )
        {
          v107 = *(_DWORD *)(v88 + 24) - 1;
          *(_DWORD *)(v88 + 24) = v107;
          if ( !v107 )
            sub_140418E4C(v87);
        }
      }
    }
    v25 = (int)a3;
    v15 = 0LL;
    v14 = a5;
LABEL_21:
    v32 = *(unsigned __int16 *)(v16 + 136);
    if ( v30 > (unsigned __int16)v32 )
    {
      v127[v32 + 1] &= ~*(_QWORD *)(v16 + 128);
      v30 = v127[0];
    }
    v33 = *(_QWORD *)(v31 + 192);
    v117 = (_QWORD *)v33;
    if ( v33 != v18 && v33 != v16 )
    {
      v94 = *(unsigned __int16 *)(v33 + 136);
      if ( (unsigned __int16)v94 < v30 )
      {
        if ( v127[v94 + 1] )
        {
          v13 = sub_140574678(v25, a1, v17, v33, a1, v14, v112);
          if ( v13 )
            goto LABEL_162;
          v15 = 0LL;
        }
      }
    }
    v34 = *(unsigned __int16 *)(v33 + 136);
    if ( v30 > (unsigned __int16)v34 )
    {
      v127[v34 + 1] &= ~*(_QWORD *)(v33 + 128);
      v30 = v127[0];
    }
    v35 = 0;
    if ( v30 )
    {
      while ( !v127[v35 + 1] )
      {
        if ( ++v35 >= v30 )
          goto LABEL_29;
      }
      v95 = *(unsigned __int16 *)(v18 + 138);
      LODWORD(v126[0]) = *(unsigned __int16 *)(v18 + 138);
      *(_OWORD *)((char *)v126 + 4) = 0LL;
      *((_QWORD *)&v126[0] + 1) = qword_140D31700[v95];
      v96 = v127[0];
      *(_QWORD *)&v126[1] = *(unsigned int *)(*((_QWORD *)&v126[0] + 1) + 16LL);
      while ( !(unsigned int)sub_14056D9C0(v126, &v117, v14) )
      {
        v97 = v117;
        if ( v117 != (_QWORD *)v18 && v117 != (_QWORD *)v16 && v117 != *(_QWORD **)(a1 + 192) )
        {
          v13 = sub_140574678((_DWORD)a3, a1, v17, (_DWORD)v117, 0LL, a5, v112);
          if ( v13 )
            break;
          v98 = *((unsigned __int16 *)v97 + 68);
          if ( (unsigned __int16)v98 >= v96
            || (v127[v98 + 1] &= ~v97[16], v96 = v127[0], (unsigned __int16)v98 >= LOWORD(v127[0]))
            || !v127[v98 + 1] )
          {
            if ( (unsigned int)KeIsEmptyAffinityEx(v127) )
            {
              v15 = 0LL;
              goto LABEL_29;
            }
          }
        }
      }
LABEL_162:
      v9 = v112;
      goto LABEL_66;
    }
LABEL_29:
    if ( v112 )
      break;
    v9 = 0;
    v123 = 0LL;
    v124 = 0LL;
    v118 = 0;
    v112 = 0;
    if ( dword_140C2B998 )
    {
      sub_14056A438(v17, (unsigned int)&v118, (unsigned int)&v123, (unsigned int)&v118, (__int64)&v124);
      v12 = v123 + v124;
      v9 = v123 + v124 > (unsigned __int64)(unsigned int)dword_140C2B998;
      v15 = 0LL;
      v112 = v9;
    }
    v6 = a3;
    v5 = a5;
    v8 = a1;
    if ( !v9 )
      break;
    v7 = v116;
  }
  v6 = a3;
  v36 = *(unsigned __int8 *)(v17 + 208);
  if ( (unsigned __int16)v36 >= *a3 )
    v37 = 0LL;
  else
    v37 = *(_QWORD *)&a3[4 * v36 + 4];
  v38 = v37 & *(_QWORD *)(v17 + 34880);
  if ( ((v38 - 1) & v38) == 0 )
    goto LABEL_48;
  v39 = *(unsigned __int8 **)(v17 + 34888);
  v40 = v39[657];
  v41 = v39[656];
  v42 = (char *)&v127[34] + v40;
  v43 = v39[657];
  memmove((char *)&v127[34] + v40, v39 + 528, v39[656]);
  v44 = v40 + v41;
  v45 = -1;
  v46 = *(_BYTE *)(v116 + 195);
  v14 = *(_QWORD *)(*(_QWORD *)(v122 + 192) + 264LL);
  if ( (dword_140D069C8 & 1) != 0 )
  {
    if ( (dword_140D069C8 & 2) != 0 )
      goto LABEL_176;
LABEL_39:
    if ( (unsigned int)v40 < v44 )
    {
      v12 = __ROL8__(1LL, v43);
      do
      {
        if ( (v12 & v38) != 0 )
        {
          v14 = (unsigned __int8)*v42;
          if ( (*v42 & 0x7F) < v46 )
          {
            v45 = v40;
            v46 = v14 & 0x7F;
          }
        }
        LODWORD(v40) = v40 + 1;
        v12 = __ROL8__(v12, 1);
        ++v42;
      }
      while ( (unsigned int)v40 < v44 );
    }
    goto LABEL_45;
  }
  if ( (dword_140D068EC & 0x800) == 0 || !dword_140D06A24 )
    goto LABEL_39;
LABEL_176:
  if ( (v14 & v38) == 0 || !(unsigned __int8)sub_14045B3BC((unsigned __int8)*(_DWORD *)(v116 + 512)) )
    goto LABEL_39;
  v102 = v40;
  if ( (unsigned int)v40 < v44 )
  {
    v103 = (char *)&v127[34] + v40;
    do
    {
      v12 = 1LL << v102;
      if ( ((1LL << v102) & v14 & v38) != 0 )
      {
        v12 = (unsigned __int8)*v103;
        if ( (*v103 & 0x7F) < v46 )
        {
          v45 = v102;
          v46 = v12 & 0x7F;
        }
      }
      ++v102;
      ++v103;
    }
    while ( v102 < v44 );
    v43 = v40;
    if ( v45 < 0 )
      goto LABEL_39;
LABEL_71:
    v12 = 0x140000000uLL;
    v17 = qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(v122 + 208) + v45]];
    goto LABEL_47;
  }
LABEL_45:
  if ( v45 >= 0 )
    goto LABEL_71;
  v17 = v122;
LABEL_47:
  v6 = a3;
  v15 = 0LL;
LABEL_48:
  v47 = KeGetCurrentPrcb();
  result = *(_QWORD *)(v17 + 192);
  v117 = (_QWORD *)result;
  v121 = 0;
  v49 = *((_QWORD *)v47 + 4375);
  if ( v49 )
  {
    if ( *((_BYTE *)v47 + 32) <= 1u )
    {
      v104 = *(_DWORD *)(v49 + 24);
      v75 = v104 == -1;
      result = (unsigned int)(v104 + 1);
      *(_DWORD *)(v49 + 24) = result;
      if ( v75 )
LABEL_188:
        result = sub_140418E4C(v47);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
  {
    v89 = *((_QWORD *)v47 + 4375);
    if ( v89 )
    {
      if ( *((_BYTE *)v47 + 32) <= 1u )
      {
        v105 = *(_DWORD *)(v89 + 24) - 1;
        *(_DWORD *)(v89 + 24) = v105;
        if ( !v105 )
          sub_140418E4C(v47);
      }
    }
    do
    {
      sub_1402F32E0(&v121, v12, v14, v15);
      result = *(_QWORD *)(v17 + 48);
    }
    while ( result );
    v90 = *((_QWORD *)v47 + 4375);
    if ( v90 )
    {
      if ( *((_BYTE *)v47 + 32) <= 1u )
      {
        v106 = *(_DWORD *)(v90 + 24);
        v75 = v106 == -1;
        result = (unsigned int)(v106 + 1);
        *(_DWORD *)(v90 + 24) = result;
        if ( v75 )
          goto LABEL_188;
      }
    }
  }
  v9 = v112;
  if ( v112 )
  {
    result = (__int64)v117;
    v50 = v117[5] & v117[11];
  }
  else
  {
    v50 = 0LL;
  }
  v5 = a5;
  if ( !a5 )
  {
    result = (__int64)v117;
    if ( ((v50 | v117[1]) & v37) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
      v7 = v116;
      goto LABEL_114;
    }
  }
  v51 = v125;
  *(_DWORD *)(v125 + 8) = 0;
  if ( (*(_BYTE *)(v17 + 35) & 2) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
    v108 = KeGetCurrentPrcb();
    v109 = *((_QWORD *)v108 + 4375);
    if ( v109 )
    {
      if ( *((_BYTE *)v108 + 32) <= 1u )
      {
        v110 = *(_DWORD *)(v109 + 24) - 1;
        *(_DWORD *)(v109 + 24) = v110;
        if ( !v110 )
          sub_140418E4C(v108);
      }
    }
    result = sub_14057D168(v17, v116, -1LL);
    v17 = result;
    if ( !a5 && (*(_BYTE *)(result + 35) & 1) == 0 )
    {
      result = 1LL;
      *(_DWORD *)(v51 + 8) = 1;
    }
  }
  *(_QWORD *)v51 = v17;
  return result;
}

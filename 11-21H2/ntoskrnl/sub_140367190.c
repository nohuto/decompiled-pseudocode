/*
 * XREFs of sub_140367190 @ 0x140367190
 * Callers:
 *     sub_140367008 @ 0x140367008 (sub_140367008.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022E210 @ 0x14022E210 (sub_14022E210.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274D10 @ 0x140274D10 (sub_140274D10.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140333AA0 @ 0x140333AA0 (sub_140333AA0.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033F3EC @ 0x14033F3EC (sub_14033F3EC.c)
 *     sub_140386FE4 @ 0x140386FE4 (sub_140386FE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_140367190(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r13d
  unsigned __int64 v8; // r14
  int v9; // ebx
  unsigned __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r15
  int v14; // r14d
  unsigned __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int8 v18; // bl
  signed __int64 v19; // rsi
  char v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rbx
  int v28; // ebx
  unsigned int v29; // r13d
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  signed __int64 v32; // r15
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  int v39; // r12d
  unsigned __int8 v40; // si
  unsigned __int64 v41; // r14
  int v42; // r12d
  signed __int64 v43; // r15
  unsigned __int64 v44; // rax
  signed __int64 v45; // rax
  __int64 v46; // rbx
  signed __int64 v47; // rax
  int v48; // esi
  bool v49; // zf
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r9
  int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rsi
  __int64 v62; // rcx
  unsigned __int64 v63; // rbx
  int v64; // r15d
  bool v65; // zf
  unsigned __int8 v66; // al
  unsigned __int8 v67; // bl
  struct _KPRCB *v68; // r10
  __int64 v69; // r9
  int v70; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v73; // r9
  int v74; // eax
  int v75; // esi
  bool v76; // zf
  __int64 v77; // r9
  unsigned __int8 v78; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v79[7]; // [rsp+21h] [rbp-DFh] BYREF
  unsigned __int64 v80; // [rsp+28h] [rbp-D8h] BYREF
  int v81; // [rsp+30h] [rbp-D0h]
  char *v82; // [rsp+38h] [rbp-C8h]
  unsigned int v83; // [rsp+40h] [rbp-C0h]
  int v84; // [rsp+44h] [rbp-BCh] BYREF
  int v85; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v86; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  _QWORD v89[24]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v90[24]; // [rsp+130h] [rbp+30h] BYREF

  v79[0] = 0;
  memset(v89, 0, 0xB8uLL);
  memset(v90, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (dword_140D06880 & 0x8000) != 0 )
    a3 &= ~0x10u;
  v6 = sub_14032BCC0(a3);
  v83 = v6;
  v7 = v6;
  if ( v6 >= 8 && v6 != 24 || (v6 & 5) == 5 )
    return 0LL;
  v81 = 0;
  v8 = a1 + a2 - 1;
  v86 = v8;
  v9 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  sub_14027B080(a1);
  v82 = sub_14026DFC0(2);
  v13 = (__int64)v82;
  if ( v11 != 6 )
  {
    if ( v11 == 5 )
    {
      if ( !(unsigned int)sub_140386FE4(a1, v8) )
      {
        v14 = 1;
        v81 = 1;
        v13 = (__int64)sub_14026DFC0(5);
        v82 = (char *)v13;
        goto LABEL_6;
      }
    }
    else if ( v11 == 1 )
    {
      v9 = v12;
      v13 = sub_14027B520();
      v82 = (char *)v13;
      goto LABEL_5;
    }
    return 0LL;
  }
LABEL_5:
  v14 = v81;
LABEL_6:
  v15 = 0LL;
  v87 = 0LL;
  LODWORD(v89[0]) = v9;
  LODWORD(v89[1]) = 20;
  WORD2(v89[0]) = 0;
  v89[2] = 0LL;
  v89[3] = 0LL;
  v16 = *(unsigned __int16 *)(v13 + 174);
  v86 = ((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v88 = *(_QWORD *)(qword_140C51F48 + 8 * v16);
  v78 = sub_1402CF4F0(v13);
  v18 = v78;
  if ( v10 <= v86 )
  {
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_8;
      if ( (v10 & 0xFFF) == 0 )
        break;
LABEL_9:
      v19 = sub_140317A10(v10);
      v80 = v19;
      v20 = *(_BYTE *)(v13 + 184) & 7;
      if ( v7 != 24 )
      {
        if ( v20 != 7 )
        {
          if ( (v19 & 1) != 0 )
          {
            v21 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v80) >> 12) & 0xFFFFFFFFFFLL;
            v22 = 48 * v21 - 0x220000000000LL;
            if ( *(__int64 *)(v22 + 40) < 0 )
            {
              sub_14032F1B0((__int64)v89);
              v28 = sub_140316400((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
              if ( v28 < 0 )
              {
                sub_14020D8D0(v13, v15);
                sub_1402B0CE0(v13, v78);
                sub_1405BCAF8(v13, (unsigned int)v28);
                sub_1402CF4F0(v13);
                sub_14031DE00(v13, v15, 0LL, v77);
              }
              v10 -= 8LL;
              goto LABEL_24;
            }
            v23 = v19 & 0x7000000000000000LL | v19 & 0xF00000000000000LL | sub_1402CBD10(v10, v21, v7 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
            if ( (dword_140D06880 & 0x4000000) != 0 )
              _mm_lfence();
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, v23, v19) == v19 )
            {
              if ( (dword_140D06880 & 0x100) == 0 || sub_14033F3EC(v80, v23) )
                sub_1402CF280((__int64)v89, (__int64)(v10 << 25) >> 16, 1LL, 0);
              v26 = 0LL;
              v85 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                  sub_1402F32E0(&v85, v24, v25, v17);
                while ( *(__int64 *)(v22 + 24) < 0 );
              }
              *(_QWORD *)(v22 + 16) ^= (*(_DWORD *)(v22 + 16) ^ (32 * v7)) & 0x3E0;
              if ( (v80 & 0x42) != 0 )
                v26 = sub_14033C2A0(v22);
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v26 )
                sub_1402E20D0(v88, v26, 1);
              goto LABEL_24;
            }
            goto LABEL_98;
          }
          if ( (v19 & 0x400) != 0 )
            goto LABEL_97;
          if ( (v19 & 0x800) == 0 )
          {
            v80 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
            *(_QWORD *)v10 = v80;
            goto LABEL_25;
          }
          v57 = sub_140315D60(v10, 0LL, 0);
          if ( !v57 )
            goto LABEL_98;
          v58 = sub_140317A10(v10);
          v60 = -993LL;
          v59 = 32LL * (v7 & 0x1F);
LABEL_105:
          v61 = v59 | v60 & v58;
          v62 = v59 | v60 & *(_QWORD *)(v57 + 16);
          v80 = v61;
          *(_QWORD *)(v57 + 16) = v62;
          v63 = v61;
          v64 = 0;
          if ( sub_140317A80(v10) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v64 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
                v65 = (v61 & 1) == 0;
LABEL_111:
                if ( !v65 )
                  v63 = v61 | 0x8000000000000000uLL;
              }
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
              v65 = (v61 & 1) == 0;
              goto LABEL_111;
            }
          }
          *(_QWORD *)v10 = v63;
          if ( v64 )
            sub_1402294F0(v10, v63);
          _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_57;
        }
        v29 = v7 | 0x80000000;
        while ( 1 )
        {
          if ( (v19 & 1) != 0 )
          {
            v30 = sub_140317A10((unsigned __int64)&v80);
          }
          else
          {
            v30 = v19;
            if ( qword_140C50780 && (v19 & 0x10) == 0 )
              v30 = ~qword_140C50780 & v19;
          }
          v31 = (v30 >> 12) & 0xFFFFFFFFFFLL;
          v32 = v19;
          v33 = 48 * v31 - 0x220000000000LL;
          v34 = sub_1402CBD10(v10, v31, v29);
          v38 = v34;
          if ( (v19 & 1) == 0 )
            break;
          v39 = v81;
          if ( !v81 )
          {
            v79[0] = 17;
            sub_14033DBC0(v10, v34);
LABEL_51:
            v7 = v83;
            *(_QWORD *)(v33 + 16) ^= (*(_DWORD *)(v33 + 16) ^ (32 * v83)) & 0x3E0;
            if ( v39 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08
                && (dword_140D06B08 & 1) != 0
                && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
              {
                v40 = v79[0];
                if ( v79[0] <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v73 = *((_QWORD *)CurrentPrcb + 4375);
                  v40 = v79[0];
                  v74 = ~(unsigned __int16)(-1LL << (v79[0] + 1));
                  v49 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
                  *(_DWORD *)(v73 + 20) &= v74;
                  if ( v49 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
              else
              {
                v40 = v79[0];
              }
              __writecr8(v40);
            }
            if ( (dword_140D06880 & 0x100) != 0 && !sub_14033F3EC(v80, v38) )
              goto LABEL_57;
LABEL_56:
            sub_1402CF280((__int64)v89, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_57:
            v13 = (__int64)v82;
LABEL_24:
            v18 = v78;
            goto LABEL_25;
          }
          v33 = sub_14022E210(v10, v79);
          v19 = sub_140317A10(v10);
          if ( v19 == v32 )
          {
            if ( (v32 & 0x200) != 0 )
              v38 |= 0x200uLL;
            if ( (dword_140D06880 & 0x4000000) != 0 )
              _mm_lfence();
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v38, v32);
            if ( v19 == v32 )
              goto LABEL_51;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v66 = KeGetCurrentIrql(), v66 <= 0xFu) )
          {
            v67 = v79[0];
            if ( v79[0] <= 0xFu && v66 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = *((_QWORD *)v68 + 4375);
              v67 = v79[0];
              v70 = ~(unsigned __int16)(-1LL << (v79[0] + 1));
              v49 = (v70 & *(_DWORD *)(v69 + 20)) == 0;
              *(_DWORD *)(v69 + 20) &= v70;
              if ( v49 )
                sub_140418E4C(v68);
            }
          }
          else
          {
            v67 = v79[0];
          }
          __writecr8(v67);
          v80 = v19;
        }
        if ( (*(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v84 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v84, v35, v36, v37);
            while ( *(__int64 *)(v33 + 24) < 0 );
          }
          *(_QWORD *)(v33 + 24) = *(_QWORD *)(v33 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v38 |= 0x200uLL;
        }
        v7 = v83;
        v75 = 0;
        *(_QWORD *)(v33 + 16) ^= (*(_DWORD *)(v33 + 16) ^ (32 * v83)) & 0x3E0;
        if ( sub_140317A80(v10) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            v75 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v76 = (v38 & 1) == 0;
LABEL_149:
              if ( !v76 )
                v38 |= 0x8000000000000000uLL;
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v76 = (v38 & 1) == 0;
            goto LABEL_149;
          }
        }
        *(_QWORD *)v10 = v38;
        if ( v75 )
          sub_1402294F0(v10, v38);
        goto LABEL_57;
      }
      if ( v20 == 7 )
      {
        if ( v14 )
        {
          if ( (v19 & 1) == 0 )
            goto LABEL_25;
          v41 = sub_14022E210(v10, v79);
          v19 = sub_140317A10(v10);
          v80 = v19;
        }
        else
        {
          if ( (v19 & 1) == 0 )
            goto LABEL_25;
          v41 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v80) >> 12) & 0xFFFFFFFFFFLL)
              - 0x220000000000LL;
          v79[0] = sub_1402F2700(v41);
        }
        v42 = v81;
        *(_QWORD *)(v41 + 16) = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        while ( 1 )
        {
          v43 = v19;
          v44 = sub_140317A10((unsigned __int64)&v80);
          v45 = sub_1402E4D28((v44 >> 12) & 0xFFFFFFFFFFLL, 24);
          v46 = v45;
          if ( !v42 )
            break;
          if ( (dword_140D06880 & 0x4000000) != 0 )
            _mm_lfence();
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v45, v19);
          v19 = v47;
          if ( v47 == v43 )
          {
            if ( (v43 & 0x200) != 0 )
              *(_QWORD *)(v41 + 24) = *(_QWORD *)(v41 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_89:
            _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_56;
          }
          v80 = v47;
        }
        v48 = 0;
        if ( sub_140317A80(v10) )
        {
          if ( (unsigned int)sub_140229550() )
          {
            v48 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v49 = (v46 & 1) == 0;
LABEL_85:
              if ( !v49 )
                v46 |= 0x8000000000000000uLL;
            }
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
          {
            v49 = (v46 & 1) == 0;
            goto LABEL_85;
          }
        }
        *(_QWORD *)v10 = v46;
        if ( v48 )
          sub_1402294F0(v10, v46);
        goto LABEL_89;
      }
      if ( (v19 & 1) == 0 )
      {
        if ( (v19 & 0x400) == 0 )
        {
          if ( (v19 & 0x800) == 0 )
          {
            v80 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            *(_QWORD *)v10 = v80;
            goto LABEL_25;
          }
          v57 = sub_140315D60(v10, 0LL, 0);
          if ( v57 )
          {
            v58 = sub_140317A10(v10);
            v59 = 768LL;
            v60 = -225LL;
            goto LABEL_105;
          }
LABEL_98:
          v10 -= 8LL;
          goto LABEL_25;
        }
LABEL_97:
        sub_14032F1B0((__int64)v89);
        sub_14020D8D0(v13, v15);
        sub_1402B0CE0(v13, v18);
        sub_14031C860(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        sub_1402CF4F0(v13);
        sub_14031DE00(v13, v15, 0LL, v53);
        goto LABEL_98;
      }
      v50 = sub_140317A10((unsigned __int64)&v80);
      v51 = 0xFFFFDE0000000028uLL;
      if ( *(__int64 *)(48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
      {
        sub_14032F1B0((__int64)v89);
        v54 = sub_140316400((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
        v10 -= 8LL;
        v55 = v54;
        if ( v54 < 0 )
        {
          sub_14020D8D0(v13, v15);
          sub_1402B0CE0(v13, v78);
          sub_1405BCAF8(v13, v55);
          sub_1402CF4F0(v13);
          sub_14031DE00(v13, v15, 0LL, v56);
        }
        goto LABEL_24;
      }
      if ( dword_140C52B68 )
        sub_140274D10(v13, (_BYTE *)v10);
      if ( (sub_14033A410(v51, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
        goto LABEL_24;
      v52 = sub_140333AA0(v13);
      v90[2] = 0LL;
      v90[3] = 0LL;
      LODWORD(v90[0]) = v52;
      WORD2(v90[0]) = 4;
      v90[1] = 20LL;
      sub_1402CF280((__int64)v90, (__int64)(v10 << 25) >> 16, 1LL, 0);
      v18 = v78;
      if ( !sub_1402C1D70(v13, (__int64)v90, 0) )
        goto LABEL_98;
LABEL_25:
      v15 = v87;
      v10 += 8LL;
      v14 = v81;
      if ( v10 > v86 )
        goto LABEL_26;
    }
    sub_14032F1B0((__int64)v89);
    sub_14020D8D0(v13, v15);
LABEL_8:
    v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v87 = v15;
    sub_14031DE00(v13, v15, 0LL, v17);
    goto LABEL_9;
  }
LABEL_26:
  sub_14032F1B0((__int64)v89);
  if ( v15 )
    sub_14020D8D0(v13, v15);
  sub_1402B0CE0(v13, v18);
  return 1LL;
}

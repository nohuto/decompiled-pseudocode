/*
 * XREFs of sub_1405B88D8 @ 0x1405B88D8
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_140239F04 @ 0x140239F04 (sub_140239F04.c)
 *     sub_140269FA8 @ 0x140269FA8 (sub_140269FA8.c)
 *     sub_14026ECFC @ 0x14026ECFC (sub_14026ECFC.c)
 *     sub_14026ED6C @ 0x14026ED6C (sub_14026ED6C.c)
 *     sub_14026EDC4 @ 0x14026EDC4 (sub_14026EDC4.c)
 *     sub_14026EEA8 @ 0x14026EEA8 (sub_14026EEA8.c)
 *     sub_1402802DC @ 0x1402802DC (sub_1402802DC.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_14030FBE0 @ 0x14030FBE0 (sub_14030FBE0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031F940 @ 0x14031F940 (sub_14031F940.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     sub_14033A4C0 @ 0x14033A4C0 (sub_14033A4C0.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     sub_14033FD38 @ 0x14033FD38 (sub_14033FD38.c)
 *     sub_140340078 @ 0x140340078 (sub_140340078.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403CC0F0 @ 0x1403CC0F0 (sub_1403CC0F0.c)
 *     sub_1405B6210 @ 0x1405B6210 (sub_1405B6210.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405BAC90 @ 0x1405BAC90 (sub_1405BAC90.c)
 *     sub_1405BAFB0 @ 0x1405BAFB0 (sub_1405BAFB0.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 *     sub_1405BBA5C @ 0x1405BBA5C (sub_1405BBA5C.c)
 *     sub_1405BBB54 @ 0x1405BBB54 (sub_1405BBB54.c)
 *     sub_1405BBC9C @ 0x1405BBC9C (sub_1405BBC9C.c)
 *     sub_1405BC07C @ 0x1405BC07C (sub_1405BC07C.c)
 *     sub_1405BC224 @ 0x1405BC224 (sub_1405BC224.c)
 *     sub_1405BC9E8 @ 0x1405BC9E8 (sub_1405BC9E8.c)
 */

_BOOL8 __fastcall sub_1405B88D8(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 *a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        unsigned __int8 a13,
        _QWORD *a14,
        _DWORD *a15)
{
  ULONG_PTR v16; // rdi
  __int64 v17; // r13
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ebx
  int v21; // edx
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // r10
  int v26; // r8d
  unsigned __int64 v27; // rsi
  KIRQL v28; // al
  _QWORD *v29; // r11
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int8 v32; // al
  __int64 v33; // r9
  unsigned __int8 v34; // di
  __int64 v35; // rdx
  _QWORD *v36; // r8
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdi
  signed __int32 v40; // r9d
  _QWORD *v41; // rax
  volatile LONG *v42; // rbx
  int v43; // eax
  BOOL v44; // edi
  int v45; // edx
  char v46; // r8
  __int64 v47; // r10
  char *v48; // rdi
  volatile LONG *v49; // rdi
  __int64 v50; // rcx
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 *v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdi
  bool v64; // zf
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rbx
  int v67; // esi
  int v68; // eax
  __int64 v69; // r10
  __int64 v70; // rbx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // r11
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // esi
  __int64 v79; // rbx
  int v80; // ebx
  int v81; // r9d
  __int64 v82; // rax
  __int64 v83; // r13
  unsigned __int16 v84; // cx
  __int64 v85; // rbx
  __int64 v86; // rax
  char v87; // di
  __int64 v88; // rbx
  BOOL v89; // eax
  __int64 v90; // r8
  unsigned int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // rbx
  int v94; // edi
  int v95; // esi
  __int64 v96; // rdx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // r11
  bool v100; // al
  int v101; // r8d
  __int64 v102; // r10
  int v103; // r11d
  __int64 v104; // rcx
  __int64 v105; // rdi
  __int64 v106; // rcx
  __int64 v107; // rax
  int v108; // [rsp+50h] [rbp-A1h]
  int v109; // [rsp+68h] [rbp-89h]
  unsigned __int64 v110; // [rsp+70h] [rbp-81h] BYREF
  unsigned int v111; // [rsp+78h] [rbp-79h]
  int i; // [rsp+7Ch] [rbp-75h]
  unsigned int v113; // [rsp+80h] [rbp-71h]
  unsigned __int64 v114; // [rsp+88h] [rbp-69h]
  _QWORD *v115; // [rsp+90h] [rbp-61h]
  __int64 v116; // [rsp+98h] [rbp-59h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-51h] BYREF
  char *v118; // [rsp+A8h] [rbp-49h]
  __int64 v119; // [rsp+B0h] [rbp-41h]
  int v120; // [rsp+B8h] [rbp-39h] BYREF
  int v121; // [rsp+BCh] [rbp-35h] BYREF
  int v122; // [rsp+C0h] [rbp-31h] BYREF
  __int64 v123; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v124; // [rsp+D0h] [rbp-21h] BYREF
  _QWORD v125[9]; // [rsp+E0h] [rbp-11h] BYREF

  v123 = 0LL;
  v116 = 0LL;
  v124 = 0LL;
  v16 = a3;
  v17 = a2;
  v110 = sub_140317A10(a3);
  v18 = v110;
  if ( !v110 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      v19 = sub_1405BAC90(a5, (*(_DWORD *)(a10 + 48) >> 7) & 0x1F);
      v20 = v19;
      if ( v19 )
      {
        sub_14028FB74(a8, 1u);
        sub_1405BC07C(v17, v21, v20, (_DWORD)a4, (__int64)a14);
      }
    }
    return 0LL;
  }
  sub_14028FB74(a8, 1u);
  v111 = 0;
  v24 = 0;
  v25 = a1;
  v26 = a12;
  v117 = -1LL;
  v27 = (unsigned __int64)a6;
  v118 = (char *)(a1 + 1664);
  v28 = a13;
  for ( i = a12; ; v26 = i )
  {
    v29 = a14;
    if ( v24 )
    {
      LOBYTE(v23) = v28;
      sub_14032CE60(v16, 0LL, 0, v23, 1);
      v30 = sub_140317A10(v16);
      v29 = a14;
      v18 = v30;
      v25 = a1;
      v26 = i;
      v110 = v30;
    }
    if ( (v18 & 1) != 0 )
    {
      v31 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v110) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v111
        || *(_WORD *)(v31 + 32) > 1u && *(__int64 *)(v31 + 40) >= 0
        || (unsigned int)sub_140239F04((_QWORD *)(v31 + 16)) )
      {
        sub_140339C20(v118, 0, (__int64)&v124);
        v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v124, 1u);
        v41 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838));
        v115 = v41;
        if ( v117 != -1
          || (v117 = sub_1403250B0((__int64)v41, HIDWORD(v124) | (unsigned int)v40 & DWORD2(v124), 0), v117 != -1) )
        {
          v80 = v117;
          sub_1402E5708(48 * v117 - 0x220000000000LL, *(unsigned __int8 *)(v31 + 34) >> 6, 0);
          LOBYTE(v81) = a13;
          sub_1405BA864(v16, (_DWORD)a4, v80, v81, 17);
          ++*a7;
          return 0LL;
        }
        sub_14032F1B0(a9);
        sub_14030FA80((__int64)v118, a13);
        sub_1405B8348(v115);
        v42 = (volatile LONG *)sub_140282AD0((__int64)v118);
        v28 = ExAcquireSpinLockExclusive(v42);
        *((_DWORD *)v42 + 1) = 0;
        v18 = v110;
        a13 = v28;
LABEL_32:
        v17 = a2;
        goto LABEL_33;
      }
      v119 = (__int64)(v16 << 25) >> 16;
      v32 = sub_14033A410(v119, v119);
      v34 = v32;
      v114 = *(_QWORD *)(v31 + 40);
      if ( (v114 & 0x8000000000000000uLL) == 0LL )
      {
        v123 = sub_140317A10(v33 + ((v27 >> 9) & 0x7FFFFFFFF8LL));
        v36 = (_QWORD *)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v123) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        v111 = 0;
        v113 = 0;
        v37 = 0LL;
        v115 = v36;
        v23 = *(_QWORD *)(qword_140C51F48 + 8 * ((v114 >> 43) & 0x3FF));
        v38 = *(unsigned __int16 *)(a2 + 1838);
        v114 = v23;
        if ( *(_QWORD *)(qword_140C51F48 + 8 * v38) != v23 )
        {
          if ( (i & 1) != 0 )
          {
            if ( !(unsigned int)sub_14032A4B0(v23, 1uLL, 0) )
              goto LABEL_102;
            v23 = v114;
            v113 = 1;
          }
          if ( !(unsigned int)sub_1405BAFB0(v23) )
          {
            sub_1405BC224(a4);
            v44 = 0;
            *a15 = 1;
            if ( !v113 )
              goto LABEL_217;
            v50 = v114;
            goto LABEL_46;
          }
          v36 = v115;
          v111 = 1;
        }
        if ( (v34 & 0xF) != 8 || (unsigned int)sub_14031F940((__int64)v36, 3uLL) )
        {
          v120 = 0;
          v51 = (volatile signed __int32 *)v115;
          while ( _interlockedbittestandset64(v51 + 6, 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v120, v35, (__int64)v36, v23);
            while ( *((__int64 *)v51 + 3) < 0 );
          }
          v52 = 0x3FFFFFFFFFFFFFFFLL;
          *((_QWORD *)v51 + 3) ^= (*((_QWORD *)v51 + 3) ^ (*((_QWORD *)v51 + 3) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)v51 + 3, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v110 & 0x42) != 0 )
          {
            v53 = a10;
            if ( (*(_DWORD *)(a10 + 48) & 0x600000) == 0x600000 && *(__int64 *)(v31 + 40) >= 0 )
              sub_1402358D4(a1, v119, a10);
            v121 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v121, v52, v53, v23);
              while ( *(__int64 *)(v31 + 24) < 0 );
            }
            v54 = sub_14033C2A0(v31);
            v110 &= 0xFFFFFFFFFFFFFFBDuLL;
            v37 = v54;
          }
          else
          {
            v122 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
            {
              do
                sub_1402F32E0(&v122, v52, (__int64)v36, v23);
              while ( *(__int64 *)(v31 + 24) < 0 );
            }
          }
          v55 = (unsigned __int64 *)(v31 + 16);
          v56 = *(_QWORD *)(v31 + 16);
          if ( (v56 & 2) != 0 )
          {
            v57 = *(_QWORD *)(v31 + 16);
            if ( qword_140C50780 && (v56 & 0x10) == 0 )
              v57 = ~qword_140C50780 & v56;
            v37 = sub_140340078(
                    *(_QWORD *)(v31 + 16),
                    *(_QWORD *)(v114 + 8LL * ((unsigned __int16)v56 >> 12) + 16736),
                    HIDWORD(v57));
            *v55 = v56 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          *(_QWORD *)(v31 + 8) = a6;
          *(_QWORD *)(v31 + 40) |= 0x8000000000000000uLL;
          v58 = sub_140317A10((unsigned __int64)&v123);
          sub_14033C3E0(v31, (v58 >> 12) & 0xFFFFFFFFFFLL);
          sub_14026ED6C((__int64 *)(v31 + 16));
          v115 = (_QWORD *)(*v55 >> 5);
          sub_14026EDC4(v31, a3);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v37 )
            sub_1402E20D0(v114, v37, 1);
          v59 = v110;
          if ( (v110 & 0x800) != 0 )
          {
            v59 = v110 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v110 = v59;
          }
          sub_14033DBC0(a3, v59);
          v60 = v119;
          sub_1402CF280(a9, v119, 1LL, 0);
          sub_140269FA8(a9, 0);
          *a6 = 0LL;
          if ( sub_140317A80((unsigned __int64)a6) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v62 = 1;
              if ( !HIBYTE(word_140C51864) )
              {
LABEL_73:
                if ( (v59 & 1) != 0 )
                  v59 |= 0x8000000000000000uLL;
              }
            }
            else
            {
              v61 = *((_QWORD *)KeGetCurrentThread() + 23);
              v62 = 0;
              if ( (*(_DWORD *)(v61 + 2172) & 0x1000) != 0 )
                goto LABEL_73;
            }
          }
          else
          {
            v62 = 0;
          }
          *a6 = v59;
          if ( v62 )
            sub_1402294F0((__int64)a6, v59);
          a6[1] = v111;
          a6[3] = 2LL;
          sub_14026ECFC(v61, v60);
          v63 = sub_1402CCC50((*(_QWORD *)(v31 + 8) << 16) | 0x400LL);
          if ( (i & 1) != 0 )
          {
            v63 |= 8uLL;
            v64 = v113 == 0;
            a6[2] = 1LL;
            v110 = v63;
            if ( v64 )
              ++a14[1];
            else
              ++*a14;
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v114 + 17528), 1uLL);
            v65 = a6[2];
          }
          else
          {
            v65 = 0LL;
          }
          v66 = v63;
          a6[2] = v65 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v115 << 59);
          v67 = 0;
          if ( sub_140317A80((unsigned __int64)a4) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              v67 = 1;
              if ( !HIBYTE(word_140C51864) )
                goto LABEL_91;
            }
            else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
            {
LABEL_91:
              if ( (v63 & 1) != 0 )
                v66 = v63 | 0x8000000000000000uLL;
            }
          }
          *a4 = v66;
          if ( v67 )
            sub_1402294F0((__int64)a4, v66);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
          sub_14026EEA8((__int64)v118, v119, 0xFFFFFFFFFFFFFFFFuLL, 0);
LABEL_96:
          v44 = 1;
          goto LABEL_217;
        }
        v39 = v114;
        if ( v111 )
          sub_1405BBC9C(v114);
        if ( v113 )
          sub_14028CE10(v39, 1LL);
        v27 = (unsigned __int64)a6;
        v16 = a3;
        v28 = a13;
        v111 = 1;
        goto LABEL_32;
      }
      v68 = sub_14033A4C0(v119, v32);
      if ( v68 )
      {
        v70 = sub_1402CCC50(32 * (v68 & 0x1F | 0xFFFFFFFFF8000020uLL));
      }
      else
      {
        v74 = sub_1402CCC50((v69 << 16) | 0x400);
        v70 = v74;
        if ( v71 >= 0 && (v73 & 0x10000000000LL) == 0 )
        {
          if ( v71 )
          {
            v70 = v74 | 0x800;
            v110 = v74 | 0x800;
LABEL_101:
            if ( !(unsigned int)sub_1405B6210(a2 + 1664, v72) )
            {
LABEL_102:
              sub_1405BC224(a4);
              *a15 = 1;
LABEL_216:
              v44 = 0;
              goto LABEL_217;
            }
            v75 = v70;
            goto LABEL_115;
          }
LABEL_107:
          if ( !(unsigned int)sub_1405BBB54((int)a2 + 1664, v72, i, (_DWORD)a14, (__int64)&v116) )
            goto LABEL_102;
          v75 = v70;
          if ( v116 )
          {
            v75 = v70 | 8;
            v110 = v70 | 8;
          }
          else if ( !sub_1402806A0(*(_QWORD *)(v31 + 16))
                 && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20
                 && !sub_14030FBE0(a10) )
          {
            v77 = sub_1405BBA5C(a1, a2, a3, v76);
            if ( v77 )
            {
              v110 = v77;
              v75 = v77;
            }
          }
LABEL_115:
          v78 = 0;
          v79 = v75;
          if ( !sub_140317A80((unsigned __int64)a4) )
            goto LABEL_214;
          if ( (unsigned int)sub_140229550() )
          {
            v78 = 1;
            if ( HIBYTE(word_140C51864) )
              goto LABEL_214;
          }
          else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          {
            goto LABEL_214;
          }
          if ( (v75 & 1) == 0 )
            goto LABEL_214;
          goto LABEL_213;
        }
      }
      if ( v71 >= 0 && (v73 & 0x10000000000LL) == 0 && v71 )
        goto LABEL_101;
      goto LABEL_107;
    }
    if ( (v18 & 0x400) != 0 )
    {
      v100 = sub_1402802DC(v18);
      v104 = v17 + 1664;
      if ( v100 )
      {
        if ( !(unsigned int)sub_1405B6210(v104, v102) )
          goto LABEL_102;
        v105 = v18;
      }
      else
      {
        if ( !(unsigned int)sub_1405BBB54(v104, v102, v101, v103, (__int64)&v116) )
          goto LABEL_102;
        v105 = v18;
        if ( v116 )
        {
          if ( *(_QWORD *)(v116 + 16) >> 59 != 24 )
          {
            v105 = v18 | 8;
            v110 = v18 | 8;
          }
        }
        else if ( !sub_1402806A0(v18) && (*(_BYTE *)(a10 + 48) & 0x70) == 0x20 && !sub_14030FBE0(a10) )
        {
          v107 = sub_1405BBA5C(a1, v17, a3, v106);
          if ( v107 )
          {
            v110 = v107;
            v105 = v107;
          }
        }
      }
      v78 = 0;
      v79 = v105;
      if ( !sub_140317A80((unsigned __int64)a4) )
        goto LABEL_214;
      if ( (unsigned int)sub_140229550() )
      {
        v78 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_214;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_214;
      }
      if ( (v105 & 1) == 0 )
      {
LABEL_214:
        *a4 = v79;
        if ( v78 )
          sub_1402294F0((__int64)a4, v79);
        goto LABEL_216;
      }
LABEL_213:
      v79 |= 0x8000000000000000uLL;
      goto LABEL_214;
    }
    if ( (v18 & 0x800) == 0 )
      break;
    LOBYTE(v108) = a13;
    v43 = sub_1405BB090(v25, v17, v16, a4, v27, a7, a9, &v117, v26, v108, v29, a15);
    if ( v43 )
    {
      v44 = v43 != 1;
      goto LABEL_217;
    }
    v28 = a13;
LABEL_33:
    v25 = a1;
    v24 = 1;
  }
  v44 = 0;
  v115 = (_QWORD *)((v18 >> 5) & 0x1F);
  if ( !sub_14033FD38(v18) )
  {
    if ( (v18 & 2) != 0 )
    {
      v18 &= ~2uLL;
      v110 = v18;
    }
    if ( !(unsigned int)sub_140239F04(&v110) )
    {
      if ( a5 )
      {
        v97 = sub_1405BAC90(a5, v96);
        v116 = v97;
        if ( v97 )
        {
          sub_1405BC07C(v17, v98, v97, (_DWORD)a4, v99);
          goto LABEL_217;
        }
      }
    }
LABEL_180:
    v95 = 0;
    if ( sub_140317A80((unsigned __int64)a4) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v95 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
LABEL_185:
          if ( (v18 & 1) != 0 )
            v18 |= 0x8000000000000000uLL;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        goto LABEL_185;
      }
    }
    *a4 = v18;
    if ( v95 )
      sub_1402294F0((__int64)a4, v18);
    goto LABEL_217;
  }
  if ( v45 == 16 )
  {
    if ( (v18 & 2) != 0 )
    {
      v18 &= ~2uLL;
      v110 = v18;
    }
    goto LABEL_180;
  }
  if ( (v45 & 0xFFFFFFF8) == 0x10 || (unsigned int)sub_140239F04(&v110) )
  {
    sub_14032F1B0(a9);
    v48 = v118;
    sub_14030FA80((__int64)v118, a13);
    v125[1] = 4096LL;
    v125[0] = (__int64)(a3 << 25) >> 16;
    sub_140284EB0(1uLL, (__int64)v125, (__int64)v48, 45);
    v49 = (volatile LONG *)sub_140282AD0((__int64)v48);
    v28 = ExAcquireSpinLockExclusive(v49);
    *((_DWORD *)v49 + 1) = 0;
    v16 = a3;
    a13 = v28;
    goto LABEL_33;
  }
  v82 = *(unsigned __int16 *)(v47 + 1838);
  v113 = 0;
  v111 = 0;
  v83 = *(_QWORD *)(qword_140C51F48 + 8 * v82);
  if ( *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a2 + 1838)) == v83 )
  {
LABEL_133:
    if ( (v18 & 4) != 0 )
    {
      v84 = v18;
      if ( qword_140C50780 && (v18 & 0x10) == 0 )
        v18 &= ~qword_140C50780;
      sub_1405BC9E8(*(_QWORD *)(v83 + 8LL * (v84 >> 12) + 16736), HIDWORD(v18), v27, a3);
    }
    sub_14026ED6C((__int64 *)&v110);
    v85 = v110;
    if ( (v110 & 2) != 0 )
    {
      sub_1402E20D0(v83, v110 & 0xFFFFFFFFFFFFFFFBuLL, 1);
      v85 &= ~2uLL;
      v110 = v85;
    }
    *(_QWORD *)v27 = 0LL;
    if ( sub_140317A80(v27) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v44 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_147;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_147;
      }
      if ( (v85 & 1) != 0 )
        v85 |= 0x8000000000000000uLL;
    }
LABEL_147:
    *(_QWORD *)v27 = v85;
    if ( v44 )
      sub_1402294F0(v27, v85);
    *(_QWORD *)(v27 + 8) = v113;
    *(_QWORD *)(v27 + 24) = 2LL;
    v86 = sub_1402CCC50((v27 << 16) | 0x400);
    v87 = v86;
    v109 = 0;
    v88 = v86;
    v110 = v86;
    v89 = sub_140317A80(a3);
    v90 = 0LL;
    if ( v89 )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v109 = 1;
        if ( HIBYTE(word_140C51864) != (_BYTE)v90 )
          goto LABEL_156;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
      {
        goto LABEL_156;
      }
      if ( (v87 & 1) != 0 )
        v88 |= 0x8000000000000000uLL;
    }
LABEL_156:
    *(_QWORD *)a3 = v88;
    if ( v109 != (_DWORD)v90 )
    {
      sub_1402294F0(a3, v88);
      v90 = 0LL;
    }
    if ( (i & 1) != 0 )
    {
      v91 = (unsigned int)v115;
      if ( (_DWORD)v115 != 24 )
        v110 |= 8uLL;
      *(_QWORD *)(v27 + 16) = 1LL;
      if ( v111 == (_DWORD)v90 )
        ++a14[1];
      else
        ++*a14;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 17528), 1uLL);
      v92 = *(_QWORD *)(v27 + 16);
    }
    else
    {
      if ( v113 != (_DWORD)v90 )
        *(_QWORD *)(v27 + 8) = 1LL;
      v91 = (unsigned int)v115;
      v92 = v90;
      *(_QWORD *)(v27 + 16) = v90;
    }
    v93 = v110;
    v94 = v90;
    *(_QWORD *)(v27 + 16) = v92 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v91 << 59);
    if ( !sub_140317A80((unsigned __int64)a4) )
      goto LABEL_175;
    if ( (unsigned int)sub_140229550() )
    {
      v94 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_173:
        if ( (v93 & 1) != 0 )
          v93 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_173;
    }
LABEL_175:
    *a4 = v93;
    if ( v94 )
      sub_1402294F0((__int64)a4, v93);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    goto LABEL_96;
  }
  if ( (v46 & 1) != 0 )
  {
    if ( !(unsigned int)sub_14032A4B0(v83, 1uLL, 0) )
    {
      sub_1405BC224(a4);
      *a15 = 1;
      goto LABEL_217;
    }
    v111 = 1;
  }
  if ( (unsigned int)sub_1405BAFB0(v83) )
  {
    v113 = 1;
    goto LABEL_133;
  }
  sub_1405BC224(a4);
  *a15 = 1;
  if ( v111 )
  {
    v50 = v83;
LABEL_46:
    sub_14028CE10(v50, 1LL);
  }
LABEL_217:
  if ( v117 != -1 )
    sub_1403CC0F0(48 * v117 - 0x220000000000LL);
  return v44;
}

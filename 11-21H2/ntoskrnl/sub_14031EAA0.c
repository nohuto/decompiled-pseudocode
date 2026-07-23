/*
 * XREFs of sub_14031EAA0 @ 0x14031EAA0
 * Callers:
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140230B44 @ 0x140230B44 (sub_140230B44.c)
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     sub_1402806A0 @ 0x1402806A0 (sub_1402806A0.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_14028DC40 @ 0x14028DC40 (sub_14028DC40.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     sub_14039EA10 @ 0x14039EA10 (sub_14039EA10.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 */

__int64 __fastcall sub_14031EAA0(unsigned __int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 *v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r8
  volatile signed __int32 *v13; // r14
  unsigned __int64 v14; // rax
  __int64 CurrentPrcb; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  char v18; // di
  unsigned __int64 v19; // r8
  ULONG_PTR *v20; // rbx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // rcx
  _BYTE *v24; // rbx
  char *v25; // r13
  char v26; // al
  volatile signed __int64 *v27; // r13
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 *v36; // r9
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned __int64 v42; // r12
  int v43; // r11d
  _BYTE *v44; // r8
  __int16 v45; // cx
  __int64 v46; // rbx
  bool v47; // zf
  __int16 v48; // cx
  __int64 v49; // rdx
  volatile signed __int64 v50; // r10
  __int64 v51; // rax
  unsigned __int64 v52; // r8
  char v53; // al
  __int64 v54; // rbx
  struct _KPRCB *v55; // r8
  __int64 v56; // rdx
  signed __int32 v57; // eax
  __int64 result; // rax
  unsigned __int64 v59; // r15
  __int64 v60; // r8
  unsigned __int64 v61; // rax
  __int64 v62; // r11
  char v63; // cl
  unsigned __int64 *v64; // rdi
  __int16 v65; // ax
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  BOOL v68; // eax
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rsi
  unsigned int v71; // eax
  int v72; // r15d
  __int64 v73; // rbx
  __int64 v74; // rdx
  unsigned int v75; // ecx
  unsigned int v76; // eax
  char v77; // bl
  __int64 v78; // rax
  unsigned __int64 v79; // rbx
  unsigned int v80; // edi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 **v83; // r15
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // ebx
  unsigned __int64 v87; // rbx
  BOOL v88; // eax
  unsigned __int64 v89; // rsi
  unsigned __int64 v90; // r15
  __int64 v91; // [rsp+30h] [rbp-B8h]
  __int64 v92; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+40h] [rbp-A8h]
  volatile signed __int32 *v94; // [rsp+48h] [rbp-A0h]
  __int64 v95; // [rsp+50h] [rbp-98h]
  __int64 v96; // [rsp+58h] [rbp-90h]
  unsigned __int64 v97; // [rsp+60h] [rbp-88h]
  __int16 *v98; // [rsp+68h] [rbp-80h]
  __int64 v99; // [rsp+70h] [rbp-78h]
  int v100; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v101; // [rsp+80h] [rbp-68h] BYREF
  _BYTE *v102; // [rsp+88h] [rbp-60h]
  unsigned __int64 v103; // [rsp+90h] [rbp-58h] BYREF
  __int64 v104; // [rsp+98h] [rbp-50h]
  _QWORD *v105; // [rsp+A0h] [rbp-48h]
  unsigned __int64 *v106; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v107; // [rsp+F8h] [rbp+10h]
  _QWORD *v108; // [rsp+100h] [rbp+18h] BYREF
  int v109; // [rsp+108h] [rbp+20h] BYREF

  v108 = a3;
  v107 = a2;
  v106 = a1;
  v103 = 0LL;
  v101 = a1[7];
  v3 = *a1;
  v4 = *a1;
  *a3 = 0LL;
  v104 = 0LL;
  v97 = v3;
  v5 = a1[2];
  v6 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = v5;
  v96 = v5 & 1;
  if ( (v5 & 1) == 0 || (v5 &= ~1uLL, v99 = v5, *(_BYTE *)v5 != 1) )
    v99 = 0LL;
  v93 = a1[12];
  v7 = (unsigned __int64 *)(((v93 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 0xFFFFFFFFFFLL;
  while ( 1 )
  {
    v9 = *v7;
    while ( 1 )
    {
      if ( (*v7 & 1) == 0 || (v9 & 0x200) != 0 )
        return 3221225494LL;
      v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
      if ( v10 <= qword_140C50840 )
      {
        v11 = 48 * v10;
        v95 = 48 * v10;
        if ( (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v12 = v11 - 0x220000000000LL;
    v109 = 0;
    v91 = v11 - 0x220000000000LL;
    v13 = (volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v109, v5, v12, v8);
        while ( *(__int64 *)v13 < 0 );
      }
      while ( _interlockedbittestandset64(v13, 0x3FuLL) );
      v12 = v11 - 0x220000000000LL;
      v8 = 0xFFFFFFFFFFLL;
    }
    v14 = *v7;
    if ( (*v7 & 1) == 0 || (v14 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    if ( v10 == ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  }
  CurrentPrcb = *(_QWORD *)(v12 + 40);
  v16 = 1LL;
  if ( (CurrentPrcb & 0x10000000000LL) != 0 || (CurrentPrcb & 0x20000000000000LL) != 0 )
    goto LABEL_26;
  v12 = *(unsigned __int16 *)(v11 - 0x21FFFFFFFFE0LL);
  v17 = *(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v12 )
  {
    if ( (_WORD)v12 == 1 )
    {
      if ( !v17 && (*(_BYTE *)(v11 - 0x21FFFFFFFFDELL) & 8) == 0 )
        goto LABEL_26;
    }
    else if ( (_WORD)v12 != 2 || !v17 || (*(_BYTE *)(v11 - 0x21FFFFFFFFDELL) & 8) == 0 )
    {
      goto LABEL_26;
    }
  }
  v18 = 0;
  if ( CurrentPrcb < 0 && (*(_DWORD *)(v11 - 0x21FFFFFFFFF0LL) & 0x400LL) != 0
    || (v19 = *(_QWORD *)(v11 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, v19 <= 0xFFFFF6BFFFFFFF78uLL)
    && v19 >= 0xFFFFF68000000000uLL
    && (*(_BYTE *)(v11 - 0x21FFFFFFFFDDLL) & 0x20) != 0 )
  {
    v18 = 1;
    v98 = (__int16 *)(v11 - 0x21FFFFFFFFE0LL);
    v20 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)CurrentPrcb >> 43) & 0x3FF));
    if ( !(unsigned int)sub_14032A4B0(v20, 1LL, 4LL) )
      goto LABEL_27;
    v16 = 1LL;
  }
  else
  {
    v20 = *(ULONG_PTR **)(qword_140C51F48 + 8 * (((unsigned __int64)CurrentPrcb >> 43) & 0x3FF));
  }
  if ( v20 == &StartContext )
  {
    CurrentPrcb = (__int64)KeGetCurrentPrcb();
    v21 = *(_DWORD *)(CurrentPrcb + 34460);
    if ( v21 )
    {
      v12 = 0xFFFFFFFFLL;
      do
      {
        if ( v21 == -1 )
          break;
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), v21 - 1, v21);
        if ( v22 == v21 )
          goto LABEL_26;
      }
      while ( v21 );
    }
  }
  if ( !(unsigned int)sub_14028DC40((__int64)v20, 1uLL, 0xFFFFFFFFLL) )
  {
    v98 = (__int16 *)(v11 - 0x21FFFFFFFFE0LL);
    if ( v18 )
    {
      sub_14028CE10((__int64)v20, 1LL);
      v98 = (__int16 *)(v11 - 0x21FFFFFFFFE0LL);
    }
    goto LABEL_27;
  }
LABEL_26:
  ++*(_WORD *)(v11 - 0x21FFFFFFFFE0LL);
  v23 = v11 - 0x21FFFFFFFFE0LL;
  v98 = (__int16 *)(v11 - 0x21FFFFFFFFE0LL);
LABEL_27:
  v105 = (_QWORD *)(v11 - 0x21FFFFFFFFF8LL);
  v24 = (_BYTE *)(*(_QWORD *)(v11 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL);
  v25 = (char *)(v11 - 0x21FFFFFFFFDELL);
  v26 = *(_BYTE *)(v11 - 0x21FFFFFFFFDELL);
  v102 = (_BYTE *)(v11 - 0x21FFFFFFFFDELL);
  if ( (v26 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      v80 = 0;
      while ( (*v25 & 0x20) != 0 )
      {
        if ( (++v80 & dword_140D0527C) == 0
          && (dword_140D0689C & 0x40) != 0
          && (unsigned __int8)sub_14039EA10(v23, CurrentPrcb, v12, v16) )
        {
          sub_14039D930(v80);
        }
        else
        {
          _mm_pause();
        }
      }
      sub_1402F2700(v91);
      v26 = *v25;
    }
    while ( (*v25 & 0x20) != 0 );
    v11 = v95;
  }
  *v25 = v26 | 0x20;
  v27 = (volatile signed __int64 *)(v11 - 0x21FFFFFFFFE8LL);
  v94 = (volatile signed __int32 *)(v11 - 0x21FFFFFFFFE8LL);
  if ( (*(_QWORD *)(v11 - 0x21FFFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v24 & 0x20) == 0 )
    sub_14033A510(v24, 1LL);
  v28 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
  v29 = v93;
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)v29;
      v31 = *(_QWORD *)v29;
      if ( (*(_QWORD *)v29 & 1) != 0 )
        goto LABEL_33;
      if ( (*(_QWORD *)v29 & 0xC00LL) != 0x800 )
      {
        v33 = 0LL;
        goto LABEL_39;
      }
      if ( !v30 || !qword_140C50780 || (v30 & qword_140C50780) != 0 )
      {
        v31 = *(_QWORD *)v29;
        if ( qword_140C50780 && (v30 & 0x10) == 0 )
          v31 = v30 & ~qword_140C50780;
LABEL_33:
        v32 = (v31 >> 12) & 0xFFFFFFFFFFLL;
        if ( v32 <= qword_140C50840 )
        {
          CurrentPrcb = 6 * v32;
          if ( _bittest64((const signed __int64 *)(48 * v32 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v33 = 48 * v32 - 0x220000000000LL;
    v100 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v100, CurrentPrcb, v12, v28);
        while ( *(__int64 *)(v33 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
      v29 = v93;
      v28 = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( *(_QWORD *)v29 == v30 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  CurrentPrcb = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v33 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(CurrentPrcb + 4) & 0x100) != 0 )
  {
    v81 = sub_14059A31C(v33, 2LL);
    v29 = v93;
    v33 = v81;
  }
LABEL_39:
  v34 = *(_QWORD *)v29;
  v35 = *(_QWORD *)v29;
  v36 = (__int64 *)0xFFFFF6FB7DBED000LL;
  if ( v29 >= 0xFFFFF6FB7DBED000uLL
    && v29 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v35 & 1) != 0
    && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
  {
    CurrentPrcb = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( CurrentPrcb )
    {
      v82 = *(_QWORD *)(CurrentPrcb + 8 * ((v29 >> 3) & 0x1FF));
      if ( (v82 & 0x20) != 0 )
        v35 |= 0x20uLL;
      if ( (v82 & 0x42) != 0 )
        v35 |= 0x42uLL;
    }
  }
  v103 = v35;
  if ( (v35 & 1) == 0 )
  {
    if ( !v35 )
      goto LABEL_172;
    v59 = *(_QWORD *)v6;
    v60 = 0LL;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v59 & 1) != 0
      && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
    {
      CurrentPrcb = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( CurrentPrcb )
      {
        v84 = *(_QWORD *)(CurrentPrcb + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v84 & 0x20) != 0 )
          v59 |= 0x20uLL;
        if ( (v84 & 0x42) != 0 )
          v59 |= 0x42uLL;
      }
    }
    if ( (v59 & 0x400) != 0 )
    {
      v61 = v59;
      if ( qword_140C50780 && (v59 & 0x10) == 0 )
        v61 = v59 & ~qword_140C50780;
      if ( HIDWORD(v61) == 0xFFFFFFFF )
      {
        v64 = v106;
        v60 = (v59 >> 5) & 0x1F;
        if ( ((v59 >> 5) & 0x18) == 0x10 && (*((_BYTE *)v106 + 69) & 8) != 0 )
          goto LABEL_211;
        v62 = v107;
        goto LABEL_100;
      }
    }
    if ( (v59 & 8) != 0 )
    {
      v62 = v107;
    }
    else
    {
      v60 = (v35 >> 5) & 0x1F;
      CurrentPrcb = ((v35 >> 5) & 0x1F) >> 3;
      if ( (_DWORD)CurrentPrcb == 2 && (*((_BYTE *)v106 + 69) & 8) != 0 )
        goto LABEL_211;
      if ( v29 >= 0xFFFFF6FB7DBED000uLL
        && v29 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
      {
        if ( (v34 & 1) == 0 )
          goto LABEL_95;
        if ( (v34 & 0x20) == 0 || (v34 & 0x42) == 0 )
        {
          v36 = *(__int64 **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v36 )
          {
            v85 = v36[(v29 >> 3) & 0x1FF];
            if ( (v85 & 0x20) != 0 )
              v34 |= 0x20uLL;
            if ( (v85 & 0x42) != 0 )
              v34 |= 0x42uLL;
          }
        }
      }
      if ( (v34 & 1) == 0 )
      {
LABEL_95:
        v62 = v107;
        v36 = qword_1400161F0;
        v63 = 1;
        if ( !v107 )
          v63 = v107;
        if ( *((char *)qword_1400161F0 + ((unsigned __int8)v35 >> 5)) - v63 >= 10 )
        {
          if ( (_DWORD)CurrentPrcb == 2 && (!v96 || *(_BYTE *)(v92 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
          {
            if ( !sub_140230B44(v92) )
            {
              v86 = -1073741819;
              goto LABEL_331;
            }
            v87 = v34 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v35 >> 5) & 0xF));
            if ( (v34 & 0xC00) == 0x800 )
            {
              if ( !sub_140317A80(v93) )
                goto LABEL_329;
              if ( (unsigned int)sub_140229550() )
              {
                if ( HIBYTE(word_140C51864) || (v34 & 1) == 0 )
                  goto LABEL_317;
                goto LABEL_316;
              }
              if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 || (v34 & 1) == 0 )
                goto LABEL_329;
            }
            else
            {
              if ( !sub_140317A80(v93) )
                goto LABEL_329;
              if ( (unsigned int)sub_140229550() )
              {
                if ( HIBYTE(word_140C51864) || (v34 & 1) == 0 )
                  goto LABEL_317;
LABEL_316:
                v87 |= 0x8000000000000000uLL;
LABEL_317:
                *(_QWORD *)v93 = v87;
                sub_1402294F0(v93, v87);
LABEL_330:
                v86 = -2147483647;
                goto LABEL_331;
              }
              if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 || (v34 & 1) == 0 )
              {
LABEL_329:
                *(_QWORD *)v93 = v87;
                goto LABEL_330;
              }
            }
            v87 |= 0x8000000000000000uLL;
            goto LABEL_329;
          }
          goto LABEL_99;
        }
        v86 = -1073741819;
LABEL_331:
        if ( v33 )
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(CurrentPrcb) = 17;
        sub_140334790(v91, CurrentPrcb);
        return v86;
      }
      v62 = v107;
      if ( v107 && (v34 & 0xA00) == 0 )
      {
        v86 = -1073741819;
        goto LABEL_331;
      }
    }
LABEL_99:
    v64 = v106;
LABEL_100:
    v65 = v35;
    if ( qword_140C50780 && (v35 & 0x10) == 0 )
      v65 = v35 & ~(_WORD)qword_140C50780;
    if ( (v65 & 0x400) == 0
      && (v65 & 0x800) == 0
      && (v65 & 4) == 0
      && (v60 & 5) == 5
      && (v62 || (((unsigned __int8)v35 >> 5) & 5) != 4)
      && ((*(_BYTE *)(v101 + 184) & 7) != 0 || !*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1264LL))
      && ((dword_140D06880 & 0x8000) == 0 || v97 < 0xFFFF800000000000uLL || (v60 & 2) == 0) )
    {
      LODWORD(v101) = 0;
      while ( _interlockedbittestandset64(v94, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v101, CurrentPrcb, v60, (__int64)v36);
        while ( *(__int64 *)v94 < 0 );
      }
      *v102 &= ~0x20u;
      if ( (unsigned int)sub_1403377E0(v91) )
        sub_140338500(v91, 0xAAAAAAAAAAAAAAABuLL * (v95 >> 4));
      _InterlockedAnd64((volatile signed __int64 *)v94, 0x7FFFFFFFFFFFFFFFuLL);
      if ( v99 )
      {
        if ( !v96 )
          return 0LL;
        v67 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( *(_BYTE *)(v92 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v67 + 80) & 0x4000) == 0 )
          return 0LL;
        v66 = v92;
      }
      else
      {
        v66 = v92;
        v67 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      if ( v96 )
      {
        if ( *(_BYTE *)v67 != 1 && *(_BYTE *)v67 != 3 || *(_BYTE *)v67 == 6 )
        {
LABEL_126:
          v68 = sub_1402806A0(v59);
          v69 = v59 >> 5;
          v70 = v35 >> 5;
          v47 = !v68;
          v71 = 4;
          if ( v47 )
            LOBYTE(v69) = v70;
          if ( (v69 & 2) != 0 )
            v71 = 6;
          v72 = v69 & 0x18;
          if ( v72 == 8 )
          {
            v71 |= 8u;
          }
          else if ( v72 == 24 )
          {
            v71 |= 0x18u;
          }
          v73 = sub_1402CCC50(32LL * v71);
          if ( sub_140317A80(v6) )
          {
            if ( (unsigned int)sub_140229550() )
            {
              if ( !HIBYTE(word_140C51864) && (v73 & 1) != 0 )
                v73 |= 0x8000000000000000uLL;
              *(_QWORD *)v6 = v73;
              sub_1402294F0(v6, v73);
              return sub_14031FD60(v64, v6, 0LL, v107);
            }
            if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v73 & 1) != 0 )
              v73 |= 0x8000000000000000uLL;
          }
          *(_QWORD *)v6 = v73;
          return sub_14031FD60(v64, v6, 0LL, v107);
        }
      }
      else if ( !sub_140230BA0(v66, 0) )
      {
        goto LABEL_126;
      }
      if ( v97 < 0xFFFF800000000000uLL )
        goto LABEL_126;
      return 3221225477LL;
    }
    if ( (v35 & 0x400) != 0 )
    {
      if ( (*((_BYTE *)v64 + 69) & 8) == 0 )
        return sub_140339520(v64, v29, v91, v108);
    }
    else
    {
      if ( (v35 & 0x800) != 0 )
        return sub_140325B30(v64, v29, v91, v62, v108);
      v77 = v35;
      if ( sub_140317A80((unsigned __int64)&v103) )
        v77 = sub_14027D890((unsigned __int64)&v103, v35);
      if ( (v77 & 4) == 0 )
      {
        if ( v99 )
        {
          if ( !v96
            || (v79 = v92 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v92 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
            || (*(_DWORD *)(v79 + 80) & 0x4000) == 0 )
          {
            LOBYTE(CurrentPrcb) = 17;
            sub_140334790(v91, CurrentPrcb);
            return 0LL;
          }
          v78 = v92;
        }
        else
        {
          v78 = v92;
          v79 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
        }
        if ( v96 )
        {
          if ( *(_BYTE *)v79 != 1 && *(_BYTE *)v79 != 3 || *(_BYTE *)v79 == 6 )
            return sub_14031FD60(v64, v93, v91, v107);
        }
        else if ( !sub_140230BA0(v78, 0) )
        {
          return sub_14031FD60(v64, v93, v91, v107);
        }
        if ( v97 < 0xFFFF800000000000uLL )
          return sub_14031FD60(v64, v93, v91, v107);
        v88 = sub_1402806A0(v59);
        v89 = v35 >> 5;
        v90 = v59 >> 5;
        if ( v88 )
          LOBYTE(v89) = v90;
        if ( (v89 & 0x18) != 0x10 )
          return sub_14031FD60(v64, v93, v91, v107);
LABEL_172:
        LOBYTE(CurrentPrcb) = 17;
        sub_140334790(v91, CurrentPrcb);
        return 3221225477LL;
      }
      if ( (*((_BYTE *)v64 + 69) & 8) == 0 )
        return sub_1403927C4(v64, v93, v91, v108);
    }
LABEL_211:
    LOBYTE(CurrentPrcb) = 17;
    sub_140334790(v91, CurrentPrcb);
    return 3221226548LL;
  }
  if ( v99 )
  {
    v74 = *(unsigned __int8 *)(v33 + 35);
    v75 = *(_DWORD *)(v99 + 80) & 7;
    if ( (v74 & 8) != 0 )
      v76 = 5;
    else
      v76 = v74 & 7;
    if ( v75 > v76 )
    {
      LOBYTE(v74) = v75 | v74 & 0xF8;
      *(_BYTE *)(v33 + 35) = v74;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LODWORD(v106) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v106, v74, v12, (__int64)v36);
      while ( *(__int64 *)v27 < 0 );
    }
    *v102 &= ~0x20u;
    if ( (unsigned int)sub_1403377E0(v91) )
      sub_140338500(v91, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4));
    _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v37 = *(_QWORD *)(v33 + 40);
  if ( v37 >= 0 )
    goto LABEL_52;
  v38 = *(_QWORD *)(v33 + 16);
  if ( (v38 & 0x400) == 0 || (((unsigned __int64)v37 >> 60) & 7) == 3 )
    goto LABEL_52;
  v39 = *(_QWORD *)(v33 + 16);
  if ( qword_140C50780 && (v38 & 0x10) == 0 )
    v39 = ~qword_140C50780 & v38;
  v40 = v39 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v40 + 56LL) & 0x20) == 0
    || (v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 96LL) + 40LL)) == 0
    || (v41 & 0xFFFFFFFFFFFFFFF8uLL) == 8
    || (v41 & 3) == 2 )
  {
LABEL_52:
    v42 = 1LL;
LABEL_53:
    *(_QWORD *)(v33 + 24) ^= (*(_QWORD *)(v33 + 24) ^ (*(_QWORD *)(v33 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v43 = 0;
    LODWORD(v108) = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) )
    {
      do
      {
        do
          sub_1402F32E0(&v108, CurrentPrcb, v12, (__int64)v36);
        while ( *(__int64 *)v27 < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0x3FuLL) );
      v43 = 0;
    }
    v44 = v102;
    *v102 &= ~0x20u;
    v45 = *v98;
    if ( !*v98 )
      sub_1405AD67C(v91);
    v46 = v91;
    v47 = v45 == 1;
    v48 = v45 - 1;
    *v98 = v48;
    if ( v47 && (*(_QWORD *)(v91 + 40) & 0x20000000000000LL) != 0 )
    {
LABEL_264:
      sub_140338500(v46, 0xAAAAAAAAAAAAAAABuLL * (v11 >> 4));
LABEL_73:
      _InterlockedAnd64(v27, 0x7FFFFFFFFFFFFFFFuLL);
      __incgsdword(0x2E98u);
      result = sub_1403203D0((_DWORD)v106, v35, v107, 0, v92);
      if ( (int)result >= 0 )
        return 272LL;
      return result;
    }
    v49 = *(_QWORD *)(v91 + 40);
    if ( (v49 & 0x10000000000LL) != 0 || (v49 & 0x20000000000000LL) != 0 )
      goto LABEL_73;
    v50 = *v27;
    v51 = *v27 & 0x3FFFFFFFFFFFFFFFLL;
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        if ( !v51 && (*v44 & 8) == 0 )
          goto LABEL_73;
      }
      else if ( v48 != 2 || !v51 || (*v44 & 8) == 0 )
      {
        goto LABEL_73;
      }
    }
    else
    {
      v43 = 1;
      v104 = 1LL;
    }
    v52 = *v105 | 0x8000000000000000uLL;
    if ( v52 > 0xFFFFF6BFFFFFFF78uLL || v52 < 0xFFFFF68000000000uLL )
    {
      v53 = *(_BYTE *)(v11 - 0x21FFFFFFFFDDLL);
      if ( (v53 & 0x20) != 0 )
      {
        *(_BYTE *)(v11 - 0x21FFFFFFFFDDLL) = v53 & 0xDF;
LABEL_72:
        if ( !v43 )
          goto LABEL_73;
        goto LABEL_264;
      }
    }
    if ( v49 < 0 && (*(_DWORD *)(v11 - 0x21FFFFFFFFF0LL) & 0x400LL) != 0
      || v52 <= 0xFFFFF6BFFFFFFF78uLL
      && v52 >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(v11 - 0x21FFFFFFFFDDLL) & 0x20) != 0
      || v43 && (v50 & 0x4000000000000000LL) != 0 )
    {
      v54 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v49 >> 43) & 0x3FF));
      sub_14028CE10(v54, 1LL);
      v43 = v104;
    }
    else
    {
      v54 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v49 >> 43) & 0x3FF));
    }
    if ( (ULONG_PTR *)v54 != &StartContext )
      goto LABEL_216;
    v55 = KeGetCurrentPrcb();
    v56 = *((int *)v55 + 8615);
    if ( (_DWORD)v56 == -1 )
      goto LABEL_216;
    if ( (unsigned __int64)(v56 + 1) <= 0x100 )
    {
      do
      {
        v57 = _InterlockedCompareExchange((volatile signed __int32 *)v55 + 8615, v56 + 1, v56);
        v47 = (_DWORD)v56 == v57;
        LODWORD(v56) = v57;
        if ( v47 )
          goto LABEL_71;
      }
      while ( v57 != -1 && (unsigned __int64)(v57 + 1LL) <= 0x100 );
    }
    if ( (int)v56 > 192 && (_DWORD)v56 == _InterlockedCompareExchange((volatile signed __int32 *)v55 + 8615, 192, v56) )
      v42 = (int)v56 - 192 + 1LL;
    if ( v42 )
LABEL_216:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 16960), v42);
LABEL_71:
    v46 = v91;
    goto LABEL_72;
  }
  if ( v97 < 0xFFFF800000000000uLL )
  {
    v42 = 1LL;
    sub_1402ED128(1);
    v83 = sub_1403126F0(v97);
    sub_1402806E0(1, 0x11u);
    if ( !v83 )
      goto LABEL_260;
    CurrentPrcb = *((unsigned int *)v83 + 12);
    if ( ((_DWORD)v83[6] & 0x70) != 0x20 )
      goto LABEL_260;
    CurrentPrcb &= 0xF80u;
    if ( (_DWORD)CurrentPrcb != 128
      && ((v41 & 4) != 0 || ((_DWORD)v83[8] & 0x8000000) == 0)
      && ((dword_140D06880 & 0x400) == 0 || (*(_BYTE *)(v40 + 34) & 2) == 0) )
    {
      goto LABEL_260;
    }
    v11 = v95;
    v27 = (volatile signed __int64 *)v94;
    goto LABEL_53;
  }
  if ( (dword_140D06880 & 0x8000) == 0 || (v38 & 0x40) == 0 )
  {
    v27 = (volatile signed __int64 *)(v11 - 0x21FFFFFFFFE8LL);
    goto LABEL_52;
  }
LABEL_260:
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(CurrentPrcb) = 17;
  sub_140334790(v91, CurrentPrcb);
  return 3221226536LL;
}

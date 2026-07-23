/*
 * XREFs of sub_1402B5240 @ 0x1402B5240
 * Callers:
 *     sub_140217454 @ 0x140217454 (sub_140217454.c)
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     sub_140217B04 @ 0x140217B04 (sub_140217B04.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402947A0 @ 0x1402947A0 (sub_1402947A0.c)
 *     sub_1402A7FE0 @ 0x1402A7FE0 (sub_1402A7FE0.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B7800 @ 0x1402B7800 (sub_1402B7800.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_1402EC8A4 @ 0x1402EC8A4 (sub_1402EC8A4.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F6A70 @ 0x1402F6A70 (sub_1402F6A70.c)
 *     sub_1402F70E4 @ 0x1402F70E4 (sub_1402F70E4.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_140357790 @ 0x140357790 (sub_140357790.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14057AAF8 @ 0x14057AAF8 (sub_14057AAF8.c)
 */

__int64 __fastcall sub_1402B5240(__int64 a1, __int64 *a2, int a3, __int64 a4, _QWORD *a5)
{
  volatile signed __int32 *v5; // r13
  int v7; // r12d
  __int64 *v8; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  BOOL v11; // r15d
  struct _KPRCB *v12; // rbp
  __int64 v13; // rcx
  char v14; // cl
  int v15; // edx
  char v16; // bp
  _BYTE *v17; // r14
  struct _KPRCB *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  struct _KPRCB *v22; // rbp
  __int64 v23; // rcx
  struct _KPRCB **v24; // rdx
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int16 v30; // ax
  __int64 v31; // r8
  __int64 v32; // rcx
  char v33; // r15
  struct _KPRCB *v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // r12
  _BYTE *v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  char v42; // bp
  __int64 v43; // r8
  __int64 *v44; // rbp
  volatile signed __int32 *v45; // r15
  __int64 *v46; // rcx
  __int64 **v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _KPRCB *v53; // rbp
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  int v72; // [rsp+30h] [rbp-68h] BYREF
  int v73; // [rsp+34h] [rbp-64h] BYREF
  __int128 v74; // [rsp+38h] [rbp-60h]
  __int64 v75; // [rsp+48h] [rbp-50h]
  int v76; // [rsp+A0h] [rbp+8h]
  int v77; // [rsp+A8h] [rbp+10h] BYREF
  int v78; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v79; // [rsp+B8h] [rbp+20h]

  v79 = a4;
  v5 = (volatile signed __int32 *)(a1 + 256);
  v75 = 0LL;
  v78 = 0;
  v7 = 0;
  v76 = 0;
  v8 = a2;
  v74 = 0LL;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *v5 |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v12 = KeGetCurrentPrcb();
  v77 = 0;
  v13 = *((_QWORD *)v12 + 4375);
  if ( v13 )
  {
    if ( *((_BYTE *)v12 + 32) <= 1u )
    {
      v57 = *(_DWORD *)(v13 + 24);
      *(_DWORD *)(v13 + 24) = v57 + 1;
      if ( v57 == -1 )
LABEL_113:
        sub_140418E4C(v12);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v48 = *((_QWORD *)v12 + 4375);
    if ( v48 )
    {
      if ( *((_BYTE *)v12 + 32) <= 1u )
      {
        v58 = *(_DWORD *)(v48 + 24) - 1;
        *(_DWORD *)(v48 + 24) = v58;
        if ( !v58 )
          sub_140418E4C(v12);
      }
    }
    do
      sub_1402F32E0(&v77);
    while ( *(_QWORD *)(a1 + 64) );
    v49 = *((_QWORD *)v12 + 4375);
    if ( v49 )
    {
      if ( *((_BYTE *)v12 + 32) <= 1u )
      {
        v59 = *(_DWORD *)(v49 + 24);
        *(_DWORD *)(v49 + 24) = v59 + 1;
        if ( v59 == -1 )
          goto LABEL_113;
      }
    }
  }
  v14 = *(_BYTE *)(a1 + 112);
  if ( (v14 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v14 & 0xF8 | 1;
    if ( v11 )
    {
      v22 = KeGetCurrentPrcb();
      v72 = 0;
      v23 = *((_QWORD *)v22 + 4375);
      if ( v23 )
      {
        if ( *((_BYTE *)v22 + 32) <= 1u )
        {
          v60 = *(_DWORD *)(v23 + 24);
          *(_DWORD *)(v23 + 24) = v60 + 1;
          if ( v60 == -1 )
LABEL_122:
            sub_140418E4C(v22);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 8116, 0LL) )
      {
        v50 = *((_QWORD *)v22 + 4375);
        if ( v50 )
        {
          if ( *((_BYTE *)v22 + 32) <= 1u )
          {
            v61 = *(_DWORD *)(v50 + 24) - 1;
            *(_DWORD *)(v50 + 24) = v61;
            if ( !v61 )
              sub_140418E4C(v22);
          }
        }
        do
          sub_1402F32E0(&v72);
        while ( *((_QWORD *)CurrentPrcb + 4058) );
        v51 = *((_QWORD *)v22 + 4375);
        if ( v51 )
        {
          if ( *((_BYTE *)v22 + 32) <= 1u )
          {
            v62 = *(_DWORD *)(v51 + 24);
            *(_DWORD *)(v51 + 24) = v62 + 1;
            if ( v62 == -1 )
              goto LABEL_122;
          }
        }
      }
      v24 = (struct _KPRCB **)*((_QWORD *)CurrentPrcb + 4057);
      v25 = (struct _KPRCB *)(a1 + 216);
      if ( *v24 != (struct _KPRCB *)((char *)CurrentPrcb + 32448) )
        goto LABEL_78;
      *(_QWORD *)v25 = (char *)CurrentPrcb + 32448;
      *(_QWORD *)(a1 + 224) = v24;
      *v24 = v25;
      *((_QWORD *)CurrentPrcb + 4057) = v25;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 4058, 0LL);
      v26 = KeGetCurrentPrcb();
      v27 = *((_QWORD *)v26 + 4375);
      if ( v27 )
      {
        if ( *((_BYTE *)v26 + 32) <= 1u )
        {
          v63 = *(_DWORD *)(v27 + 24) - 1;
          *(_DWORD *)(v27 + 24) = v63;
          if ( !v63 )
            sub_140418E4C(v26);
        }
      }
    }
    v15 = *(_DWORD *)(a1 + 120);
    if ( (v15 & 0x1000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v15 = *(_DWORD *)(a1 + 120);
    }
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & ((v15 & 0x4000) != 0)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v7 = 1;
      v76 = 1;
    }
    v16 = 0;
    if ( a3 == 2 )
    {
      v28 = *(unsigned int *)(a1 + 952);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v16 = 1;
          if ( (_DWORD)v28 )
            v79 += v28;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v17 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v18 = KeGetCurrentPrcb();
      v19 = *((_QWORD *)v18 + 4375);
      if ( v19 )
      {
        if ( *((_BYTE *)v18 + 32) <= 1u )
        {
          v66 = *(_DWORD *)(v19 + 24) - 1;
          *(_DWORD *)(v19 + 24) = v66;
          if ( !v66 )
            sub_140418E4C(v18);
        }
      }
LABEL_16:
      if ( v7 )
        sub_1402D0CE0(*(_QWORD *)(a1 + 184));
      *(_BYTE *)(a1 + 565) = 0;
      if ( !a3 )
        return sub_1402B3140(a1, (__int64)CurrentPrcb, a5);
      if ( a3 == 2 )
      {
        v29 = v79 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 280) = v29;
        v29 >>= 18;
        v78 = (unsigned __int8)v29;
        LODWORD(v74) = *v5;
        BYTE1(v74) &= ~1u;
        BYTE2(v74) = v29;
        *v5 = v74;
        if ( v16 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2432LL));
      }
      else if ( !(unsigned int)sub_140357790(v5, v79, 0LL, &v78) )
      {
        goto LABEL_110;
      }
      v30 = 0;
      if ( !dword_140D06A20 )
      {
        v38 = *(_QWORD *)(a1 + 544);
        if ( (*(_DWORD *)(v38 + 1124) & 0x1000) == 0 || (*(_DWORD *)(v38 + 2172) & 0x4000000) != 0 )
          v30 = 1;
      }
      *(_WORD *)(a1 + 314) = v30;
      if ( (unsigned __int8)sub_1402B7800((_DWORD)CurrentPrcb, (_DWORD)v5, 0, v78, 0LL) )
      {
        if ( (DWORD2(xmmword_140D06900) & 0x20000) != 0 )
        {
          LOBYTE(v31) = 1;
          sub_14057AAF8(v5, 0LL, v31);
        }
        else
        {
          _InterlockedAnd(v5, 0xFFFFFF7F);
        }
        return sub_1402B3140(a1, (__int64)CurrentPrcb, a5);
      }
LABEL_110:
      sub_1402A7FE0((__int64)CurrentPrcb, (unsigned __int64)v5, 0LL);
      return sub_1402B3140(a1, (__int64)CurrentPrcb, a5);
    }
    _m_prefetchw(v17);
    if ( (*v17 & 0x7F) == 0x15 )
    {
      v39 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v32 = 4 * v39 + 536;
      *(_DWORD *)(a1 + 540) = v39 | 0x100;
    }
    else
    {
      v32 = 40LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&v17[v32]);
    if ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
      v33 = 0;
    else
      v33 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    v34 = KeGetCurrentPrcb();
    v35 = *((_QWORD *)v34 + 4375);
    if ( v35 )
    {
      if ( *((_BYTE *)v34 + 32) <= 1u )
      {
        v64 = *(_DWORD *)(v35 + 24) - 1;
        *(_DWORD *)(v35 + 24) = v64;
        if ( !v64 )
          sub_140418E4C(v34);
      }
    }
    if ( !v33 )
    {
      sub_1402EE104(a1, v17, 0LL);
      goto LABEL_16;
    }
    if ( (*v17 & 0x7F) == 0x15 )
    {
      sub_1402EC8A4(v17);
      goto LABEL_16;
    }
    if ( *((_DWORD *)v17 + 10) >= *((_DWORD *)v17 + 11)
      || (v36 = (_QWORD *)*((_QWORD *)v17 + 3), v37 = v17 + 24, v36 == (_QWORD *)(v17 + 24))
      || *((_BYTE **)v17 + 1) == v17 + 8 )
    {
LABEL_52:
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      v7 = v76;
      goto LABEL_16;
    }
    v40 = *v36;
    v41 = (_QWORD *)v36[1];
    if ( *(_QWORD **)(*v36 + 8LL) == v36 && (_QWORD *)*v41 == v36 )
    {
      *v41 = v40;
      *(_QWORD *)(v40 + 8) = v41;
      *v36 = 0LL;
      if ( (unsigned __int8)sub_1402F6A70(KeGetCurrentPrcb(), v17, v36) )
      {
        --*((_DWORD *)v17 + 1);
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        v7 = v76;
        goto LABEL_16;
      }
      v65 = *(_QWORD *)v37;
      if ( *(_BYTE **)(*(_QWORD *)v37 + 8LL) == v37 )
      {
        *v36 = v65;
        v36[1] = v37;
        *(_QWORD *)(v65 + 8) = v36;
        *(_QWORD *)v37 = v36;
        goto LABEL_52;
      }
    }
LABEL_78:
    __fastfail(3u);
  }
  if ( (v14 & 7) == 0 )
  {
    if ( (v14 & 0x20) == 0 )
    {
      v52 = 257LL;
      v42 = 1;
      if ( (v14 & 0x40) != 0 )
        v52 = 192LL;
      *(_QWORD *)(a1 + 200) = v52;
      *(_QWORD *)(a1 + 976) = 0LL;
      goto LABEL_68;
    }
    *(_QWORD *)(a1 + 200) = 256LL;
    *(_QWORD *)(a1 + 976) = 0LL;
  }
  v42 = 0;
LABEL_68:
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v56 = *(_QWORD *)(a1 + 232);
    if ( v56 )
      sub_1402F70E4(v56, a1);
  }
  sub_140224100(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v20 = *(_QWORD *)(a1 + 200);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 976);
  if ( v42 )
  {
    v53 = KeGetCurrentPrcb();
    v54 = *(char *)(a1 + 391);
    v73 = 0;
    v55 = *((_QWORD *)v53 + 4375);
    if ( v55 )
    {
      if ( *((_BYTE *)v53 + 32) <= 1u )
      {
        v67 = *(_DWORD *)(v55 + 24);
        *(_DWORD *)(v55 + 24) = v67 + 1;
        if ( v67 == -1 )
LABEL_143:
          sub_140418E4C(v53);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v68 = *((_QWORD *)v53 + 4375);
      if ( v68 )
      {
        if ( *((_BYTE *)v53 + 32) <= 1u )
        {
          v69 = *(_DWORD *)(v68 + 24) - 1;
          *(_DWORD *)(v68 + 24) = v69;
          if ( !v69 )
            sub_140418E4C(v53);
        }
      }
      do
        sub_1402F32E0(&v73);
      while ( *(_QWORD *)(a1 + 64) );
      v70 = *((_QWORD *)v53 + 4375);
      if ( v70 )
      {
        if ( *((_BYTE *)v53 + 32) <= 1u )
        {
          v71 = *(_DWORD *)(v70 + 24);
          *(_DWORD *)(v70 + 24) = v71 + 1;
          if ( v71 == -1 )
            goto LABEL_143;
        }
      }
    }
    if ( v20 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v54 + a1 + 114) )
        {
          *(_BYTE *)(v54 + a1 + 114) = 0;
        }
        else if ( (_BYTE)v54 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
    }
    sub_140224100(a1);
  }
  v44 = &v8[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v8 + 17) < 5u )
    {
      v45 = (volatile signed __int32 *)v8[4];
      sub_1402F3290(v45);
      if ( *((_BYTE *)v8 + 17) == 4 )
      {
        v46 = (__int64 *)*v8;
        v47 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v47 != v8 )
          goto LABEL_78;
        *v47 = v46;
        v46[1] = (__int64)v47;
      }
      _InterlockedAnd(v45, 0xFFFFFF7F);
    }
    v8 += 6;
  }
  while ( v8 != v44 );
  if ( *((_QWORD *)CurrentPrcb + 1441) )
    sub_140340390(CurrentPrcb, 1LL, 0LL, 0LL);
  LOBYTE(v43) = 1;
  sub_1402947A0((__int64)CurrentPrcb, a1, v43);
  return v20;
}

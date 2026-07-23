/*
 * XREFs of sub_140333AC0 @ 0x140333AC0
 * Callers:
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CD7F0 @ 0x1402CD7F0 (sub_1402CD7F0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 *     sub_1403234A0 @ 0x1403234A0 (sub_1403234A0.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     sub_140366094 @ 0x140366094 (sub_140366094.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140366BE8 @ 0x140366BE8 (sub_140366BE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

void __fastcall sub_140333AC0(unsigned __int64 a1, unsigned __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  char v10; // al
  volatile __int32 *v11; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v14; // rcx
  signed __int32 v15; // ett
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // r12
  unsigned __int64 v20; // rcx
  char v21; // di
  __int64 v22; // r10
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r14
  unsigned __int64 v26; // rbx
  _QWORD *v27; // r15
  unsigned int v28; // eax
  bool v29; // sf
  char v30; // al
  char v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rsi
  unsigned __int64 *v35; // r14
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r12
  __int64 v39; // r15
  signed __int64 v40; // rdx
  signed __int64 v41; // rax
  signed __int64 v42; // r13
  unsigned int v43; // edx
  unsigned __int64 v44; // r13
  int v45; // edi
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  struct _EX_RUNDOWN_REF *v48; // rax
  struct _EX_RUNDOWN_REF *v49; // r12
  int v50; // r8d
  __int64 v51; // rdi
  unsigned __int64 v52; // r15
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdi
  KIRQL v60; // r10
  signed __int64 v61; // rax
  signed __int64 v62; // rtt
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  __int64 v68; // r9
  int v69; // eax
  bool v70; // zf
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r11
  __int64 v73; // r9
  int v74; // eax
  KIRQL v75; // [rsp+40h] [rbp-C0h]
  unsigned int v76; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v77; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+58h] [rbp-A8h]
  __int64 v79; // [rsp+60h] [rbp-A0h]
  __int64 v80; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-90h]
  __int64 v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h]
  _QWORD v85[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v86[16]; // [rsp+110h] [rbp+10h]

  v4 = a3;
  v76 = a3;
  v84 = a4;
  v78 = 0LL;
  v77 = 0LL;
  memset(v85, 0, sizeof(v85));
  v86[0] = 0LL;
  CurrentThread = 0LL;
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = byte_140C592B8 & 7;
  if ( (byte_140C592B8 & 7u) <= 4 )
  {
    if ( v10 == 2 )
    {
      v11 = (volatile __int32 *)&unk_140C53D00;
      goto LABEL_4;
    }
LABEL_105:
    v11 = (volatile __int32 *)&unk_140C592C0;
LABEL_4:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v7 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_140461B20(v11, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v64 = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v64 + 1;
          if ( v64 == -1 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      _m_prefetchw((const void *)v11);
      v15 = *v11 & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(v11, v15 + 1, v15) )
      {
        v63 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v63 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v65 = *(_DWORD *)(v63 + 24) - 1;
            *(_DWORD *)(v63 + 24) = v65;
            if ( !v65 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        sub_140366A20(v11, CurrentIrql);
      }
      v4 = v76;
    }
    if ( *((_DWORD *)v11 + 1) )
      _InterlockedExchange(v11 + 1, 0);
    LOBYTE(v16) = CurrentIrql;
    v82 = CurrentIrql;
    goto LABEL_12;
  }
  if ( v10 == 5 )
    goto LABEL_105;
  v16 = KeGetCurrentIrql();
  v82 = v16;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)v16 <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (v16 + 1)) & 4;
  }
LABEL_12:
  sub_14031DE00((__int64)&unk_140C59200, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, v7);
  v17 = *(_QWORD *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL
                  + 16);
  if ( v17 )
    v17 += 40 * ((v8 >> 18) & 7);
  v18 = *(_QWORD *)(v17 + 24);
  v19 = WORD5(v77);
  BYTE12(v77) = v16;
  v20 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
  v78 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (v18 & 1) == 0 )
    v20 = v18;
  v21 = BYTE13(v77) | 4;
  BYTE13(v77) |= 4u;
  v22 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF)) + 17024LL;
  v80 = v22;
  v23 = v22;
  *(_QWORD *)&v77 = v22;
  if ( v4 )
  {
    v24 = v4;
    v25 = 0LL;
    v79 = v4;
    while ( 1 )
    {
      v26 = *a2;
      v85[v25] = 0LL;
      if ( v26 )
        break;
LABEL_35:
      v22 = v80;
      ++v25;
      ++a2;
      a1 += 8LL;
      v79 = --v24;
      if ( !v24 )
      {
        v9 = v78;
        v23 = v77;
        v4 = v76;
        goto LABEL_37;
      }
    }
    if ( (v26 & 1) == 0 )
    {
      v85[v25] = 1LL;
      *a2 = v26 | 1;
      goto LABEL_35;
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
LABEL_73:
      v85[v25] = 1LL;
      goto LABEL_35;
    }
    v27 = (_QWORD *)(48 * ((v26 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v83 = v27[2];
    v86[v25] = v83;
    if ( (v21 & 4) == 0 || (v21 & 1) != 0 || (v21 & 2) != 0 )
    {
      v30 = 0;
      goto LABEL_30;
    }
    if ( !v19 )
    {
      v28 = a1;
      goto LABEL_26;
    }
    if ( v19 + WORD4(v77) == (((unsigned int)a1 >> 3) & 0x1FF) )
    {
      if ( (__int64)v27[5] >= 0 )
      {
        if ( (v21 & 0x10) != 0 )
        {
LABEL_54:
          v28 = a1;
          if ( v19 )
          {
            WORD5(v77) = ++v19;
LABEL_29:
            v30 = 4;
LABEL_30:
            if ( (unsigned int)sub_140322F10(v22, a1, v27, 0, v26, v30, 0LL) )
            {
              if ( (v83 & 0x400) != 0 && dword_140C4EEF0 )
                v85[v25] = v27[1] | 0x8000000000000000uLL;
              v24 = v79;
              goto LABEL_35;
            }
            v24 = v79;
            goto LABEL_73;
          }
LABEL_26:
          v19 = 1;
          WORD5(v77) = 1;
          v29 = (__int64)v27[5] < 0;
          WORD4(v77) = (v28 >> 3) & 0x1FF;
          if ( v29 )
            v21 &= ~0x10u;
          else
            v21 |= 0x10u;
          BYTE13(v77) = v21;
          goto LABEL_29;
        }
      }
      else if ( (v21 & 0x10) == 0 )
      {
        goto LABEL_54;
      }
    }
    sub_14022FC80((__int64 *)&v77);
    v22 = v80;
    v19 = WORD5(v77);
    v21 = BYTE13(v77);
    goto LABEL_54;
  }
LABEL_37:
  if ( v9 )
  {
    if ( v19 )
    {
      v31 = 0;
      v32 = ((unsigned __int64)WORD4(v77) << 12)
          + ((((__int64)((v9 << 25) - (_QWORD)CurrentThread) >> 16 << 25) - (__int64)CurrentThread) >> 16);
      if ( (v21 & 0x10) != 0 )
        v31 = 2;
      if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( (*(_BYTE *)(v23 + 184) & 7) == 0 )
          v31 |= 4u;
      }
      else
      {
        v31 |= 5u;
      }
      sub_1403234A0(v23, v32, v19, v31);
      WORD5(v77) = 0;
    }
    sub_14020D8D0(v23, v9);
    v22 = v80;
    v33 = 0LL;
    BYTE13(v77) = v21 | 2;
    v78 = 0LL;
  }
  else
  {
    v33 = 0LL;
  }
  sub_1402B0CE0(v22, v82);
  v34 = v4;
  v35 = &a2[-v4];
  if ( v4 )
  {
    do
    {
      v36 = v85[v33];
      if ( v36 == 1 )
      {
        v51 = 48 * ((*v35 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v52 = (unsigned __int8)sub_1402F2700(v51);
        sub_140273FD0(v51, v53, v54, v55);
        _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v59 = v84;
        v76 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v76, v56, v57, v58);
          while ( *(__int64 *)(v59 + 24) < 0 );
        }
        sub_140273FD0(v59, v56, v57, v58);
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = *((_QWORD *)v67 + 4375);
              v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
              v70 = (v69 & *(_DWORD *)(v68 + 20)) == 0;
              *(_DWORD *)(v68 + 20) &= v69;
              if ( v70 )
                sub_140418E4C(v67);
            }
          }
        }
        __writecr8(v52);
      }
      else if ( v36 )
      {
        v37 = v86[v33];
        if ( qword_140C50780 && (v37 & 0x10) == 0 )
          v37 &= ~qword_140C50780;
        v38 = v37 >> 16;
        v39 = *(_QWORD *)v38;
        _m_prefetchw((const void *)(*(_QWORD *)v38 + 64LL));
        v40 = *(_QWORD *)(v39 + 64);
        if ( (v40 & 0xF) != 0 )
        {
          do
          {
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 64), v40 - 1, v40);
            if ( v40 == v41 )
              break;
            v40 = v41;
          }
          while ( (v41 & 0xF) != 0 );
        }
        v42 = v40;
        v43 = v40 & 0xF;
        v44 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v43 > 1 )
          goto LABEL_62;
        if ( v43 )
        {
          sub_1402F3424((volatile signed __int64 *)(v44 - 48), 15);
          _m_prefetchw((const void *)(v39 + 64));
          v61 = *(_QWORD *)(v39 + 64);
          while ( (v61 & 0xF) == 0 )
          {
            if ( v44 != (v61 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v62 = v61;
            v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 64), v61 + 15, v61);
            if ( v62 == v61 )
              goto LABEL_62;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 - 48), 0xFFFFFFFFFFFFFFF1uLL);
LABEL_62:
          if ( dword_140D05010 )
            sub_1405C5EC8(v44 - 48);
          if ( v44 )
          {
LABEL_65:
            v45 = sub_1403342D0(v38, v36, 0xFFFFFFFFLL);
            if ( !*(_QWORD *)(v44 + 32) )
            {
              CurrentThread = KeGetCurrentThread();
              v48 = sub_1402CD7F0(*((_QWORD *)CurrentThread + 23));
              v49 = v48;
              if ( v48 )
              {
                if ( (unsigned int)sub_140366BE8(CurrentThread, v48, 4LL) )
                  sub_140366094((_DWORD)v49, v44, *(_QWORD *)(v44 + 24), v45, v50);
                sub_1402AD030(v49 + 45);
              }
            }
            _m_prefetchw((const void *)(v39 + 64));
            v46 = *(_QWORD *)(v39 + 64);
            if ( (v44 ^ v46) >= 0xF )
            {
LABEL_95:
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v44, 0x63536D4Du);
            }
            else
            {
              while ( 1 )
              {
                v47 = v46;
                v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 64), v46 + 1, v46);
                if ( v47 == v46 )
                  break;
                if ( (v44 ^ v46) >= 0xF )
                  goto LABEL_95;
              }
              sub_140347B50(v44 - 48, 1LL);
            }
            goto LABEL_49;
          }
        }
        v75 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v39 + 72));
        v44 = *(_QWORD *)(v39 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v44 )
          ObfReferenceObjectWithTag((PVOID)v44, 0x63536D4Du);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v39 + 72));
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v71 = KeGetCurrentIrql(), v71 <= 0xFu) )
        {
          v60 = v75;
          if ( v75 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = *((_QWORD *)v72 + 4375);
            v74 = ~(unsigned __int16)(-1LL << (v75 + 1));
            v70 = (v74 & *(_DWORD *)(v73 + 20)) == 0;
            *(_DWORD *)(v73 + 20) &= v74;
            if ( v70 )
            {
              sub_140418E4C(v72);
              goto LABEL_81;
            }
          }
        }
        else
        {
LABEL_81:
          v60 = v75;
        }
        __writecr8(v60);
        goto LABEL_65;
      }
LABEL_49:
      ++v33;
      ++v35;
      --v34;
    }
    while ( v34 );
  }
}

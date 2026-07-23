/*
 * XREFs of sub_140325830 @ 0x140325830
 * Callers:
 *     sub_14022FDA0 @ 0x14022FDA0 (sub_14022FDA0.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 * Callees:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402C8740 @ 0x1402C8740 (sub_1402C8740.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140325830(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  ULONG_PTR v5; // rdi
  unsigned int v6; // esi
  int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r15
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v17; // r12
  signed __int8 v18; // al
  volatile LONG *v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r11
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  __int64 v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v38; // r8
  int v39; // eax
  unsigned __int8 v40; // al
  __int64 v41; // r8
  int v42; // eax
  int v43; // [rsp+24h] [rbp-F4h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+28h] [rbp-F0h]
  __int128 v45; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-D8h]
  __int128 v47; // [rsp+50h] [rbp-C8h]
  __int128 v48; // [rsp+60h] [rbp-B8h]
  __int128 v49; // [rsp+70h] [rbp-A8h]
  __int128 v50; // [rsp+80h] [rbp-98h]
  __int128 v51; // [rsp+90h] [rbp-88h]
  __int128 v52; // [rsp+A0h] [rbp-78h]
  __int64 v53; // [rsp+B0h] [rbp-68h]
  int v54; // [rsp+B8h] [rbp-60h]

  v5 = *(_QWORD *)(a2 + 16);
  v6 = a4;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v53 = 0LL;
  v54 = 0;
  v52 = 0LL;
  if ( v5 == 0x3FFFFFFFFFLL )
    return 0LL;
  v11 = a5;
  v12 = 2LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v14 = a5 & 1;
  while ( 1 )
  {
    v15 = 48 * v5 - 0x220000000000LL;
    if ( v14 )
    {
      v17 = (volatile signed __int32 *)(v15 + 24);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        return 0LL;
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v14 = a5 & 1;
        v13 = 0x7FFFFFFFFFFFFFFFLL;
        *(_DWORD *)(a4 + 20) |= (-1LL << (CurrentIrql + 1)) & 4;
        v12 = 2LL;
      }
      v17 = (volatile signed __int32 *)(v15 + 24);
      v18 = _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL);
      if ( (v11 & 0x44000) != 0 )
      {
        v43 = 0;
        if ( v18 )
        {
          do
          {
            do
              sub_1402F32E0(&v43, v13, v12, a4);
            while ( *(__int64 *)v17 < 0 );
          }
          while ( _interlockedbittestandset64(v17, 0x3FuLL) );
          v14 = a5 & 1;
          v11 = a5;
          v13 = 0x7FFFFFFFFFFFFFFFLL;
          v12 = 2LL;
        }
      }
      else if ( v18 )
      {
        if ( !dword_140D06B08 )
          goto LABEL_31;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_31;
        v40 = KeGetCurrentIrql();
        if ( v40 > 0xFu )
          goto LABEL_31;
        if ( CurrentIrql > 0xFu )
          goto LABEL_31;
        if ( v40 < 2u )
          goto LABEL_31;
        CurrentPrcb = KeGetCurrentPrcb();
        v41 = *((_QWORD *)CurrentPrcb + 4375);
        v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
        *(_DWORD *)(v41 + 20) &= v42;
        if ( !v23 )
          goto LABEL_31;
        goto LABEL_89;
      }
    }
    if ( (*(_BYTE *)(v15 + 34) & 7) != v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
            {
              v21 = KeGetCurrentPrcb();
              a4 = *((_QWORD *)v21 + 4375);
              v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v22 & *(_DWORD *)(a4 + 20)) == 0;
              *(_DWORD *)(a4 + 20) &= v22;
              if ( v23 )
              {
                sub_140418E4C(v21);
                v11 = a5;
              }
              v14 = a5 & 1;
              v12 = 2LL;
              v13 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      goto LABEL_27;
    }
    SpinLock = (PEX_SPIN_LOCK)(a2 + 32);
    v19 = (volatile LONG *)(a2 + 32);
    if ( (v11 & 0x44000) == 0 )
    {
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v19) )
        goto LABEL_11;
      _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql == 17 )
        return 0LL;
      if ( !dword_140D06B08
        || (dword_140D06B08 & 1) == 0
        || (v36 = KeGetCurrentIrql(), v36 > 0xFu)
        || CurrentIrql > 0xFu
        || v36 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v38 = *((_QWORD *)CurrentPrcb + 4375),
            v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
            v23 = (v39 & *(_DWORD *)(v38 + 20)) == 0,
            *(_DWORD *)(v38 + 20) &= v39,
            !v23) )
      {
LABEL_31:
        __writecr8(CurrentIrql);
        return 0LL;
      }
LABEL_89:
      sub_140418E4C(CurrentPrcb);
      goto LABEL_31;
    }
    ExAcquireSpinLockExclusive(v19);
LABEL_11:
    if ( v5 == *(_QWORD *)(a2 + 16) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            a4 = *((_QWORD *)v25 + 4375);
            v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v26 & *(_DWORD *)(a4 + 20)) == 0;
            *(_DWORD *)(a4 + 20) &= v26;
            if ( v23 )
              sub_140418E4C(v25);
            v13 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v11 = a5;
    v12 = 2LL;
    v14 = a5 & 1;
LABEL_27:
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  if ( (unsigned int)sub_1402C8740(v5, a2, a5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (a5 & 1) == 0 && *(_QWORD *)(a2 + 16) != 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)&v45 = 1LL;
      DWORD2(v45) = 16;
      if ( (dword_140D0689C & 0x200000) != 0 )
      {
        LOBYTE(v31) = sub_140268620(48 * v5 - 0x220000000000LL);
        if ( v31 )
        {
          *(_QWORD *)&v46 = v5 << 12;
          DWORD1(v45) = 1;
        }
      }
      sub_140264720(a1, v6, a3, (__int64)&v45);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 32));
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v32 = KeGetCurrentIrql();
          if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = *((_QWORD *)v33 + 4375);
            v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
            *(_DWORD *)(v34 + 20) &= v35;
            if ( v23 )
              sub_140418E4C(v33);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 48 * v5 - 0x220000000000LL;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    sub_14026845C(48 * v5 - 0x220000000000LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v17, 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v27 = KeGetCurrentIrql();
          if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
          {
            v28 = KeGetCurrentPrcb();
            v29 = *((_QWORD *)v28 + 4375);
            v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v30;
            if ( v23 )
              sub_140418E4C(v28);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 1LL;
  }
}

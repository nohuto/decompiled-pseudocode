/*
 * XREFs of sub_140214C50 @ 0x140214C50
 * Callers:
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_140214A58 @ 0x140214A58 (sub_140214A58.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 * Callees:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140214C50(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // r12
  int v9; // esi
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v14; // rcx
  int v15; // ett
  __int64 v16; // rdx
  volatile signed __int32 *v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  volatile signed __int64 v20; // rtt
  int v21; // r8d
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // rax
  bool v27; // cf
  __int64 v28; // rdx
  int v29; // ebx
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rbx
  void *v35; // rcx
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  __int64 v41; // r9
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // cl
  struct _KPRCB *v45; // r10
  __int64 v46; // r9
  int v47; // eax
  void *v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  __int64 v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  __int64 v55; // r8
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  __int64 v59; // r8
  int v60; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  int v63; // [rsp+68h] [rbp+10h]
  __int64 v64; // [rsp+70h] [rbp+18h]

  v64 = a3;
  v63 = a2;
  v6 = 0;
  v8 = 40543LL * (unsigned int)(a1 >> 12);
  v9 = a4 & 0x20;
  P = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v8 ^ HIDWORD(v8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v36 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v36 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_140461B20(&dword_140C11780, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v14 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v37 = *(_DWORD *)(v14 + 24);
            *(_DWORD *)(v14 + 24) = v37 + 1;
            if ( v37 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        _m_prefetchw(&dword_140C11780);
        v15 = dword_140C11780 & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(
                      &dword_140C11780,
                      (dword_140C11780 & 0x7FFFFFFF) + 1,
                      dword_140C11780 & 0x7FFFFFFF) )
        {
          v32 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v32 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v38 = *(_DWORD *)(v32 + 24) - 1;
              *(_DWORD *)(v32 + 24) = v38;
              if ( !v38 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140366A20(&dword_140C11780, CurrentIrql);
        }
      }
      if ( v9 )
      {
        v31 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
        v16 = *(_QWORD *)(v31 + 824);
        v17 = (volatile signed __int32 *)(v31 + 792);
        v18 = *(_QWORD *)(v31 + 832);
      }
      else
      {
        v16 = qword_140C157B8;
        v17 = &dword_140D31100;
        v18 = qword_140C157C0;
      }
      if ( v16 && *v17 != v18 )
      {
        v19 = v16 + 32LL * ((unsigned int)v11 & ((_DWORD)v18 - 1));
        while ( 1 )
        {
          if ( (*(_QWORD *)v19 & 1) != 0 )
          {
            v20 = *(_QWORD *)v19;
            if ( v20 == _InterlockedCompareExchange64((volatile signed __int64 *)v19, a1, *(_QWORD *)v19) )
              break;
          }
          v26 = v19 + 32;
          ++v6;
          v27 = v19 + 32 < v16 + 32 * v18;
          v19 = v16;
          if ( v27 )
            v19 = v26;
          if ( v19 == v16 + 32LL * ((unsigned int)v11 & ((_DWORD)v18 - 1)) )
            goto LABEL_25;
        }
        v21 = a5;
        *(_DWORD *)(v19 + 8) = v63;
        *(_BYTE *)(v19 + 12) = a6;
        v22 = v64;
        *(_DWORD *)(v19 + 12) = (unsigned __int8)*(_DWORD *)(v19 + 12) | ((a4 & 0xFFF | (v21 << 12)) << 8);
        *(_QWORD *)(v19 + 16) = v22;
        if ( (a4 & 8) != 0 )
          *(_QWORD *)(v19 + 24) = a1 ^ qword_140D06E00;
        _InterlockedIncrement(v17);
        if ( v6 < 0x10 || *v17 <= (unsigned int)(v18 >> 2) )
        {
          if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          {
            sub_14063D8E0(&dword_140C11780, retaddr);
          }
          else
          {
            _InterlockedAnd(&dword_140C11780, 0xBFFFFFFF);
            _InterlockedDecrement(&dword_140C11780);
          }
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          if ( v24 )
          {
            if ( *((_BYTE *)v23 + 32) <= 1u )
            {
              v57 = *(_DWORD *)(v24 + 24) - 1;
              *(_DWORD *)(v24 + 24) = v57;
              if ( !v57 )
                sub_140418E4C(v23);
            }
          }
          if ( !dword_140D06B08 )
            goto LABEL_20;
          if ( (dword_140D06B08 & 1) == 0 )
            goto LABEL_20;
          v58 = KeGetCurrentIrql();
          if ( v58 > 0xFu )
            goto LABEL_20;
          if ( CurrentIrql > 0xFu )
            goto LABEL_20;
          if ( v58 < 2u )
            goto LABEL_20;
          v54 = KeGetCurrentPrcb();
          v59 = *((_QWORD *)v54 + 4375);
          v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v43 = (v60 & *(_DWORD *)(v59 + 20)) == 0;
          *(_DWORD *)(v59 + 20) &= v60;
          if ( !v43 )
            goto LABEL_20;
        }
        else
        {
          if ( ExTryConvertSharedSpinLockExclusive(&dword_140C11780) == 1 )
          {
            sub_1402129C0(a4, v33, &P);
            ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C11780);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = *((_QWORD *)v50 + 4375);
                  v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v43 = (v52 & *(_DWORD *)(v51 + 20)) == 0;
                  *(_DWORD *)(v51 + 20) &= v52;
                  if ( v43 )
                    sub_140418E4C(v50);
                }
              }
            }
            __writecr8(CurrentIrql);
            v34 = P;
            if ( P )
            {
              do
              {
                v35 = v34;
                v34 = (_QWORD *)*v34;
                ExFreePoolWithTag(v35, 0);
              }
              while ( v34 );
            }
            return 1LL;
          }
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140C11780);
          if ( !dword_140D06B08
            || (dword_140D06B08 & 1) == 0
            || (v53 = KeGetCurrentIrql(), v53 > 0xFu)
            || CurrentIrql > 0xFu
            || v53 < 2u
            || (v54 = KeGetCurrentPrcb(),
                v55 = *((_QWORD *)v54 + 4375),
                v56 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1)),
                v43 = (v56 & *(_DWORD *)(v55 + 20)) == 0,
                *(_DWORD *)(v55 + 20) &= v56,
                !v43) )
          {
LABEL_20:
            __writecr8(CurrentIrql);
            return 1LL;
          }
        }
        sub_140418E4C(v54);
        goto LABEL_20;
      }
LABEL_25:
      if ( ExTryConvertSharedSpinLockExclusive(&dword_140C11780) )
        break;
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C11780);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = *((_QWORD *)v40 + 4375);
            v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v43 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
            *(_DWORD *)(v41 + 20) &= v42;
            if ( v43 )
              sub_140418E4C(v40);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v29 = sub_1402129C0(a4, v28, &P);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C11780);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = *((_QWORD *)v45 + 4375);
          v47 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v43 = (v47 & *(_DWORD *)(v46 + 20)) == 0;
          *(_DWORD *)(v46 + 20) &= v47;
          if ( v43 )
            sub_140418E4C(v45);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v29 )
      break;
    v30 = P;
    if ( P )
    {
      do
      {
        v48 = v30;
        v30 = (_QWORD *)*v30;
        ExFreePoolWithTag(v48, 0);
      }
      while ( v30 );
      P = 0LL;
    }
  }
  ++dword_140C11784;
  return 0LL;
}

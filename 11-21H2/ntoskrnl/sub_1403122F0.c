/*
 * XREFs of sub_1403122F0 @ 0x1403122F0
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_140232260 @ 0x140232260 (sub_140232260.c)
 *     sub_1402323E8 @ 0x1402323E8 (sub_1402323E8.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_1402E4DD4 @ 0x1402E4DD4 (sub_1402E4DD4.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

unsigned __int64 __fastcall sub_1403122F0(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 v3; // cl
  int v4; // edi
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  volatile LONG *v8; // rsi
  unsigned __int8 v9; // bp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  volatile signed __int64 *v16; // rdi
  struct _KPRCB *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  __int64 v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // al
  __int64 v41; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  __int64 v45; // r8
  int v46; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v49; // [rsp+68h] [rbp+10h]

  result = sub_1402F5718();
  if ( result - *(_QWORD *)(a1 + 15592) < 0x989680 )
    return result;
  *(_QWORD *)(a1 + 15592) = result;
  v4 = ((*(_BYTE *)(a1 + 15584) & 3) + 1) & 3;
  v5 = a1 + 8LL * (*(_DWORD *)(a1 + 15584) & 3);
  v49 = v4;
  if ( *(_QWORD *)(v5 + 15552) >> 33 == 0x7FFFFFFFLL )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && ((unsigned __int8)dword_140D06B08 & v3) != 0 && CurrentIrql <= 0xFu )
    {
      v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
    if ( *(_QWORD *)(v5 + 15552) >> 33 == 0x7FFFFFFFLL )
    {
      *(_DWORD *)(a1 + 15584) = v4;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = *((_QWORD *)CurrentPrcb + 4375);
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v29 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      goto LABEL_7;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = *((_QWORD *)v31 + 4375);
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
          *(_DWORD *)(v32 + 20) &= v33;
          if ( v29 )
            sub_140418E4C(v31);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  v8 = (volatile LONG *)(a1 + 3352);
  while ( 1 )
  {
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v9 <= 0xFu )
    {
      v24 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v24 + 20) |= (-1 << (v9 + 1)) & 4;
    }
    ExAcquireSpinLockSharedAtDpcLevel(v8);
    LOBYTE(v12) = -1;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(&dword_140C52D00, v12);
    else
      sub_14030F870(&dword_140C52D00, 0xFFu, v10, v11);
    v13 = *(_QWORD *)(v5 + 15552) >> 33;
    if ( v13 == 0x7FFFFFFF )
      break;
    v14 = v13 + qword_140C52CE0;
    v15 = 48 * (v13 + qword_140C52CE0) - 0x220000000000LL;
    v16 = (volatile signed __int64 *)(v15 + 24);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14063D8B0(&dword_140C52D00, retaddr);
      else
        dword_140C52D00 = 0;
      v17 = KeGetCurrentPrcb();
      v18 = *((_QWORD *)v17 + 4375);
      if ( v18 )
      {
        if ( *((_BYTE *)v17 + 32) <= 1u )
        {
          v38 = *(_DWORD *)(v18 + 24) - 1;
          *(_DWORD *)(v18 + 24) = v38;
          if ( !v38 )
            sub_140418E4C(v17);
        }
      }
      v19 = *(_QWORD *)(v15 + 16);
      if ( qword_140C50780 && (v19 & 0x10) == 0 )
        v19 &= ~qword_140C50780;
      v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
      if ( v20 != v14 )
      {
        v15 = 48 * v20 - 0x220000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          ExReleaseSpinLockSharedFromDpcLevel(v8);
          _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64(v16, 0x7FFFFFFFFFFFFFFFuLL);
          v21 = *(_BYTE *)(v15 + 35) & 7;
          if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
          {
            sub_14063D8E0(v8, retaddr);
          }
          else
          {
            _InterlockedAnd(v8, 0xBFFFFFFF);
            _InterlockedDecrement(v8);
          }
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          if ( v23 )
          {
            if ( *((_BYTE *)v22 + 32) <= 1u )
            {
              v39 = *(_DWORD *)(v23 + 24) - 1;
              *(_DWORD *)(v23 + 24) = v39;
              if ( !v39 )
                sub_140418E4C(v22);
            }
          }
          sub_1402323E8(v15, v21);
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && v9 <= 0xFu && v40 >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v41 = *((_QWORD *)v35 + 4375);
              v42 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v29 = (v42 & *(_DWORD *)(v41 + 20)) == 0;
              *(_DWORD *)(v41 + 20) &= v42;
              if ( v29 )
                goto LABEL_79;
            }
          }
        }
        goto LABEL_32;
      }
      if ( (*(_BYTE *)(v15 + 35) & 8) != 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C52D00);
        sub_1402E4DD4(v15);
        sub_140232260(v15, v49);
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
      }
      else
      {
        sub_1402E4BF0(v14);
      }
      ExReleaseSpinLockSharedFromDpcLevel(v8);
      goto LABEL_30;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
    ExReleaseSpinLockSharedFromDpcLevel(v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && v9 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = *((_QWORD *)v35 + 4375);
          v37 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v29 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
          *(_DWORD *)(v36 + 20) &= v37;
          if ( v29 )
LABEL_79:
            sub_140418E4C(v35);
        }
      }
    }
LABEL_32:
    __writecr8(v9);
  }
  *(_DWORD *)(a1 + 15584) = v49;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C52D00);
  ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v43 = KeGetCurrentIrql();
      if ( v43 <= 0xFu && v9 <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = *((_QWORD *)v44 + 4375);
        v46 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v29 = (v46 & *(_DWORD *)(v45 + 20)) == 0;
        *(_DWORD *)(v45 + 20) &= v46;
        if ( v29 )
          sub_140418E4C(v44);
      }
    }
  }
  result = v9;
LABEL_7:
  __writecr8(result);
  return result;
}

/*
 * XREFs of sub_14029E440 @ 0x14029E440
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     sub_14024DD20 @ 0x14024DD20 (sub_14024DD20.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14029E440(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdi
  char v12; // al
  unsigned __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  bool v24; // cf
  struct _KPRCB *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  __int64 v29; // rdx
  struct _KPRCB *v30; // rcx
  __int64 v31; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // [rsp+60h] [rbp+40h] BYREF
  __int64 v37; // [rsp+70h] [rbp+50h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp+58h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    v5 = *(__int64 **)(a1 + 40);
    v6 = v4;
    if ( !v5 || (v7 = *v5) == 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu )
          {
            v24 = CurrentIrql < 2u;
LABEL_63:
            if ( !v24 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v35 = *((_QWORD *)CurrentPrcb + 4375);
              v22 = (v34 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v34;
              if ( v22 )
                sub_140418E4C(CurrentPrcb);
            }
            goto LABEL_5;
          }
        }
      }
      goto LABEL_5;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C(v19);
        }
      }
    }
    __writecr8(v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( (*(_DWORD *)(v7 + 56) & 3) != 0
    || (v10 = *(_QWORD *)(v7 + 136)) == 0
    || (int)sub_14026FA0C(*(_QWORD *)(v7 + 136), v9, &v37, (__int64)&v36) < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu )
        {
          v24 = v23 < 2u;
          goto LABEL_63;
        }
      }
    }
LABEL_5:
    __writecr8(v6);
    return 0LL;
  }
  v11 = v36;
  v12 = *(_BYTE *)(v36 + 34);
  if ( (v12 & 0x20) != 0 || (v12 & 0xC0) != 0x40 || (*(_BYTE *)(v36 + 35) & 0x40) != 0 || sub_140273354(v36) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v30 = KeGetCurrentPrcb();
      v31 = *((_QWORD *)v30 + 4375);
      v22 = (*(_DWORD *)(v31 + 20) & 0xFFFF0007) == 0;
      *(_DWORD *)(v31 + 20) &= 0xFFFF0007;
      if ( v22 )
        sub_140418E4C(v30);
      v11 = v36;
    }
    __writecr8(2uLL);
    v27 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_58;
  }
  v13 = sub_140317A10(v10);
  v38 = v13;
  if ( (v13 & 1) != 0 )
  {
    v13 = sub_140317A10(&v38);
    v14 = 0;
  }
  else
  {
    if ( qword_140C50780 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140C50780;
    }
    v14 = 1;
  }
  v15 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  v16 = 48 * a2 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v25 = KeGetCurrentPrcb();
        v26 = *((_QWORD *)v25 + 4375);
        v22 = (*(_DWORD *)(v26 + 20) & 0xFFFF0007) == 0;
        *(_DWORD *)(v26 + 20) &= 0xFFFF0007;
        if ( v22 )
          sub_140418E4C(v25);
      }
    }
    __writecr8(2uLL);
    v27 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_58:
    LOBYTE(v27) = v6;
    sub_140334790(v37, v27);
    return 0LL;
  }
  sub_1402E7D60(a2, v15, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v28 = KeGetCurrentPrcb();
      v29 = *((_QWORD *)v28 + 4375);
      v22 = (*(_DWORD *)(v29 + 20) & 0xFFFF0007) == 0;
      *(_DWORD *)(v29 + 20) &= 0xFFFF0007;
      if ( v22 )
        sub_140418E4C(v28);
    }
  }
  __writecr8(2uLL);
  if ( v14 )
    sub_14024DD20(v36);
  v17 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v17) = v6;
  sub_140334790(v37, v17);
  return 1LL;
}

/*
 * XREFs of sub_1405A4940 @ 0x1405A4940
 * Callers:
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 * Callees:
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402E76C0 @ 0x1402E76C0 (sub_1402E76C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405A4940(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  signed __int64 v3; // rsi
  unsigned int v4; // r13d
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  char v13; // bp
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r15
  int v17; // eax
  char v18; // bp
  __int64 v19; // r8
  __int64 v20; // rbp
  signed __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // edx
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  v28 = a2;
  v2 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFFLL;
  if ( (dword_140D06880 & 0x20000000) == 0 )
    return 1LL;
  if ( v2 > qword_140C50840 )
    return 1LL;
  if ( (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
    return 1LL;
  v3 = 48 * v2 - 0x220000000000LL;
  if ( (*(_BYTE *)(v3 + 34) & 0x10) != 0 )
    return 1LL;
  v4 = 0;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v7 = KeGetCurrentIrql();
          if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v9 = *((_QWORD *)CurrentPrcb + 4375);
            v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
            *(_DWORD *)(v9 + 20) &= v10;
            if ( v11 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v13 = *(_BYTE *)(v3 + 34);
  v14 = *(_QWORD *)(v3 + 16);
  if ( (v14 & 0x400) == 0 )
  {
    if ( (v13 & 8) == 0 && (unsigned int)sub_1402E76C0(v3 + 16) )
    {
      v20 = 0LL;
      while ( 1 )
      {
        v21 = _InterlockedCompareExchange64(&qword_140C4F040[v20 + 1907], v3, 0LL);
        if ( !v21 )
          break;
        if ( (v21 | 1) == (v3 | 1) )
          goto LABEL_49;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= 0x20 )
        {
          if ( (_DWORD)v20 == 32 )
            goto LABEL_50;
          break;
        }
      }
      v22 = 5LL;
      if ( CurrentIrql != 17 )
        v22 = 1LL;
      sub_140274508(v3, v22, v19);
      _InterlockedAdd64(&qword_140C4F040[v20 + 1907], 1uLL);
      _InterlockedCompareExchange(&dword_140C0B22C, 1, 0);
      goto LABEL_49;
    }
    v18 = v13 | 0x10;
    goto LABEL_48;
  }
  if ( (v13 & 0x10) != 0 )
  {
LABEL_49:
    v4 = 1;
    goto LABEL_50;
  }
  if ( !_bittest64((const signed __int64 *)(v3 + 40), 0x35u) )
  {
    if ( qword_140C50780 && (v14 & 0x10) == 0 )
      v14 &= ~qword_140C50780;
    v15 = v14 >> 16;
    v16 = *(_QWORD *)v15;
    v17 = *(_DWORD *)(*(_QWORD *)v15 + 56LL);
    if ( (v17 & 0x20) == 0 )
      goto LABEL_36;
    if ( (v17 & 0x40000) != 0 || !*(_QWORD *)(*(_QWORD *)(v16 + 96) + 32LL) )
    {
LABEL_32:
      if ( (*(_BYTE *)(v15 + 32) & 0x3Eu) < 8 && (unsigned int)sub_14027B080(a1) == 1 )
        byte_140C4F600 = 1;
      v13 = *(_BYTE *)(v3 + 34);
      byte_140C52BC1 = 1;
LABEL_36:
      v18 = v13 | 0x10;
LABEL_48:
      *(_BYTE *)(v3 + 34) = v18;
      goto LABEL_49;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v16 + 72)) )
    {
      *(_DWORD *)(v16 + 56) |= 0x40000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
      goto LABEL_32;
    }
  }
LABEL_50:
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v11 )
            sub_140418E4C((__int64)v24);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v4;
}

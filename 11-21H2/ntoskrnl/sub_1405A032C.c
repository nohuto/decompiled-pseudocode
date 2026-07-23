/*
 * XREFs of sub_1405A032C @ 0x1405A032C
 * Callers:
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 * Callees:
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14023F9CC @ 0x14023F9CC (sub_14023F9CC.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1403377E0 @ 0x1403377E0 (sub_1403377E0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 *     sub_1405ADEB8 @ 0x1405ADEB8 (sub_1405ADEB8.c)
 */

__int64 sub_1405A032C()
{
  KIRQL CurrentIrql; // bl
  __int64 v1; // r9
  ULONG_PTR v2; // r12
  __int64 v3; // rdi
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rsi
  KIRQL v17; // al
  unsigned __int64 v18; // r15
  __int64 *v19; // rax
  volatile LONG *v20; // rcx
  __int64 *v21; // r14
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int16 v27; // r14
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  __int64 v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  char v33; // cl
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  int v36; // eax
  __int64 v37; // r8
  __int64 result; // rax
  __int64 *v39; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  v39 = 0LL;
  do
  {
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v1 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
      v2 = qword_140C4F258;
      byte_140C4F2EA = 0;
      if ( qword_140C4F258 == 0x3FFFFFFFFFLL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
        if ( !dword_140D06B08 )
          goto LABEL_66;
        if ( (dword_140D06B08 & 1) == 0 )
          goto LABEL_66;
        v34 = KeGetCurrentIrql();
        if ( v34 > 0xFu || CurrentIrql > 0xFu || v34 < 2u )
          goto LABEL_66;
        v33 = CurrentIrql + 1;
        goto LABEL_64;
      }
      v3 = 48 * qword_140C4F258 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
        break;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v4 = KeGetCurrentIrql();
          if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v6 = *((_QWORD *)CurrentPrcb + 4375);
            v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
            *(_DWORD *)(v6 + 20) &= v7;
            if ( v8 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v9 = qword_140C4F248;
    sub_1405ADEB8(48 * v2 - 0x220000000000LL, 128LL);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    sub_140274508(48 * v2 - 0x220000000000LL, 1LL, v10);
    v39 = 0LL;
    BugCheckParameter2 = 0LL;
    v11 = sub_14023F8E8(48 * v2 - 0x220000000000LL, (__int64 *)&BugCheckParameter2, (__int64 *)&v39);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((_QWORD *)v13 + 4375);
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v8 )
            sub_140418E4C((__int64)v13);
        }
      }
    }
    __writecr8(CurrentIrql);
    LODWORD(v16) = 0;
    if ( v11 )
    {
      if ( v39 )
        sub_1402879F8(v39);
      sub_1405A0774(48 * v2 - 0x220000000000LL);
      v16 = (*(_QWORD *)(v3 + 24) >> 62) & 1LL;
      if ( BugCheckParameter2 )
        sub_14023F9CC((__int64 *)BugCheckParameter2);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
      *(_DWORD *)(v11 + 56) &= ~4u;
      v18 = v17;
      v19 = (__int64 *)sub_140287A8C(v11, 1);
      v20 = (volatile LONG *)(v11 + 72);
      v39 = v19;
      v21 = v19;
      ExReleaseSpinLockExclusiveFromDpcLevel(v20);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = *((_QWORD *)v23 + 4375);
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v8 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v8 )
              sub_140418E4C((__int64)v23);
            v21 = v39;
          }
        }
      }
      __writecr8(v18);
      if ( v21 )
        sub_1402879F8(v21);
    }
    v26 = (unsigned __int8)sub_1402F2700(48 * v2 - 0x220000000000LL);
    if ( (unsigned int)sub_1403377E0(48 * v2 - 0x220000000000LL) )
    {
      sub_14033C33C(48 * v2 - 0x220000000000LL, 0, 1);
      sub_140338500(48 * v2 - 0x220000000000LL, v2);
    }
    v27 = *(_WORD *)(v3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = *((_QWORD *)v29 + 4375);
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v8 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
          *(_DWORD *)(v30 + 20) &= v31;
          if ( v8 )
            sub_140418E4C((__int64)v29);
        }
      }
    }
    __writecr8(v26);
  }
  while ( !v27 && (_DWORD)v16 || v9 != 1 );
  CurrentIrql = ExAcquireSpinLockExclusive(&dword_140C56920);
  if ( qword_140C4F248 )
    byte_140C4F2EA = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v32 = KeGetCurrentIrql();
      if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
      {
        v33 = CurrentIrql + 1;
LABEL_64:
        v35 = KeGetCurrentPrcb();
        v36 = ~(unsigned __int16)(-1LL << v33);
        v37 = *((_QWORD *)v35 + 4375);
        v8 = (v36 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v36;
        if ( v8 )
          sub_140418E4C((__int64)v35);
      }
    }
  }
LABEL_66:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

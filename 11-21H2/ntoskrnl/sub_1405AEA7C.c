/*
 * XREFs of sub_1405AEA7C @ 0x1405AEA7C
 * Callers:
 *     sub_140358400 @ 0x140358400 (sub_140358400.c)
 * Callees:
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402CB2D0 @ 0x1402CB2D0 (sub_1402CB2D0.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140358810 @ 0x140358810 (sub_140358810.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405AEA7C(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r8
  int v17; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // eax
  struct _KPRCB *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  BOOL v28; // ebx
  unsigned __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  BOOL v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+3Ch] [rbp-4Ch]
  __int128 v32; // [rsp+40h] [rbp-48h]
  unsigned int v33; // [rsp+98h] [rbp+10h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v33 = a2;
  v34 = qword_14001C780[a2];
  v6 = (unsigned __int8)sub_1402F2700(a1);
  v7 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v8 = 0;
  if ( !sub_140358810(v7, a1, a2) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
LABEL_18:
    __writecr8(v6);
    return v8;
  }
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 == a3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v14 >= 2u )
        {
          v15 = KeGetCurrentPrcb();
          v16 = *((_QWORD *)v15 + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v13 )
            sub_140418E4C((__int64)v15);
        }
      }
    }
    v8 = 1;
    goto LABEL_18;
  }
  v19 = 24512LL * *((unsigned int *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) + 2);
  v20 = v19 + *(_QWORD *)(v7 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v20 + 22848));
  v21 = sub_1402E8990(a1);
  sub_1402CB2D0((_QWORD *)v20, a1, v33, v21, 32);
  ++*(_DWORD *)(v19 + *(_QWORD *)(v7 + 16) + 22788);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 22848));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v23 = *((_QWORD *)v22 + 4375);
      v13 = (*(_DWORD *)(v23 + 20) & 0xFFFF0007) == 0;
      *(_DWORD *)(v23 + 20) &= 0xFFFF0007;
      if ( v13 )
        sub_140418E4C((__int64)v22);
    }
  }
  __writecr8(2uLL);
  sub_14026873C(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), v34, a3);
  v27 = *(_DWORD *)(a1 + 16);
  v33 = 0;
  v28 = (v27 & 0x3E0) != 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v33, v24, v25, v26);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v29 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v32 = 0LL;
  v30 = v28;
  v31 = 5;
  LOBYTE(v32) = v6;
  sub_1402BEEA0((__int64)&v29);
  return 1LL;
}

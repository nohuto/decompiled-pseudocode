/*
 * XREFs of PoFxRemoveComponentRelation @ 0x1405CA8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_1403BA340 @ 0x1403BA340 (sub_1403BA340.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1404198CC @ 0x1404198CC (sub_1404198CC.c)
 *     sub_1404199A4 @ 0x1404199A4 (sub_1404199A4.c)
 */

__int64 __fastcall PoFxRemoveComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // r13
  __int64 v7; // r14
  volatile LONG *v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // rsi
  __int64 v24; // rcx
  KIRQL v26; // al
  KSPIN_LOCK *v27; // rcx
  unsigned __int64 v28; // r12
  _QWORD *v29; // rax
  KSPIN_LOCK v30; // r8
  KSPIN_LOCK *v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  unsigned __int64 v36; // r12
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  char v42; // [rsp+20h] [rbp-48h]
  __int64 i; // [rsp+28h] [rbp-40h] BYREF
  __int64 v44; // [rsp+30h] [rbp-38h]

  v4 = 0;
  i = 0LL;
  v6 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741585;
  if ( a2 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    return (unsigned int)-1073741584;
  _mm_lfence();
  v44 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * a2);
  if ( !a3 )
    return (unsigned int)-1073741583;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( !v7 )
    return (unsigned int)-1073741583;
  v8 = (volatile LONG *)(v7 + 88);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 88));
  v10 = *(_QWORD *)(v7 + 80);
  v11 = v9;
  if ( !v10 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    return (unsigned int)-1073741583;
  }
  sub_140355350(v10);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v16 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  __writecr8(v11);
  v21 = *(_DWORD *)(v10 + 828);
  v22 = 0;
  if ( !v21 )
    goto LABEL_29;
  while ( 1 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(v10 + 832) + 8LL * v22);
    v24 = *a4 - *(_QWORD *)v23;
    if ( *a4 == *(_QWORD *)v23 )
      v24 = a4[1] - *(_QWORD *)(v23 + 8);
    if ( !v24 )
      break;
    if ( ++v22 >= v21 )
      goto LABEL_29;
  }
  if ( v23 )
  {
    sub_1403BA340(v6, v44, 1, 0);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v44 + 128));
    v27 = (KSPIN_LOCK *)i;
    v28 = v26;
    v42 = 0;
    while ( (unsigned __int8)sub_1404199A4(v44, (__int64)v27, (__int64)&i) )
    {
      v27 = (KSPIN_LOCK *)i;
      if ( *(_QWORD *)(i + 24) == v23 )
      {
        *(_DWORD *)(i + 16) &= ~8u;
        v29 = v27 + 7;
        v27[6] = 0LL;
        v30 = v27[7];
        v31 = (KSPIN_LOCK *)v27[8];
        if ( *(KSPIN_LOCK **)(v30 + 8) != v27 + 7 || (_QWORD *)*v31 != v29 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        v27[8] = (KSPIN_LOCK)(v27 + 7);
        *v29 = v29;
        v42 = 1;
        KeReleaseSpinLockFromDpcLevel(v27 + 1);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v44 + 128));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = *((_QWORD *)v33 + 4375);
          v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v16 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
          *(_DWORD *)(v34 + 20) &= v35;
          if ( v16 )
            sub_140418E4C((__int64)v33);
        }
      }
    }
    __writecr8(v28);
    if ( v42 )
    {
      v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 128));
      v37 = 0LL;
      for ( i = 0LL; sub_1404198CC(v23, v37, &i); v37 = i )
        ;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v23 + 128));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = *((_QWORD *)v39 + 4375);
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
            v16 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
            *(_DWORD *)(v40 + 20) &= v41;
            if ( v16 )
              sub_140418E4C((__int64)v39);
          }
        }
      }
      __writecr8(v36);
      sub_140355830(v10, *(unsigned int *)(v23 + 16), 2);
      v6 = BugCheckParameter2;
    }
    else
    {
      v4 = -1073741811;
    }
    sub_140355830(v6, *(unsigned int *)(v44 + 16), 2);
  }
  else
  {
LABEL_29:
    v4 = -1073741582;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 244), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v10 + 248), 0, 0);
  return v4;
}

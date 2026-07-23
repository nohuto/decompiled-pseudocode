/*
 * XREFs of PoFxAddComponentRelation @ 0x1405CA2E0
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
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxAddComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rbp
  volatile LONG *v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // rbp
  unsigned __int64 v11; // r14
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
  _QWORD *v23; // r14
  __int64 v24; // rcx
  __int64 Pool2; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r12
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  unsigned __int8 v31; // al
  KIRQL v32; // r12
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  KIRQL v36; // al
  _QWORD *v37; // r14
  unsigned __int64 v38; // r12
  _QWORD *v39; // r8
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r8
  __int64 v42; // r10
  int v43; // eax
  __int64 v44; // [rsp+20h] [rbp-38h]
  __int64 v45; // [rsp+28h] [rbp-30h]
  KIRQL SpinLock; // [rsp+60h] [rbp+8h]
  KSPIN_LOCK *SpinLocka; // [rsp+60h] [rbp+8h]

  v4 = 0;
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
    v23 = *(_QWORD **)(*(_QWORD *)(v10 + 832) + 8LL * v22);
    v24 = *a4 - *v23;
    if ( *a4 == *v23 )
      v24 = a4[1] - v23[1];
    if ( !v24 )
      break;
    if ( ++v22 >= v21 )
      goto LABEL_29;
  }
  if ( v23 )
  {
    if ( (_QWORD *)v44 == v23
      || (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 824), 0, 0) & 1) != 0
      || (_InterlockedCompareExchange((volatile signed __int32 *)(v10 + 824), 0, 0) & 1) != 0 )
    {
      v4 = -1073741811;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 72LL, 1297630800LL);
      v45 = Pool2;
      v27 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) |= 0xEu;
        v28 = (_QWORD *)(Pool2 + 56);
        *(_DWORD *)Pool2 = 1;
        *(_QWORD *)(Pool2 + 8) = 0LL;
        v29 = (_QWORD *)(Pool2 + 32);
        v27[3] = v23;
        v27[8] = v27 + 7;
        v27[7] = v27 + 7;
        v29[1] = v29;
        *v29 = v29;
        v27[6] = v44 + 128;
        sub_1403BA340(v10, (__int64)v23, 1, 0);
        sub_1403BA340(BugCheckParameter2, v44, 1, 0);
        SpinLock = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v44 + 128));
        v30 = *(_QWORD **)(v44 + 464);
        if ( *v30 != v44 + 456 )
          goto LABEL_58;
        *v28 = v44 + 456;
        v28[1] = v30;
        *v30 = v28;
        *(_QWORD *)(v44 + 464) = v28;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v44 + 128));
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v31 = KeGetCurrentIrql(), v31 <= 0xFu) )
        {
          v32 = SpinLock;
          if ( SpinLock <= 0xFu && v31 >= 2u )
          {
            v33 = KeGetCurrentPrcb();
            v34 = *((_QWORD *)v33 + 4375);
            v35 = ~(unsigned __int16)(-1LL << (SpinLock + 1));
            v16 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
            *(_DWORD *)(v34 + 20) &= v35;
            if ( v16 )
              sub_140418E4C((__int64)v33);
          }
        }
        else
        {
          v32 = SpinLock;
        }
        __writecr8(v32);
        SpinLocka = v23 + 16;
        v36 = KeAcquireSpinLockRaiseToDpc(v23 + 16);
        v37 = v23 + 55;
        v38 = v36;
        v39 = (_QWORD *)v37[1];
        if ( (_QWORD *)*v39 != v37 )
LABEL_58:
          __fastfail(3u);
        *(_QWORD *)(v45 + 32) = v37;
        *(_QWORD *)(v45 + 40) = v39;
        *v39 = v45 + 32;
        v37[1] = v45 + 32;
        KeReleaseSpinLockFromDpcLevel(SpinLocka);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v40 = KeGetCurrentIrql();
            if ( v40 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v40 >= 2u )
            {
              v41 = KeGetCurrentPrcb();
              v42 = *((_QWORD *)v41 + 4375);
              v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
              v16 = (v43 & *(_DWORD *)(v42 + 20)) == 0;
              *(_DWORD *)(v42 + 20) &= v43;
              if ( v16 )
                sub_140418E4C((__int64)v41);
            }
          }
        }
        __writecr8(v38);
        sub_140355830(BugCheckParameter2, *(unsigned int *)(v44 + 16), 2);
      }
      else
      {
        v4 = -1073741670;
      }
    }
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

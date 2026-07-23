/*
 * XREFs of sub_140214694 @ 0x140214694
 * Callers:
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 * Callees:
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14021491C @ 0x14021491C (sub_14021491C.c)
 *     sub_140214C50 @ 0x140214C50 (sub_140214C50.c)
 *     sub_1402501E8 @ 0x1402501E8 (sub_1402501E8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14063BDD0 @ 0x14063BDD0 (sub_14063BDD0.c)
 */

ULONG_PTR __fastcall sub_140214694(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r11
  ULONG_PTR v12; // r14
  int v14; // ebp
  int v15; // ecx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // r10
  __int64 v22; // rsi
  unsigned int v23; // r13d
  unsigned int v24; // r9d
  __int64 v25; // rdi
  int v26; // eax
  signed __int64 v27; // r13
  bool v28; // zf
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v35; // r9
  int v36; // eax
  signed __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  int v41; // [rsp+38h] [rbp-50h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v44; // [rsp+90h] [rbp+8h]

  v9 = sub_14021491C(512LL, a5, 0LL);
  v10 = v9;
  if ( v11 > *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16704LL) )
    return 0LL;
  if ( a2 < *(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16712LL) )
    return 0LL;
  if ( (unsigned __int64)(a3 - 1) <= 0x1FE )
    return 0LL;
  v14 = 1;
  if ( (*(_BYTE *)(v9 + 333) & 7) == 0 || a4 >= *(unsigned int *)(v9 + 528) )
    return 0LL;
  v15 = v9 + 320;
  v16 = (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v16 > *(unsigned int *)(v9 + 336) )
    v15 = v9 + 512;
  v17 = sub_14034FED0(v15, v16, v16, v16, 0x800000);
  v12 = v17;
  if ( !v17 )
    return 0LL;
  if ( !(unsigned int)sub_140214C50(v17, a6, v16, 512, 0, 0) )
  {
    sub_140364128(v10, v12, 0LL, v18, v39);
    return 0LL;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a6 == dword_140D05128 )
    __debugbreak();
  v19 = DWORD1(xmmword_140D06900);
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
    v19 = sub_14062DEE4(3616, 512, a6, v12, v16);
  LODWORD(v19) = HIDWORD(KeGetPcr()[1].LockArray);
  v20 = qword_140C157A0;
  v21 = qword_140C157C8;
  v22 = (__int64)*(&qword_140C117A0 + v19);
  v41 = qword_140C157A0;
  v42 = qword_140C157C8;
  v23 = qword_140C157A0 & ((40543 * a6) ^ ((40543 * (unsigned __int64)a6) >> 32));
  v24 = v23;
  v44 = v23;
  while ( 1 )
  {
    v25 = 10LL * v23;
    v26 = *(_DWORD *)(v22 + 80LL * v23);
    if ( v26 == a6 )
      break;
    if ( v26 )
    {
LABEL_19:
      v23 = v20 & (v23 + 1);
      if ( v23 == v24 )
      {
        sub_140212E00(a6, v16, 0x200u);
        goto LABEL_23;
      }
    }
    else
    {
      v29 = *(_DWORD *)(qword_140C157D0 + 80LL * v23);
      if ( v29 )
      {
        *(_DWORD *)(v22 + 80LL * v23) = v29;
        v31 = *(_QWORD *)(qword_140C157D0 + 80LL * v23 + 72);
        if ( v31 )
          *(_QWORD *)(v22 + 80LL * v23 + 72) = v31;
      }
      else
      {
        if ( v23 == v21 - 1 )
          goto LABEL_19;
        KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
        v40 = qword_140C157D0;
        if ( !*(_DWORD *)(qword_140C157D0 + 80LL * v23) )
        {
          v30 = sub_1402501E8(a6);
          *(_QWORD *)(v40 + 80LL * v23 + 72) = v30;
          *(_QWORD *)(v22 + 80LL * v23 + 72) = v30;
          *(_DWORD *)(qword_140C157D0 + 80LL * v23) = a6;
          *(_DWORD *)(v22 + 80LL * v23) = a6;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v35 = *((_QWORD *)CurrentPrcb + 4375);
              v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v28 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v36;
              if ( v28 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v20 = v41;
        v24 = v44;
        v21 = v42;
      }
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v22 + 80LL * v23 + 16), 1uLL);
  v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 80LL * v23 + 8), v16);
  v28 = *(_QWORD *)(v22 + 8 * v25 + 72) == 0LL;
LABEL_22:
  if ( !v28 )
  {
    v37 = *(_QWORD *)(v22 + 8 * v25 + 64);
    while ( (v37 & 1) == 0 && v37 < v27 )
    {
      v38 = sub_14063BDD0(*(_QWORD *)(v22 + 8 * v25 + 72), v16, 1LL);
      if ( !v38 )
      {
        v14 = 0;
        break;
      }
      if ( v38 == 1 )
      {
        v28 = v37 == _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 8 * v25 + 64), 1LL, v37);
        goto LABEL_22;
      }
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8 * v25 + 64), v38);
      v27 = *(_QWORD *)(v22 + 8 * v25 + 8);
    }
  }
LABEL_23:
  if ( !v14 )
  {
    sub_140348B40(v12);
    return 0LL;
  }
  return v12;
}

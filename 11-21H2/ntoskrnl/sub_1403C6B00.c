/*
 * XREFs of sub_1403C6B00 @ 0x1403C6B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023FD0C @ 0x14023FD0C (sub_14023FD0C.c)
 *     sub_140246E70 @ 0x140246E70 (sub_140246E70.c)
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 *     sub_140267A5C @ 0x140267A5C (sub_140267A5C.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402C41D0 @ 0x1402C41D0 (sub_1402C41D0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403C6CDC @ 0x1403C6CDC (sub_1403C6CDC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403C6B00(unsigned __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  unsigned __int64 OldIrql; // r13
  int i; // r13d
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r9
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  __int64 v24; // r9
  int v25; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h]
  __int64 v29; // [rsp+98h] [rbp+48h]

  v1 = *(_QWORD *)(a1 + 232);
  v2 = *(unsigned int *)(a1 + 264);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 5 * v2;
  *(_QWORD *)(a1 + 272) = KeGetCurrentThread();
  v5 = *(_QWORD *)(v1 + 72);
  v6 = *(_QWORD *)(v1 + 144);
  v7 = 1;
  v28 = *(_QWORD *)(v5 + 16) + 24512LL * *(unsigned int *)(v1 + 80);
  KeWaitForSingleObject((PVOID)(v1 + 88), Executive, 0, 0, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  *(_BYTE *)(v6 + 8 * v4 + 4) |= 1u;
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
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v10 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  for ( i = 0; ; i = 0 )
  {
    sub_1402C41D0(a1);
    if ( v7 )
      sub_1403C6CDC(a1);
    if ( *(_BYTE *)(v5 + 16176) )
      break;
    sub_140246E70(a1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
    if ( v7 && !*(_BYTE *)(v1 + 132) )
    {
      *(_BYTE *)(v1 + 132) = 1;
      sub_140267A5C(v1, 5);
    }
    *(_BYTE *)(v6 + 8 * v4 + 4) &= ~4u;
    *(_BYTE *)(v6 + 8 * v4 + 4) |= 8u;
    if ( (*(_BYTE *)(v6 + 8 * v4 + 4) & 2) == 0 )
    {
      *(_BYTE *)(v6 + 8 * v4 + 4) |= 2u;
      v10 = (*(_DWORD *)(v1 + 164))-- == 1;
      if ( v10 )
        *(_BYTE *)(v28 + 22964) = 0;
    }
    v11 = *(_QWORD *)(a1 + 240);
    *(_QWORD *)(a1 + 240) = 0LL;
    v29 = v11;
    if ( *(_DWORD *)(v5 + 108) )
    {
      *(_BYTE *)(v6 + 8 * v4 + 4) |= 0x10u;
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xCu);
      i = 1;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v10 )
            sub_140418E4C(v18);
        }
      }
    }
    __writecr8(v12);
    if ( v29 )
      sub_14023FD0C(v29, 1);
    if ( i )
      goto LABEL_39;
    v7 = 0;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 24), &LockHandle);
  *(_BYTE *)(v6 + 8 * v4 + 4) |= 0x10u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = *((_QWORD *)v23 + 4375);
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
        *(_DWORD *)(v24 + 20) &= v25;
        if ( v10 )
          sub_140418E4C(v23);
      }
    }
  }
  __writecr8(v21);
LABEL_39:
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16192), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_14024B0B4((_DWORD *)(v5 + 16152), 1);
  return result;
}

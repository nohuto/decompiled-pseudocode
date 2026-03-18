/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1402091B0
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AFDD8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409AFE9C (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  unsigned __int64 *v2; // rbp
  int v3; // r14d
  char v4; // si
  char v5; // di
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  KIRQL v8; // r15
  char v9; // dl
  BOOL v10; // r8d
  char v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v17[3]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = &a1[1].ActiveProcessors.StaticBitmap[26];
  v3 = 0;
  v4 = a2 & 0xF7;
  v17[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v4 = a2;
  memset(&v17[1], 0, 32);
  v5 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~2u;
    v5 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v3 = 1;
    KiStackAttachProcess((ULONG_PTR)a1);
  }
  SharedVm = MiGetSharedVm(v2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  v8 = v7;
  KxAcquireQueuedSpinLock(&LockHandle);
  v15 = *((_DWORD *)v2 + 46);
  v9 = v15;
  if ( (v4 & 8) != 0 )
  {
    v9 = v15 & 0x7F;
    LOBYTE(v15) = v15 & 0x7F;
  }
  v10 = (v4 & 8) != 0;
  if ( (v4 & 2) != 0 )
  {
    v9 &= ~0x40u;
    v10 = 1;
    LOBYTE(v15) = v9;
  }
  if ( v9 < 0 )
    v5 |= 0x80u;
  v11 = v5 | 0x40;
  if ( (v9 & 0x40) == 0 )
    v11 = v5;
  if ( v11 < 0 && (v11 & 0x40) != 0 && v2[14] + 6 >= v2[15] )
  {
    v12 = -1073741748;
    goto LABEL_19;
  }
  if ( (v4 & 4) != 0 )
  {
    v9 |= 0x80u;
    v10 = 1;
    LOBYTE(v15) = v9;
  }
  v12 = 0;
  if ( (v4 & 1) == 0 )
  {
LABEL_19:
    if ( !v10 )
      goto LABEL_21;
    goto LABEL_20;
  }
  LOBYTE(v15) = v9 | 0x40;
LABEL_20:
  *((_WORD *)v2 + 92) = v15;
LABEL_21:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v13) = v8;
  MiUnlockWorkingSetExclusive(v2, v13);
  if ( v3 )
    KiUnstackDetachProcess(v17, 0LL);
  return v12;
}

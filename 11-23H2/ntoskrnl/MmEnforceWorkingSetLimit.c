/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14020C03C
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406A0894 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409B1FE8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409B20B0 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbp
  char v5; // si
  int v6; // r14d
  char v7; // di
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r15
  int v11; // ecx
  BOOL v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int16 v16; // [rsp+20h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-80h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-68h] BYREF

  v4 = &a1[1].ActiveProcessors.StaticBitmap[26];
  v5 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v6 = 0;
  if ( (a2 & 4) != 0 )
    v5 = 0x80;
  v7 = a2 & 0xF7;
  v18[0] = 0LL;
  if ( (a2 & 4) == 0 )
    v7 = a2;
  memset(&v18[1], 0, 32);
  LockHandle.LockQueue = 0LL;
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v5 = (a2 & 4) != 0 ? -64 : 64;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v6 = 1;
    KiStackAttachProcess((ULONG_PTR)a1);
  }
  SharedVm = MiGetSharedVm(v4, a2, a3, a4);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v10 = v9;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C697C0, &LockHandle);
  v11 = *((_DWORD *)v4 + 46);
  v16 = v11;
  if ( (v7 & 8) != 0 )
  {
    LOBYTE(v11) = v11 & 0x7F;
    LOBYTE(v16) = v11;
  }
  v12 = (v7 & 8) != 0;
  if ( (v7 & 2) != 0 )
  {
    LOBYTE(v11) = v11 & 0xBF;
    v12 = 1;
    LOBYTE(v16) = v11;
  }
  if ( (v11 & 0x80) != 0 )
    v5 |= 0x80u;
  if ( (v11 & 0x40) != 0 )
    v5 |= 0x40u;
  if ( v5 < 0 && (v5 & 0x40) != 0 && v4[14] + 6 >= v4[15] )
  {
    v13 = -1073741748;
    goto LABEL_21;
  }
  v13 = 0;
  if ( (v7 & 4) != 0 )
  {
    LOBYTE(v11) = v11 | 0x80;
    v12 = 1;
    LOBYTE(v16) = v11;
  }
  if ( (v7 & 1) == 0 )
  {
LABEL_21:
    if ( !v12 )
      goto LABEL_23;
    goto LABEL_22;
  }
  LOBYTE(v16) = v11 | 0x40;
LABEL_22:
  *((_WORD *)v4 + 92) = v16;
LABEL_23:
  KxReleaseQueuedSpinLock(&LockHandle);
  LOBYTE(v14) = v10;
  MiUnlockWorkingSetExclusive(v4, v14);
  if ( v6 )
    KiUnstackDetachProcess(v18, 0LL);
  return v13;
}

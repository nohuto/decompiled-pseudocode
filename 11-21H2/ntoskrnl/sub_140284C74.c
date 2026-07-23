/*
 * XREFs of sub_140284C74 @ 0x140284C74
 * Callers:
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140285380 @ 0x140285380 (sub_140285380.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140284C74()
{
  unsigned int v1; // esi
  LARGE_INTEGER *Timeout; // rbp
  NTSTATUS i; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r9
  int v14; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()[36].Unused0[2] & 0x10001) != 0
    || !(unsigned __int8)sub_1402ABBD0()
    || (*((_DWORD *)KeGetCurrentThread() + 345) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)sub_140285380(&StartContext, 160LL) )
    return 1LL;
  v1 = 0;
  Timeout = (LARGE_INTEGER *)&stru_14000EEA8;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_140C58CE8, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C58CC0, &LockHandle);
    if ( (unsigned int)sub_140285380(&StartContext, 160LL) )
      break;
    if ( i == 1 )
    {
      if ( byte_140C4F064 )
      {
        if ( dword_140C4F060 == dword_140C58D00 )
          goto LABEL_29;
        byte_140C4F064 = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_140C4F064 )
        {
          dword_140C4F060 = dword_140C58D00;
          byte_140C4F064 = 1;
        }
        goto LABEL_29;
      }
      Timeout = (LARGE_INTEGER *)&Interval;
    }
    KeResetEvent(&stru_140C58CE8);
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
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( byte_140C4F064 )
    byte_140C4F064 = 0;
  v1 = 1;
LABEL_29:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && LockHandle.OldIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v9 )
          sub_140418E4C(v12);
      }
    }
  }
  __writecr8(v10);
  return v1;
}

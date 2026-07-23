/*
 * XREFs of CcCopyWriteWontFlush @ 0x140229E10
 * Callers:
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 * Callees:
 *     sub_140229F30 @ 0x140229F30 (sub_140229F30.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     sub_140284848 @ 0x140284848 (sub_140284848.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v7; // eax
  int v8; // esi
  __int64 v9; // rbp
  BOOLEAN result; // al
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-10h]

  if ( Length >= 0x1000000 )
    goto LABEL_13;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    goto LABEL_13;
  CurrentThread = KeGetCurrentThread();
  v7 = (*((_DWORD *)CurrentThread + 344) >> 9) & 7;
  if ( (*(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1124LL) & 0x100000) != 0 )
  {
    v7 = 0;
  }
  else if ( v7 >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread != KeGetCurrentThread() || !*((_DWORD *)CurrentThread + 360) )
  {
LABEL_5:
    if ( !v7 )
      goto LABEL_13;
  }
  v8 = 0;
  v19 = 0LL;
  v18 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *((_QWORD *)qword_140D06C40 + 1);
  if ( byte_140C54C58 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v8 = sub_140284848(FileObject, v9);
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
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    Flags = FileObject->Flags;
  }
  if ( (Flags & 0x1000000) == 0 || (unsigned __int8)sub_1402844A0(v9, v8, (_DWORD)FileObject, Length, 0, 0, 0LL) )
    return 1;
LABEL_13:
  result = sub_140229F30(FileObject, 0LL);
  if ( result )
    return 1;
  return result;
}

/*
 * XREFs of sub_1402DF7D8 @ 0x1402DF7D8
 * Callers:
 *     sub_140672524 @ 0x140672524 (sub_140672524.c)
 *     sub_1406B9250 @ 0x1406B9250 (sub_1406B9250.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 *     IoGetContainerInformation @ 0x1409371A0 (IoGetContainerInformation.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void *__fastcall sub_1402DF7D8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rdi
  __int64 v5; // rax
  void *v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = sub_1402DF880(a1, a2, a3, a4);
  v6 = (void *)v5;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 1368);
    v4 = *(void **)(v7 + 64);
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    if ( (*(_DWORD *)(v7 + 4) & 2) != 0 )
      v4 = 0LL;
    else
      ObfReferenceObjectWithTag(v4, 0x746C6644u);
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
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= v13;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    ObfDereferenceObject(v6);
  }
  return v4;
}

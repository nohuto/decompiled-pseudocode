/*
 * XREFs of sub_1403A379C @ 0x1403A379C
 * Callers:
 *     sub_1403A374C @ 0x1403A374C (sub_1403A374C.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403A38BC @ 0x1403A38BC (sub_1403A38BC.c)
 *     sub_1403A39B8 @ 0x1403A39B8 (sub_1403A39B8.c)
 *     sub_1403A3B18 @ 0x1403A3B18 (sub_1403A3B18.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1403A379C(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _DWORD *v3; // r14
  PDEVICE_OBJECT DeviceObject; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  ULONG *v10; // rcx
  char v11; // si
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DeviceObject = CurrentStackLocation->DeviceObject;
  v6 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v7 = *(_QWORD *)(v6 + 40);
  if ( v7 )
  {
    LOBYTE(a2) = *(_BYTE *)(v6 + 184);
    sub_1403A38BC(Irp, a2, v7);
    p_Flags = &DeviceObject->Flags;
    Flags = DeviceObject->Flags;
    v10 = &DeviceObject->Flags;
    if ( (Flags & 0x8000) == 0 && ((Flags & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = &DeviceObject->Flags;
  }
  p_Flags = v10;
  v11 = 1;
  if ( (*v10 & 0x8000) != 0 )
  {
LABEL_5:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    sub_1403A39B8(Irp, a2, DeviceObject);
    if ( !v11 )
      return v11;
  }
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
    sub_1403A3B18(Irp);
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
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    *v3 = 259;
  }
  return v11;
}

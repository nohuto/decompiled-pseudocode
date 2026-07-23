/*
 * XREFs of IopCopyCompleteReadRequest @ 0x14028C860
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x14055A370 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     IopUpdateIrpTransferCount @ 0x14028C930 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x14028D058 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14028D11C (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC530 (IopProcessBufferedIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledDeviceUsage @ 0x1404100B0 (Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  PKEVENT UserEvent; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion(v5);
  IopUpdateIrpTransferCount(v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  if ( !(unsigned int)Feature_Servicing_CopyMoveFileEventObjectLeak__private_IsEnabledDeviceUsage() )
    goto LABEL_11;
  UserEvent = v5->UserEvent;
  if ( UserEvent )
  {
    ObfDereferenceObject(UserEvent);
LABEL_11:
    v5->UserEvent = 0LL;
  }
  return IopDropIrp(v5);
}

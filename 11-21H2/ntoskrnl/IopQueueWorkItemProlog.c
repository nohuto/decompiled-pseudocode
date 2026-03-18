/*
 * XREFs of IopQueueWorkItemProlog @ 0x1403467F0
 * Callers:
 *     IoQueueWorkItem @ 0x14023E0D0 (IoQueueWorkItem.c)
 *     IoTryQueueWorkItem @ 0x140255440 (IoTryQueueWorkItem.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1402DE684 (PnpDeviceCompletionRequestDestroy.c)
 *     IoQueueWorkItemEx @ 0x140345D70 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItemToNode @ 0x140558910 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsGetWorkOnBehalfThread @ 0x1402F6220 (PsGetWorkOnBehalfThread.c)
 *     ObpIncrPointerCount @ 0x14030F6D0 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID WorkOnBehalfThread; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      *(struct _LIST_ENTRY *)(a1 + 68) = *Flink;
    else
      *(_OWORD *)(a1 + 68) = 0LL;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v11);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v11 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[16] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48);
  ObpIncrPointerCount((volatile signed __int64 *)(v6 - 48));
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}

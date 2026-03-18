/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140AC8E74
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC4BC0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC5080 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5140 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52B0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC53B0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5490 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59E0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140AC5C10 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC5D70 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC6060 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6110 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC62B0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140AC6430 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140AC6770 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6C00 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC6D90 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72B0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC75F0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC7840 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140AC8E5C (ViGetAdapterInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC475C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140AC9040 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

struct _LIST_ENTRY *__fastcall ViGetAdapterInformationInternal(ULONG_PTR a1, char a2)
{
  KIRQL v4; // al
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax

  if ( !a1 || !ViVerifyDma || (unsigned int)ViGetAdapterSignature() != 1634550870 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
  {
    VF_ASSERT_MAX_IRQL();
    return 0LL;
  }
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C369B0);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140C369B0);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v6);
      return 0LL;
    }
    if ( (struct _LIST_ENTRY *)a1 == &Flink[1] )
      break;
    Flink = Flink->Flink;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C369B0);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  __writecr8(v6);
  if ( a2 && SHIDWORD(Flink[4].Blink) <= 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0DE4C,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0DE4C);
  }
  return Flink;
}

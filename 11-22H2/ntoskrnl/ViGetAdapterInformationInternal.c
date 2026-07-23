/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140AC9E44
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC5B90 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC5DE0 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC6050 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC6110 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC6280 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC6380 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC6460 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC6650 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC69B0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140AC6BE0 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC6D40 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC6DD0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC6F80 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC7030 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC70E0 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC7280 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140AC7400 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140AC7740 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC7800 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC7BD0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC7D60 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140AC7F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC80B0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC8280 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC85C0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC8810 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140AC9E2C (ViGetAdapterInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405CFD90 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC572C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140ACA010 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140ACA2F4 (ViHalPreprocessOptions.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C36990);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36990);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v6 <= 0xFu
          && CurrentIrql >= 2u )
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
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36990);
  if ( (_DWORD)KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v13 >= 2u )
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

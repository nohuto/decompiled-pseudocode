/*
 * XREFs of ViGetAdapterInformationInternal @ 0x140AC8E64
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC5070 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5130 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52A0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC53A0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5480 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC5670 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59D0 (VfBuildScatterGatherListEx.c)
 *     VfCancelAdapterChannel @ 0x140AC5C00 (VfCancelAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC5D60 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC5DF0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FA0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC6050 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6100 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC62A0 (VfFreeCommonBuffer.c)
 *     VfFreeMapRegisters @ 0x140AC6420 (VfFreeMapRegisters.c)
 *     VfGetDmaAlignment @ 0x140AC6760 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC6820 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6BF0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC6D80 (VfHalAllocateMapRegisters.c)
 *     VfMapTransfer @ 0x140AC6F20 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72A0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC75E0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC7830 (VfReadDmaCounter.c)
 *     ViGetAdapterInformation @ 0x140AC8E4C (ViGetAdapterInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC474C (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterSignature @ 0x140AC9030 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140C36950);
  Flink = ViAdapterList.Flink;
  v6 = v4;
  while ( 1 )
  {
    if ( &ViAdapterList == Flink )
    {
      KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36950);
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
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36950);
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
      byte_140C0DE3C,
      "Driver has attempted to access an adapter (%p) that has already been released",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, (ULONG_PTR)Flink, 0LL, byte_140C0DE3C);
  }
  return Flink;
}

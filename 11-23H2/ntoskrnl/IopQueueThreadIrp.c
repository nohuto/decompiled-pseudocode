/*
 * XREFs of IopQueueThreadIrp @ 0x14022ED60
 * Callers:
 *     IoAsynchronousPageWrite @ 0x140369A0C (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x1403C7780 (IoQueueThreadIrp.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     IopGetFileInformation @ 0x14075AE5C (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407FD3C0 (IopBuildSynchronousFsdRequest.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x140946D00 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140947350 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x1409476B0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140250F20 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460430 (KiAcquireSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571848 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1280);
  v4 = (volatile signed __int32 *)(v1 + 1496);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  v6 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v6;
  v2[1] = v3;
  *(_QWORD *)(v6 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

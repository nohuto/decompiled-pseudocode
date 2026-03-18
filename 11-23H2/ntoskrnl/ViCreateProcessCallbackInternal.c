/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140AD6254
 * Callers:
 *     ViCreateProcessCallback @ 0x140466480 (ViCreateProcessCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250E80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsLookupProcessByProcessId @ 0x1406FA370 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407427A8 (PsGetAllocatedFullProcessImageName.c)
 *     RtlUpcaseUnicodeString @ 0x140773AF0 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ViFaultsGetBaseImageName @ 0x140AD6780 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140AD6A30 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  PEPROCESS v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+50h] [rbp+20h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    SourceString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      v2 = Process;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
          _InterlockedOr((volatile signed __int32 *)&v2[1].DirectoryTableBase, 0x10000u);
        KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v8 = (v7 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v7;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v3);
        ExFreePoolWithTag(P, 0);
      }
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
    }
  }
}

/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140A96D84
 * Callers:
 *     ViCreateProcessCallback @ 0x14045F6A0 (ViCreateProcessCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407DB6A4 (PsGetAllocatedFullProcessImageName.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ViFaultsGetBaseImageName @ 0x140A972B0 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140A9755C (ViFaultsIsAppTarget.c)
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
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
          _InterlockedOr((volatile signed __int32 *)&v2[1].DirectoryTableBase, 0x10000u);
        KxReleaseSpinLock(&ViFaultInjectionLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
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
        }
        __writecr8(v3);
        ExFreePoolWithTag(P, 0);
      }
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
    }
  }
}

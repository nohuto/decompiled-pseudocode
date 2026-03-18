/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x140682900
 * Callers:
 *     PspInsertProcess @ 0x14066D0AC (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14068214C (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x1406821D4 (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x140682838 (PspIncrementJobChainProcessCounts.c)
 *     PspUnlockJobChain @ 0x140682B74 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140682C34 (PspLockJobChain.c)
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140683088 (PspApplyJobChainLimitsToProcess.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(char *Object, __int64 a2, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char *EffectiveServerSilo; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  int v11; // ebx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(Object, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (char *)PsGetEffectiveServerSilo((__int64)Object);
  }
  else
  {
    for ( EffectiveServerSilo = Object;
          EffectiveServerSilo;
          EffectiveServerSilo = (char *)*((_QWORD *)EffectiveServerSilo + 158) )
    {
      if ( (*((_DWORD *)EffectiveServerSilo + 64) & 0x1000) == 0
        && ((*((_DWORD *)EffectiveServerSilo + 64) & 0x800) == 0 || (a3 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == Object && (*((_DWORD *)EffectiveServerSilo + 378) & 0x40000000) == 0 )
    {
      v10 = -1073741790;
      goto LABEL_18;
    }
  }
  if ( !EffectiveServerSilo )
  {
    v10 = 0;
LABEL_18:
    PspUnlockJobChain(Object, CurrentThread, 0LL);
    return (unsigned int)v10;
  }
  if ( !PspValidateJobAssignmentMemoryPartition((__int64)EffectiveServerSilo, 0LL, a2, 1) )
  {
    v10 = -1073741637;
    goto LABEL_18;
  }
  v10 = PspValidateJobChainLimits((__int64)EffectiveServerSilo, v8, v9, a3);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = PspEstablishJobHierarchy(EffectiveServerSilo, a2, 0LL, 1u);
  if ( v10 < 0 )
    goto LABEL_18;
  PspIncrementJobChainProcessCounts((__int64)EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*((_DWORD *)EffectiveServerSilo + 378) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 2472);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2508), 0x1Fu);
  }
  PspUnlockJobChain(Object, CurrentThread, 0LL);
  v11 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v11 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0LL) )
    return (unsigned int)-1073741756;
  return (unsigned int)v11;
}

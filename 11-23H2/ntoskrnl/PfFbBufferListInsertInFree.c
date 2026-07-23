/*
 * XREFs of PfFbBufferListInsertInFree @ 0x1402F5924
 * Callers:
 *     PfTFullEventListAdd @ 0x1402F506C (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocateTemporary @ 0x1402F5708 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x1402F59CC (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListAllocate @ 0x1403A1910 (PfFbBufferListAllocate.c)
 *     PfpRepurposeNameLoggingTrace @ 0x14074AE9C (PfpRepurposeNameLoggingTrace.c)
 *     PfpFlushEventBuffers @ 0x14074AECC (PfpFlushEventBuffers.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 Next_low; // rcx
  char *v9; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[7], -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    Next_low = LODWORD(RunRef[5].Next);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + Next_low;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}

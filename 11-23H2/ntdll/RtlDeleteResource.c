/*
 * XREFs of RtlDeleteResource @ 0x18005AC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x18005ACD0 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A4C80 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(void *a1)
{
  unsigned __int64 v2; // rdx

  RtlDeleteCriticalSection(a1);
  NtClose(*((HANDLE *)a1 + 5));
  NtClose(*((HANDLE *)a1 + 7));
  v2 = *((_QWORD *)a1 + 11);
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= v2 && v2 < (unsigned __int64)&SRWLockSpinCycleCount )
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v2);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((_QWORD *)a1 + 11));
  }
  return memset_thunk_772440563353939046(a1, 0, 0x60uLL);
}

/*
 * XREFs of RtlDeleteResource @ 0x18001E420
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x18001E130 (RtlDeleteCriticalSection.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A7D80 (RtlpInterlockedPushEntrySList.c)
 */

void *__fastcall RtlDeleteResource(void *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdx

  RtlDeleteCriticalSection((__int64 *)a1, a2, a3, a4);
  NtClose(*((HANDLE *)a1 + 5));
  NtClose(*((HANDLE *)a1 + 7));
  v5 = *((_QWORD *)a1 + 11);
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) >= 0xAu
    && ((unsigned __int64)&RtlpStaticDebugInfo > v5 || v5 >= (unsigned __int64)&RtlpForceCSDebugInfoCreation) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)a1 + 11));
  }
  else
  {
    RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, v5);
  }
  return memset(a1, 0, 0x60uLL);
}

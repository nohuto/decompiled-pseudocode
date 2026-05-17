/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800AFF68
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800AFF50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x180126C80 (RtlpTpIoDllProcessUnloads.c)
 */

signed __int64 __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v3 >= *(_QWORD *)(a1 + 24) )
        v2 = *(_QWORD *)(v2 + 8);
      else
LABEL_8:
        v2 = *(_QWORD *)(v2 + 16);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}

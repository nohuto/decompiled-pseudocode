/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800AFF68
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800AFF50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x180126C80 (RtlpTpIoDllProcessUnloads.c)
 */

void __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // r8
  unsigned __int64 Parent; // rcx

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      Parent = (unsigned __int64)v2[-4].Parent;
      if ( Parent < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        break;
      }
      if ( Parent >= *(_QWORD *)(a1 + 24) )
        v2 = v2->LeftChild;
      else
LABEL_8:
        v2 = v2->RightChild;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}

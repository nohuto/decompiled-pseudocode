/*
 * XREFs of RtlRemovePointerMapping @ 0x1801014B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int64 Root; // rbx
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  Root = (unsigned __int64)RtlpPtrTree.Root;
  if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && RtlpPtrTree.Root )
    Root = (unsigned __int64)&RtlpPtrTree ^ (unsigned __int64)RtlpPtrTree.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
      {
        RtlRbRemoveNode(&RtlpPtrTree, (PRTL_BALANCED_NODE)Root);
        break;
      }
      v5 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v5 = *(_QWORD *)Root;
    }
    if ( (*(_BYTE *)&RtlpPtrTree.0 & 1) != 0 && v5 )
      Root ^= v5;
    else
      Root = v5;
  }
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !Root )
    return 3221226021LL;
  *a2 = *(_QWORD *)(Root + 32);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)Root);
  return 0LL;
}

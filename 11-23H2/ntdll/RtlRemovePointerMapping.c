/*
 * XREFs of RtlRemovePointerMapping @ 0x1801025A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&RtlpPtrTreeLock);
  v4 = RtlpPtrTree;
  if ( (qword_180184888 & 1) != 0 && RtlpPtrTree )
    v4 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v4 )
  {
    if ( a1 - *(_QWORD *)(v4 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v4 + 24) <= 0 )
        break;
      v5 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v5 = *(_QWORD *)v4;
    }
    if ( (qword_180184888 & 1) != 0 && v5 )
      v4 ^= v5;
    else
      v4 = v5;
  }
  if ( v4 )
    RtlRbRemoveNode((__int64)&RtlpPtrTree, v4);
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !v4 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v4 + 32);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return 0LL;
}

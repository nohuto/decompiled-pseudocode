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

__int64 __fastcall RtlRemovePointerMapping(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpPtrTreeLock, (unsigned __int64)a2, a3, a4);
  v6 = RtlpPtrTree;
  if ( (qword_180177EC0 & 1) != 0 && RtlpPtrTree )
    v6 = (unsigned __int64)&RtlpPtrTree ^ RtlpPtrTree;
  while ( v6 )
  {
    if ( a1 - *(_QWORD *)(v6 + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(v6 + 24) <= 0 )
      {
        RtlRbRemoveNode((unsigned __int64 *)&RtlpPtrTree, v6);
        break;
      }
      v7 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v6;
    }
    if ( (qword_180177EC0 & 1) != 0 && v7 )
      v6 ^= v7;
    else
      v6 = v7;
  }
  RtlReleaseSRWLockExclusive(&RtlpPtrTreeLock);
  if ( !v6 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(v6 + 32);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return 0LL;
}

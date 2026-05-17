/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x180104450
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1)
{
  _UNKNOWN **i; // rbx
  _QWORD *v5; // rdx
  void **v6; // rax

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  for ( i = (_UNKNOWN **)RtlpSecMemListHead; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v6 = (void **)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}

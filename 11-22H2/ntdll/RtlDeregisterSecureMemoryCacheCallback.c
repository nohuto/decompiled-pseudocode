/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x180103040
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDeregisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  PRTL_SECURE_MEMORY_CACHE_CALLBACK *i; // rbx
  NTSTATUS result; // eax
  PRTL_SECURE_MEMORY_CACHE_CALLBACK v5; // rdx
  PVOID *v6; // rax

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  for ( i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)RtlpSecMemListHead; ; i = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)*i )
  {
    if ( i == (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)&RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      LOBYTE(result) = 0;
      return result;
    }
    if ( i[3] == Callback )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((PRTL_SECURE_MEMORY_CACHE_CALLBACK **)*i + 1) != i || (v6 = (PVOID *)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  LOBYTE(result) = 1;
  return result;
}

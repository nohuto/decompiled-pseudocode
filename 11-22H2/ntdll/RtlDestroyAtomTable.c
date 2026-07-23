/*
 * XREFs of RtlDestroyAtomTable @ 0x18008BBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180003A9C (RtlpLockAtomTable.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlDestroyHandleTable @ 0x180088BC0 (RtlDestroyHandleTable.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlDestroyAtomTable(PVOID AtomTableHandle)
{
  unsigned int v2; // ebp
  _QWORD **i; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)AtomTableHandle + 1, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable((__int64)AtomTableHandle) )
  {
    v2 = 0;
    for ( i = (_QWORD **)((char *)AtomTableHandle + 72); v2 < *((_DWORD *)AtomTableHandle + 16); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        *v5 = 0LL;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    *(_DWORD *)AtomTableHandle = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
    RtlDestroyHandleTable((PRTL_HANDLE_TABLE)((char *)AtomTableHandle + 16));
    memset_thunk_772440563353939046(AtomTableHandle, 0, 0x50uLL);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AtomTableHandle);
    return 0;
  }
  return -1073741811;
}

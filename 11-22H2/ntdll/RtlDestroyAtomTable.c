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

__int64 __fastcall RtlDestroyAtomTable(char *a1)
{
  unsigned int v2; // ebp
  _QWORD **i; // rsi
  _QWORD *v4; // rdi
  _QWORD *v5; // r8

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 1, 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( RtlpLockAtomTable(a1) )
  {
    v2 = 0;
    for ( i = (_QWORD **)(a1 + 72); v2 < *((_DWORD *)a1 + 16); ++v2 )
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
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v5);
      }
    }
    *(_DWORD *)a1 = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1 + 1);
    RtlDestroyHandleTable((__int64)(a1 + 16));
    memset_thunk_772440563353939046(a1, 0, 0x50uLL);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
    return 0LL;
  }
  return 3221225485LL;
}

/*
 * XREFs of SdbpCleanupUserSDBCache @ 0x1800927D0
 * Callers:
 *     SdbReleaseDatabase @ 0x180090694 (SdbReleaseDatabase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SdbpCleanupUserSDBCache(__int64 a1)
{
  _QWORD **i; // rdx
  BOOLEAN result; // al

  if ( a1 )
  {
    for ( i = *(_QWORD ***)(a1 + 576); i; i = *(_QWORD ***)(a1 + 576) )
    {
      if ( i[1] == i )
      {
        *(_QWORD *)(a1 + 576) = 0LL;
      }
      else
      {
        *(_QWORD *)(a1 + 576) = *i;
        *i[1] = *i;
        (*i)[1] = i[1];
      }
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
    }
  }
  return result;
}

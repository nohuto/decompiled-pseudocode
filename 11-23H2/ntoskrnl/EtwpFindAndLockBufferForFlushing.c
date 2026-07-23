/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x1408A82F4
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _QWORD *v3; // r9
  __int64 v4; // rcx

  v2 = (_QWORD *)(a1 + 80);
  v3 = *(_QWORD **)(a1 + 80);
  if ( v3 != (_QWORD *)(a1 + 80) )
  {
    while ( v3 )
    {
      v4 = v3[2];
      if ( *(_QWORD *)(v4 + 24) == a2 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
          return 0LL;
        if ( *(_QWORD *)(v4 + 24) == a2 )
          return v4;
        _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
        return 0LL;
      }
      v3 = (_QWORD *)*v3;
      if ( v3 == v2 )
        v3 = 0LL;
    }
  }
  return 0LL;
}

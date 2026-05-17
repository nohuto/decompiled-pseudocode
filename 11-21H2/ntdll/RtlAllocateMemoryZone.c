/*
 * XREFs of RtlAllocateMemoryZone @ 0x18012B120
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180080BB0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x180116598 (RtlpInitializeStackTraceLog.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18012B010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAllocateMemoryZone(__int64 a1, __int64 a2, signed __int64 *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r9
  signed __int64 v7; // r8

  *a3 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = a2 + 7;
  v5 = *(_QWORD **)(a1 + 48);
  v6 = v4 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v5 )
  {
    while ( 1 )
    {
      v7 = v5[2];
      if ( v6 > v5[3] - v7 )
        break;
      if ( v7 == _InterlockedCompareExchange64(v5 + 2, v7 + v6, v7) )
      {
        *a3 = v7;
        return 0LL;
      }
    }
    v5 = (_QWORD *)*v5;
  }
  return 3221225626LL;
}

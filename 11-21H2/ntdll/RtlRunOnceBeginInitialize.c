/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180059A60
 * Callers:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180059A04 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1801151E0 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180115FAC (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x18005B4E4 (RtlpRunOnceWaitForInit.c)
 */

__int64 __fastcall RtlRunOnceBeginInitialize(volatile signed __int64 *a1, int a2, unsigned __int64 *a3)
{
  signed __int64 v5; // rax
  unsigned int v6; // edi
  int v8; // ebx
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFFC) != 0 )
    return 3221225712LL;
  v5 = *a1;
  v6 = 0;
  if ( (*a1 & 3) == 2 )
  {
LABEL_3:
    if ( a3 )
      *a3 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    return v6;
  }
  if ( (a2 & 1) == 0 )
  {
    v8 = a2 & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5 & 3;
        if ( (v5 & 3) != 0 )
          break;
        v10 = v5;
        v5 = _InterlockedCompareExchange64(a1, v8 != 0 ? 3LL : 1LL, v5);
        if ( v10 == v5 )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return (unsigned int)-1073741584;
      v5 = RtlpRunOnceWaitForInit(v5, a1);
    }
    if ( v9 != 3 )
      goto LABEL_3;
    return v8 != 0 ? 259 : -1073741584;
  }
  return 3221225473LL;
}

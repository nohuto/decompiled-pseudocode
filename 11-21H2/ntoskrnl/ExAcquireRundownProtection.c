/*
 * XREFs of ExAcquireRundownProtection @ 0x1402201B0
 * Callers:
 *     ExAcquireRundownProtectionCacheAware @ 0x140220160 (ExAcquireRundownProtectionCacheAware.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  ULONG_PTR Count; // rax
  ULONG_PTR v2; // rtt

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v2 = Count;
    Count = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count + 2, Count);
    if ( v2 == Count )
      break;
    if ( (Count & 1) != 0 )
      return 0;
  }
  return 1;
}

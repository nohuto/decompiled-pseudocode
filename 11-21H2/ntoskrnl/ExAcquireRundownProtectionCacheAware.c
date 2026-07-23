/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x140220160
 * Callers:
 *     sub_14031BAB0 @ 0x14031BAB0 (sub_14031BAB0.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402201B0 (ExAcquireRundownProtection.c)
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)RunRefCacheAware
                                + (unsigned int)(*((_DWORD *)RunRefCacheAware + 4)
                                               * (HIDWORD(KeGetPcr()[1].LockArray) % *((_DWORD *)RunRefCacheAware + 5))));
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) )
    return 1;
  else
    return ExAcquireRundownProtection(v1);
}

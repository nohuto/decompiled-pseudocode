/*
 * XREFs of ExReleaseRundownProtectionCacheAware @ 0x140221D90
 * Callers:
 *     sub_1402B7320 @ 0x1402B7320 (sub_1402B7320.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  signed __int64 *v1; // rdx
  signed __int64 v2; // r8
  unsigned __int64 v3; // r8

  v1 = (signed __int64 *)(*(_QWORD *)RunRefCacheAware
                        + (unsigned int)(*((_DWORD *)RunRefCacheAware + 4)
                                       * (HIDWORD(KeGetPcr()[1].LockArray) % *((_DWORD *)RunRefCacheAware + 5))));
  _m_prefetchw(v1);
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( (*v1 & 1) != 0 )
        break;
      if ( v2 == _InterlockedCompareExchange64(v1, v2 - 2, v2) )
        return;
    }
    if ( v2 != 1 )
      break;
    v1 = *(signed __int64 **)RunRefCacheAware;
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
}

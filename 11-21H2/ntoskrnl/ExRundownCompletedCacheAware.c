/*
 * XREFs of ExRundownCompletedCacheAware @ 0x1402D3210
 * Callers:
 *     ExReInitializeRundownProtectionCacheAware @ 0x1402D31C0 (ExReInitializeRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompletedCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  int v4; // edx

  v2 = 0;
  v3 = *((_DWORD *)RunRefCacheAware + 5);
  if ( v3 )
  {
    do
    {
      v4 = v2 % v3;
      ++v2;
      _InterlockedExchange64(
        (volatile __int64 *)(*(_QWORD *)RunRefCacheAware + (unsigned int)(*((_DWORD *)RunRefCacheAware + 4) * v4)),
        1LL);
      v3 = *((_DWORD *)RunRefCacheAware + 5);
    }
    while ( v2 < v3 );
  }
}

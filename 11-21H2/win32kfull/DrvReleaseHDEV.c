/*
 * XREFs of DrvReleaseHDEV @ 0x1C0271858
 * Callers:
 *     xxxRemoteConsoleShadowStop @ 0x1C02208E4 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

__int64 DrvReleaseHDEV()
{
  __int64 v0; // rbx
  __int64 result; // rax
  struct PDEV *i; // rcx

  v0 = gConsoleShadowhDev;
  result = WdLogSingleEntry1(5LL, gConsoleShadowhDev);
  if ( v0 )
  {
    GreAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    for ( i = gppdevList; i; i = *(struct PDEV **)i )
    {
      if ( i == (struct PDEV *)v0 )
      {
        PDEV::DecrementClientReferenceCount(i);
        break;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    return GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  }
  return result;
}

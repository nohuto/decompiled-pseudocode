/*
 * XREFs of PdcPoPpmResetProfile @ 0x1409979D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x14082BD28 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14099D184 (PpmDisableProfile.c)
 */

void __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  if ( (PpmProfileStatus & 2) == 0 )
  {
    if ( a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      PpmEnableProfile(a1);
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmDisableProfile();
    }
  }
}

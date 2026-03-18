/*
 * XREFs of PdcPoPpmResetProfile @ 0x140997A80
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x14082D878 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14099D234 (PpmDisableProfile.c)
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

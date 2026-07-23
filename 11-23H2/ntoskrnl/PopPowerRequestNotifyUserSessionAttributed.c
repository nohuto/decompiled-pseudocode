/*
 * XREFs of PopPowerRequestNotifyUserSessionAttributed @ 0x140981A14
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1409A48D0 (TtmNotifySessionPowerRequestPresent.c)
 */

void __fastcall PopPowerRequestNotifyUserSessionAttributed(int a1, PVOID a2, void *a3)
{
  PVOID *v4; // rbx
  char v5; // di
  PVOID *i; // rax

  v4 = 0LL;
  v5 = 0;
  PopAcquirePowerRequestPushLock(1);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    v4 = i;
    if ( *((_DWORD *)i + 26) == a1 && i[14] == a2 )
    {
      i[15] = a3;
      v5 = 1;
      break;
    }
  }
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  if ( v5 )
  {
    if ( TtmIsEnabled() )
      TtmNotifySessionPowerRequestPresent(
        *((_DWORD *)v4 + 4),
        *((_DWORD *)v4 + 9),
        *((_DWORD *)v4 + 26),
        (unsigned int)v4[14],
        (__int64)v4[15]);
  }
}

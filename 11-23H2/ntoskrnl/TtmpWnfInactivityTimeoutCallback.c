/*
 * XREFs of TtmpWnfInactivityTimeoutCallback @ 0x1409AC050
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExQueryWnfStateData @ 0x1407E2490 (ExQueryWnfStateData.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1409A8880 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiResetInactivityTimer @ 0x1409AB36C (TtmiResetInactivityTimer.c)
 */

__int64 __fastcall TtmpWnfInactivityTimeoutCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  v1 = ExQueryWnfStateData(a1, &v5, v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 == 4 )
    {
      ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
      TtmpTerminalInactivityTimeout = -(__int64)(unsigned int)(10000 * v4[0]);
      TtmiLogInactivityTimoutUpdate(v4[0]);
      ExReleaseResourceLite(&TtmpTerminalInactivityLock);
      TtmiResetInactivityTimer(13);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}

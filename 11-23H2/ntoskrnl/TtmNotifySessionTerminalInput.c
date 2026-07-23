/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1409A49E8
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1409A5130 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1409AB40C (TtmiResetTerminalTimeouts.c)
 */

void __fastcall TtmNotifySessionTerminalInput(unsigned int a1, int a2, char a3)
{
  int v5; // eax
  __int64 *i; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = TtmpAcquireSessionById(&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = *(__int64 **)(v7 + 40); i != (__int64 *)(v7 + 40); i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 7) == a2 )
      {
        TtmiResetTerminalTimeouts(v7, (_DWORD)i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 4213LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}

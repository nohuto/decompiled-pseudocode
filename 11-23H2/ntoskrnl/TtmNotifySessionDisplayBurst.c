/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1409A4524
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403848D0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1409A5130 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1409AB40C (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(unsigned int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById(&v7, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( a2 == 5 )
    {
      v5 = 1111769921;
    }
    else
    {
      v5 = 1111778643;
      if ( a2 == 16 )
        v5 = 1111769922;
    }
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, v5, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 3280LL, (unsigned int)v3, (unsigned int)v3);
  }
  return v4;
}

/*
 * XREFs of PnprQuiesceDevices @ 0x140A9D174
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PoStartPartitionReplace @ 0x1409898A8 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1409898E4 (PoStartPowerStateTasks.c)
 *     PoInitializeBroadcast @ 0x14098BDE4 (PoInitializeBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140A9C724 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprQuiesceDevices(__int64 a1)
{
  int started; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax

  *(_DWORD *)(PnprContext + 33312) = PnprGetMillisecondCounter(0);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)a1 = -2013265920;
  *(_DWORD *)(a1 + 48) = -2013265920;
  *(_DWORD *)(a1 + 40) = 2;
  *(_DWORD *)(a1 + 44) = 5;
  *(_DWORD *)(a1 + 32) = PoBlockConsoleSwitch(a1 + 36);
  started = PoStartPowerStateTasks((_DWORD *)(a1 + 36));
  if ( started >= 0 )
  {
    PoStartPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 8) = 5;
    *(_DWORD *)(a1 + 16) = 1;
    *(_DWORD *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 24) = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 12) = 5;
    *(_DWORD *)(a1 + 20) = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      *(_BYTE *)(a1 + 30) = 3;
      PoBroadcastSystemState(a1 + 4);
      *(_BYTE *)(a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 4);
      if ( started >= 0 )
        goto LABEL_16;
      v6 = 2005;
    }
    else
    {
      v6 = 1987;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33272);
    if ( !v8 )
      v8 = v6;
    *(_DWORD *)(PnprContext + 33272) = v8;
    v9 = *(_DWORD *)(v7 + 33276);
    if ( !v9 )
      v9 = 7;
    *(_DWORD *)(v7 + 33276) = v9;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 33272);
    if ( !v4 )
      v4 = 1964;
    v5 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 33276) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 33316) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}

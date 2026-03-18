/*
 * XREFs of MonitorGetLidStateFromMonitor @ 0x1C03B05C4
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetLidStateFromMonitor(__int64 a1, bool *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char v6; // al
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v7, a1);
    v4 = v7;
    if ( v7 )
    {
      v6 = *(_BYTE *)(v7 + 176);
      if ( (v6 & 2) != 0 )
      {
        *a2 = (v6 & 4) != 0;
        v5 = 0;
      }
      else
      {
        v5 = -1073741811;
      }
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}

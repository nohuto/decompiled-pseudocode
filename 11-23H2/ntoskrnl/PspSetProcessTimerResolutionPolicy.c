/*
 * XREFs of PspSetProcessTimerResolutionPolicy @ 0x1407DFED0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExpUpdateTimerResolution @ 0x14036508C (ExpUpdateTimerResolution.c)
 *     PoTraceSystemTimerResolutionIgnore @ 0x140591758 (PoTraceSystemTimerResolutionIgnore.c)
 *     ExAcquireTimeRefreshLock @ 0x14075FB44 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall PspSetProcessTimerResolutionPolicy(__int64 a1, int a2)
{
  int v2; // r8d

  if ( KeDisableLowQosTimerResolution )
  {
    v2 = *(_DWORD *)(a1 + 2172);
    if ( a2 )
    {
      if ( (v2 & 0x4000000) == 0 )
        return;
      _InterlockedAnd((volatile signed __int32 *)(a1 + 2172), 0xFBFFFFFF);
    }
    else
    {
      if ( (v2 & 0x4000000) != 0 )
        return;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2172), 0x4000000u);
    }
    if ( (*(_DWORD *)(a1 + 1124) & 0x1000) != 0 )
    {
      PoTraceSystemTimerResolutionIgnore(a1);
      ExAcquireTimeRefreshLock(1u);
      ExpUpdateTimerResolution(0, 0, 0LL);
      ExReleaseResourceLite(&ExpTimeRefreshLock);
      KeLeaveCriticalRegion();
    }
  }
}

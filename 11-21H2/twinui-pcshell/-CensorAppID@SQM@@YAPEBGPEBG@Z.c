/*
 * XREFs of ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800C4C94
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800C4A50 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1803B8B04 (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x180592414 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 *     ?AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z @ 0x180592568 (-AppUnsnapped_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@@Z.c)
 *     ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x180595D80 (-SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapCo.c)
 *     ?InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z @ 0x180598E90 (-InvalidAppInEnumeration_@CSnapComponentTelemetry@@QEBAXPEBGPEAUIApplicationViewPosition@@@Z.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@2@Z @ 0x1805991F8 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z @ 0x1805A0B20 (-SnappedAppUsage_@CSnapComponentTelemetry@@QEBAXPEBGPEAUHWND__@@_J@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall SQM::CensorAppID(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v2;
}

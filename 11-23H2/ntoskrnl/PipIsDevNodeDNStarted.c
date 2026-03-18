/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14022B180
 * Callers:
 *     PipSetDevNodeState @ 0x14022AE84 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B6F88 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCBC (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF34 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862C44 (PnpDriverLoadingFailed.c)
 *     PnpProcessDependencyRelations @ 0x140868E4C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140868FA0 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgLogDeviceStarted @ 0x1408799CC (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x14096D880 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      result = 1LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}

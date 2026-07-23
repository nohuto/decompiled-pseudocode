/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14022B290
 * Callers:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B7168 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCEC (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBF64 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1408350D0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862E84 (PnpDriverLoadingFailed.c)
 *     PnpProcessDependencyRelations @ 0x14086908C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1408691E0 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgLogDeviceStarted @ 0x140879C0C (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgConfigureDevice @ 0x14087A974 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x14096DA80 (PiControlGetDevicePowerData.c)
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

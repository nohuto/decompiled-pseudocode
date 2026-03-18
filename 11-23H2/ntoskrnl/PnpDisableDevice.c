/*
 * XREFs of PnpDisableDevice @ 0x140958918
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140795748 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D88E4 (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x14086919C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408692EC (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x14086977C (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D11C (PiIrpQueryRemoveDevice.c)
 */

void __fastcall PnpDisableDevice(__int64 a1, int a2)
{
  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
      goto LABEL_4;
    case 0x305:
    case 0x306:
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
      {
LABEL_4:
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 2);
        IopReleaseDeviceResources((__int64 *)a1, 1);
      }
      else
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
      }
      break;
    default:
      break;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  PipSetDevNodeProblem(a1, a2, 0);
}

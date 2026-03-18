/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x140958F3C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140868428 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1403B6F88 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x1407906BC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407933E0 (PipClearDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C174 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 */

void __fastcall PnpCancelRemoveLockedDeviceNode(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 786 )
  {
    PipSetDevNodeUserFlags(a1, 512);
    IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    PipClearDevNodeUserFlags(a1, 512);
    PipRestoreDevNodeState(a1);
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
}

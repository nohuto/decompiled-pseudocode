/*
 * XREFs of PnpCancelRemoveLockedDeviceNode @ 0x14095913C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140868668 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x1403B7168 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14079C364 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IopRemoveDevice @ 0x140869BA8 (IopRemoveDevice.c)
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

/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140793B70
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x1405E12D0 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081C690 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081DAC4 (PiSwDeviceInterfaceSetState.c)
 *     PnpDisableDeviceInterfaces @ 0x140883160 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}

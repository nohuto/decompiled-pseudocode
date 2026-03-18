/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140793660
 * Callers:
 *     DifIoSetDeviceInterfaceStateWrapper @ 0x1405E1240 (DifIoSetDeviceInterfaceStateWrapper.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081A110 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081B544 (PiSwDeviceInterfaceSetState.c)
 *     PnpDisableDeviceInterfaces @ 0x140882C90 (PnpDisableDeviceInterfaces.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
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

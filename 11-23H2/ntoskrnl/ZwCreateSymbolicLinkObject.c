/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14041C620
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1405EEEC0 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1407AF750 (SeGetTokenDeviceMap.c)
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     ObpInitializeRootNamespace @ 0x14081BA84 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140858660 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1409472A0 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD78C (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

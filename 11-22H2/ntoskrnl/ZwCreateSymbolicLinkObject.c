/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14041BF60
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1405EEF50 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1407AFD00 (SeGetTokenDeviceMap.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     ObpInitializeRootNamespace @ 0x14081E004 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408596D0 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140947350 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD83C (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6CFB4 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

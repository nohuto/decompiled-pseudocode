/*
 * XREFs of IopAllocateUnicodeString @ 0x140793EC8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PnpConcatenateUnicodeStrings @ 0x140793814 (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140793DAC (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeferSetInterfaceState @ 0x140871FD0 (PiDeferSetInterfaceState.c)
 *     PiOpenDriverRedirectedStateKey @ 0x14087C460 (PiOpenDriverRedirectedStateKey.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x140955760 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiCreateServiceKeyUnderPath @ 0x140955E38 (PiCreateServiceKeyUnderPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x140956244 (PiGetDriverMutableStateDirectory.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 * Callees:
 *     RtlUShortAdd @ 0x140322854 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopAllocateUnicodeString(__int64 a1, USHORT a2)
{
  _WORD *v2; // rdi
  NTSTATUS v4; // ebx
  __int64 Pool2; // rax

  v2 = (_WORD *)(a1 + 2);
  *(_WORD *)a1 = 0;
  v4 = RtlUShortAdd(a2, 2u, (USHORT *)(a1 + 2));
  if ( v4 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, (unsigned __int16)*v2, 1970499664LL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
    {
      *v2 = 0;
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

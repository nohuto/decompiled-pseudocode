/*
 * XREFs of IopAllocateUnicodeString @ 0x140769784
 * Callers:
 *     PiCreateDriverRedirectedStateKey @ 0x1406DF254 (PiCreateDriverRedirectedStateKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x1406DF440 (PiOpenDriverRedirectedStateKey.c)
 *     PiDeferSetInterfaceState @ 0x140769010 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407690BC (PnpConcatenateUnicodeStrings.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140769668 (IopBuildGlobalSymbolicLinkString.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x1409439F8 (PiBuildAndOpenDeviceDirectoryPath.c)
 *     PiGetDriverMutableStateDirectory @ 0x140944218 (PiGetDriverMutableStateDirectory.c)
 * Callees:
 *     RtlUShortAdd @ 0x1402DE190 (RtlUShortAdd.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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

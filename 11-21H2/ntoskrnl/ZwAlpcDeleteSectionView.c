/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x14041C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcDeleteSectionView(HANDLE PortHandle, ULONG Flags, PVOID ViewBase)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}

/*
 * XREFs of ZwAlpcCreateSectionView @ 0x14041C720
 * Callers:
 *     sub_14061D460 @ 0x14061D460 (sub_14061D460.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}

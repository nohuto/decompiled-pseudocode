/*
 * XREFs of ZwAlpcCreatePortSection @ 0x14041C6E0
 * Callers:
 *     sub_14061D070 @ 0x14061D070 (sub_14061D070.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}

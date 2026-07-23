/*
 * XREFs of ZwAlpcCreatePort @ 0x14041C6C0
 * Callers:
 *     sub_14061D1E0 @ 0x14061D1E0 (sub_14061D1E0.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, ObjectAttributes);
}

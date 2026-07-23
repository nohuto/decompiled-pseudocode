/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14041DDE0
 * Callers:
 *     sub_140622870 @ 0x140622870 (sub_140622870.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_1406BB4A0 @ 0x1406BB4A0 (sub_1406BB4A0.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_140803050 @ 0x140803050 (sub_140803050.c)
 *     IoDeleteSymbolicLink @ 0x140811120 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x1409375D0 (IoIsValidNameGraftingBuffer.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     sub_140A228D0 @ 0x140A228D0 (sub_140A228D0.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(LinkHandle, *(_QWORD *)&DesiredAccess);
}

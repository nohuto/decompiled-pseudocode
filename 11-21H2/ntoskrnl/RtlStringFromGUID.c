/*
 * XREFs of RtlStringFromGUID @ 0x140745490
 * Callers:
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 *     sub_140B2C034 @ 0x140B2C034 (sub_140B2C034.c)
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 *     sub_140B30F30 @ 0x140B30F30 (sub_140B30F30.c)
 *     sub_140B5400C @ 0x140B5400C (sub_140B5400C.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  char v2; // r8

  v2 = 1;
  return sub_1407454A8(Guid, GuidString, v2);
}

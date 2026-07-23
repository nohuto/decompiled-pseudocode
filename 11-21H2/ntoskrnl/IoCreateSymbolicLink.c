/*
 * XREFs of IoCreateSymbolicLink @ 0x1406C4C40
 * Callers:
 *     sub_14060E310 @ 0x14060E310 (sub_14060E310.c)
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x1406C4C80 (IoCreateSymbolicLink2.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  UNICODE_STRING v2; // xmm0
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v5; // [rsp+28h] [rbp-20h]

  v2 = *DeviceName;
  v4[0] = 0;
  v4[1] = 0;
  v5 = v2;
  return IoCreateSymbolicLink2(SymbolicLinkName, v4);
}

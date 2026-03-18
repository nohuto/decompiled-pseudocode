/*
 * XREFs of IoCreateSymbolicLink @ 0x1406C4C40
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x14060E310 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
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

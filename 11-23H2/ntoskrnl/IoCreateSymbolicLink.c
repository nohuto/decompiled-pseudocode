/*
 * XREFs of IoCreateSymbolicLink @ 0x14086FEA0
 * Callers:
 *     DifIoCreateSymbolicLinkWrapper @ 0x1405DEDF0 (DifIoCreateSymbolicLinkWrapper.c)
 *     IopCreateArcName @ 0x14086FA68 (IopCreateArcName.c)
 *     WmipDriverEntry @ 0x140B38E50 (WmipDriverEntry.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     CimfsInitialize @ 0x140B74594 (CimfsInitialize.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     IoCreateSymbolicLink2 @ 0x14086FEE0 (IoCreateSymbolicLink2.c)
 */

NTSTATUS __stdcall IoCreateSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v4[2]; // [rsp+24h] [rbp-24h]

  v3 = 0;
  v4[0] = 0LL;
  *(UNICODE_STRING *)((char *)v4 + 4) = *DeviceName;
  return IoCreateSymbolicLink2(SymbolicLinkName, &v3);
}

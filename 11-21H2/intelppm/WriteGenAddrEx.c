/*
 * XREFs of WriteGenAddrEx @ 0x1C0002034
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000200C (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpc @ 0x1C0004040 (PerfControlCpc.c)
 *     WriteGenAddrHiddenEx @ 0x1C000740C (WriteGenAddrHiddenEx.c)
 * Callees:
 *     WriteIoMemRawEx @ 0x1C0001B38 (WriteIoMemRawEx.c)
 *     WriteGenAddr @ 0x1C000205C (WriteGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0002290 (ReadIoMemRawEx.c)
 */

__int64 __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl

  v3 = (__int64)a1;
  if ( *a1 == 127 || *a1 == 1 )
    return WriteGenAddr();
  if ( a1[2] || a1[1] != 64 )
  {
    IoMemRaw = ReadIoMemRawEx(a1);
    v6 = *(_BYTE *)(v3 + 1);
    if ( v6 < 0x40u || *(_BYTE *)(v3 + 2) )
      a2 = IoMemRaw & ~(((1LL << v6) - 1) << *(_BYTE *)(v3 + 2)) | (((1LL << v6) - 1) << *(_BYTE *)(v3 + 2)) & (a2 << *(_BYTE *)(v3 + 2));
  }
  return WriteIoMemRawEx(v3, a2);
}

/*
 * XREFs of WriteGenAddrEx @ 0x1C0002910
 * Callers:
 *     PerfControlCpc @ 0x1C00018F0 (PerfControlCpc.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00021C4 (WriteGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C00027B4 (WriteGenAddrHiddenEx.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0002990 (WriteGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0003E08 (ReadIoMemRawEx.c)
 *     WriteIoMemRawEx @ 0x1C0003FEC (WriteIoMemRawEx.c)
 */

__int64 __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( *a1 == 1 || *a1 == 127 )
    return WriteGenAddr(a1, a2);
  if ( a1[2] || a1[1] != 64 )
  {
    IoMemRaw = ReadIoMemRawEx(a1);
    v5 = v3[1];
    if ( v5 < 0x40u || v3[2] )
      v2 = IoMemRaw & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
  }
  return WriteIoMemRawEx(v3, v2);
}

/*
 * XREFs of WriteGenAddrEx @ 0x1C0001CA8
 * Callers:
 *     WriteGenAddrHiddenEx @ 0x1C00018D4 (WriteGenAddrHiddenEx.c)
 *     PerfControlCpc @ 0x1C0001910 (PerfControlCpc.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0001C68 (WriteGenAddrMaybeHiddenEx.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0001BF8 (WriteGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0003B30 (ReadIoMemRawEx.c)
 *     WriteIoMemRawEx @ 0x1C0003D04 (WriteIoMemRawEx.c)
 */

void __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl

  v3 = a2;
  v4 = a1;
  if ( *a1 == 1 || *a1 == 127 )
  {
    WriteGenAddr(a1, a2, a3);
  }
  else
  {
    if ( a1[2] || a1[1] != 64 )
    {
      IoMemRaw = ReadIoMemRawEx(a1);
      v6 = v4[1];
      if ( v6 < 0x40u || v4[2] )
        v3 = IoMemRaw & ~(((1LL << v6) - 1) << v4[2]) | (((1LL << v6) - 1) << v4[2]) & (v3 << v4[2]);
    }
    WriteIoMemRawEx(v4, v3);
  }
}

/*
 * XREFs of ReadGenAddrEx @ 0x1C00039B0
 * Callers:
 *     ReadGenAddrHiddenEx @ 0x1C0003A70 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     GetCpcDifferentialFeedback @ 0x1C0004980 (GetCpcDifferentialFeedback.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0003B30 (ReadIoMemRawEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrEx(_BYTE *a1)
{
  unsigned __int64 IoMemRaw; // rax
  unsigned __int64 v3; // r11
  char v4; // cl
  unsigned __int8 v5; // cl

  if ( *a1 == 1 || (unsigned __int8)(*a1 - 126) <= 1u )
    return ReadGenAddr((__int64)a1);
  IoMemRaw = ReadIoMemRawEx(a1);
  v3 = IoMemRaw;
  if ( IoMemRaw )
  {
    v4 = a1[2];
    if ( v4 )
      v3 = IoMemRaw >> v4;
    v5 = a1[1];
    if ( v5 < 0x40u )
      v3 &= (1LL << v5) - 1;
  }
  return v3;
}

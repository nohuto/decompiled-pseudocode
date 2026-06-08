/*
 * XREFs of ReadGenAddrEx @ 0x1C0003448
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003424 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C00089D4 (ReadGenAddrHiddenEx.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C00027F8 (ReadIoMemRawEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrEx(unsigned __int8 *a1)
{
  unsigned __int8 v2; // cl
  unsigned __int64 IoMemRaw; // rax
  unsigned __int64 v5; // r11
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl

  v2 = *a1;
  if ( (unsigned __int8)(v2 - 126) <= 1u || v2 == 1 )
    return ReadGenAddr(a1);
  IoMemRaw = ReadIoMemRawEx((__int64)a1);
  v5 = IoMemRaw;
  if ( IoMemRaw )
  {
    v6 = a1[2];
    if ( v6 )
      v5 = IoMemRaw >> v6;
    v7 = a1[1];
    if ( v7 < 0x40u )
      v5 &= (1LL << v7) - 1;
  }
  return v5;
}

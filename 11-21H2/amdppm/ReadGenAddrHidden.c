/*
 * XREFs of ReadGenAddrHidden @ 0x1C0003A0C
 * Callers:
 *     ReadGenAddrHiddenEx @ 0x1C0003A70 (ReadGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x1C0009080 (SetPerfStateIOHidden.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 *     ReadIoMemRawHidden @ 0x1C0003C08 (ReadIoMemRawHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v4; // r11
  unsigned __int64 IoMemRawHidden; // rax
  char v6; // cl
  unsigned __int8 v7; // cl

  if ( !a2 )
    return 0LL;
  if ( *a2 == 126 )
    return ReadGenAddr((__int64)a2);
  IoMemRawHidden = ReadIoMemRawHidden();
  v4 = IoMemRawHidden;
  if ( IoMemRawHidden )
  {
    v6 = a2[2];
    if ( v6 )
      v4 = IoMemRawHidden >> v6;
    v7 = a2[1];
    if ( v7 < 0x40u )
      v4 &= (1LL << v7) - 1;
  }
  return v4;
}

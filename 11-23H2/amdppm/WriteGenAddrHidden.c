/*
 * XREFs of WriteGenAddrHidden @ 0x1C0002804
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0002174 (WriteGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C00027D0 (WriteGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x1C0009DC0 (SetPerfStateIOHidden.c)
 * Callees:
 *     WriteIoMemRawHidden @ 0x1C0002898 (WriteIoMemRawHidden.c)
 */

__int64 __fastcall WriteGenAddrHidden(unsigned int a1, _BYTE *a2, __int64 a3)
{
  char v3; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // bl
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // rdx

  v3 = a2[2];
  if ( v3 || a2[1] != a2[3] )
  {
    v7 = a2[1];
    v8 = ((1LL << v7) - 1) << v3;
    v9 = a2[3];
    if ( v9 == 64 )
      v10 = -1LL;
    else
      v10 = (1LL << v9) - 1;
    v6 = ~v8 & v10;
    if ( v7 < 0x40u || v3 )
      a3 = v8 & (a3 << v3);
  }
  else
  {
    v6 = 0LL;
  }
  return WriteIoMemRawHidden(a1, a2, v6, a3);
}

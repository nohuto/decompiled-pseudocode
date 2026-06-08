/*
 * XREFs of WriteGenAddrHidden @ 0x1C000737C
 * Callers:
 *     WriteGenAddrHiddenEx @ 0x1C000740C (WriteGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x1C000BDE0 (SetPerfStateIOHidden.c)
 * Callees:
 *     WriteIoMemRawHidden @ 0x1C0007440 (WriteIoMemRawHidden.c)
 */

__int64 __fastcall WriteGenAddrHidden(unsigned int a1, _BYTE *a2, __int64 a3)
{
  char v3; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  char v7; // cl
  __int64 v8; // r10

  v3 = a2[2];
  if ( v3 || a2[1] != a2[3] )
  {
    v6 = ((1LL << a2[1]) - 1) << v3;
    v7 = a2[3];
    if ( v7 == 64 )
      v8 = -1LL;
    else
      v8 = (1LL << v7) - 1;
    v5 = ~v6 & v8;
    if ( a2[1] < 0x40u || v3 )
      a3 = v6 & (a3 << v3);
  }
  else
  {
    v5 = 0LL;
  }
  return WriteIoMemRawHidden(a1, a2, v5, a3);
}

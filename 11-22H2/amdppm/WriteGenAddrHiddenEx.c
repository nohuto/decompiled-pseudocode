/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C00027B4
 * Callers:
 *     PerfControlCpcHidden @ 0x1C0004D80 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C00027E8 (WriteGenAddrHidden.c)
 *     WriteGenAddrEx @ 0x1C0002910 (WriteGenAddrEx.c)
 */

__int64 __fastcall WriteGenAddrHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1);
  else
    return WriteGenAddrEx(a2, a3);
}

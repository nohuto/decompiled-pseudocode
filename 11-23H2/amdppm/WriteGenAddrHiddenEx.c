/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C00027D0
 * Callers:
 *     PerfControlCpcHidden @ 0x1C00053D0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C0002804 (WriteGenAddrHidden.c)
 *     WriteGenAddrEx @ 0x1C000292C (WriteGenAddrEx.c)
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

/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C0008B30
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000259C (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1C0008F40 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C00025C4 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C0008A9C (WriteGenAddrHidden.c)
 */

__int64 __fastcall WriteGenAddrHiddenEx(unsigned int a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2, a3);
  else
    return WriteGenAddrEx(a2, a3);
}

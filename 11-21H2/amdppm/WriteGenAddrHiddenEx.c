/*
 * XREFs of WriteGenAddrHiddenEx @ 0x1C00018D4
 * Callers:
 *     PerfControlCpcHidden @ 0x1C00049D0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0001CA8 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C0001D28 (WriteGenAddrHidden.c)
 */

__int64 __fastcall WriteGenAddrHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2);
  else
    return WriteGenAddrEx(a2, a3);
}

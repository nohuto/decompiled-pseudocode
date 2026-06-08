/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C0003A70
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C00039B0 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0003A0C (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}

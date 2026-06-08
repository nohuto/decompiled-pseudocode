/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C0003D84
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003DB8 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0003CC4 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0003D20 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}

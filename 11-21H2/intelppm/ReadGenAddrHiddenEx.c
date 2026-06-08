/*
 * XREFs of ReadGenAddrHiddenEx @ 0x1C00072B4
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1C00024D8 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C00024FC (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x1C0007250 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, unsigned __int8 *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}

/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0003D78
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C0023D6C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0024014 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0003C84 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0003D44 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}

/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C00024D8
 * Callers:
 *     PctDiscoverPlatformCtrs @ 0x1C0024D20 (PctDiscoverPlatformCtrs.c)
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00362A0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0036564 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C00024FC (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C00072B4 (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}

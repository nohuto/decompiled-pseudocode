/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0003424
 * Callers:
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00374CC (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0037788 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0003448 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C00089D4 (ReadGenAddrHiddenEx.c)
 */

__int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return ReadGenAddrEx(a2);
}

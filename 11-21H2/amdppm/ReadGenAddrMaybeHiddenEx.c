/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C00230F0 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00233A4 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C00039B0 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0003A70 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}

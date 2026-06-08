/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0003DB8
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002461C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00248C4 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0003CC4 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0003D84 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}

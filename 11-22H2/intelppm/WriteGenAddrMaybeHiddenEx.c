/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C000259C
 * Callers:
 *     CpcReinitializeHandler @ 0x1C00024C0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0008DF0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0008E40 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0008E70 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C00025C4 (WriteGenAddrEx.c)
 *     WriteGenAddrHiddenEx @ 0x1C0008B30 (WriteGenAddrHiddenEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) )
    return WriteGenAddrHiddenEx(*(unsigned int *)(a1 + 84));
  else
    return WriteGenAddrEx(a2, a3);
}

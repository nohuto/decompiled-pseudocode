/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C00021C4
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0004BC0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004C30 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C0004C80 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0004CB0 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C00027E8 (WriteGenAddrHidden.c)
 *     WriteGenAddrEx @ 0x1C0002910 (WriteGenAddrEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) && (*a2 == 1 || *a2 == 127) )
    return WriteGenAddrHidden(*(unsigned int *)(a1 + 84));
  else
    return WriteGenAddrEx(a2, a3);
}

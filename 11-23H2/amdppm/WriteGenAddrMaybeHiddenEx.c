/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C0002174
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0005210 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0005280 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00052D0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0005300 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrHidden @ 0x1C0002804 (WriteGenAddrHidden.c)
 *     WriteGenAddrEx @ 0x1C000292C (WriteGenAddrEx.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) && (*a2 == 1 || *a2 == 127) )
    return WriteGenAddrHidden(*(unsigned int *)(a1 + 84));
  else
    return WriteGenAddrEx(a2, a3);
}

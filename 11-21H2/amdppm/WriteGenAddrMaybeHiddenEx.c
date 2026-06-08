/*
 * XREFs of WriteGenAddrMaybeHiddenEx @ 0x1C0001C68
 * Callers:
 *     CpcReinitializeHandler @ 0x1C0004810 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004880 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00048D0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0004900 (CpcSetTimeWindow.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1C0001CA8 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1C0001D28 (WriteGenAddrHidden.c)
 */

__int64 __fastcall WriteGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 80) && (*a2 == 1 || *a2 == 127) )
    return WriteGenAddrHidden(*(unsigned int *)(a1 + 84), a2);
  else
    return WriteGenAddrEx(a2, a3);
}

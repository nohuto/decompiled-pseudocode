/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x1C0006480
 * Callers:
 *     NdisWdfRegisterMiniportDriver @ 0x1C00609A0 (NdisWdfRegisterMiniportDriver.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0119CC4 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C011BD98 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  __int64 result; // rax

  if ( a1 < 0 )
  {
    result = 3221225507LL;
    if ( a1 != -1073676266 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 && a1 != 259 && a1 != 1076035585 )
      return (unsigned int)-1073741823;
    return (unsigned int)a1;
  }
  return result;
}

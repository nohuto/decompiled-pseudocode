/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x1C0027D90
 * Callers:
 *     NdisWdfRegisterMiniportDriver @ 0x1C005B750 (NdisWdfRegisterMiniportDriver.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0111D28 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01159F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C015339C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0154974 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  if ( a1 < 0 )
  {
    if ( a1 == -1073676266 )
      return 3221225507LL;
    return (unsigned int)a1;
  }
  if ( !a1 || a1 == 259 || a1 == 1076035585 )
    return (unsigned int)a1;
  return 3221225473LL;
}

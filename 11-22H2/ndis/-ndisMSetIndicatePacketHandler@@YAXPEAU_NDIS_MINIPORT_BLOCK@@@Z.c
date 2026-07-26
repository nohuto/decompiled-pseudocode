/*
 * XREFs of ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002531C
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMSetIndicatePacketHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MEDIUM MediaType; // edx
  void (__fastcall *v2)(void *, _NDIS_PACKET **, unsigned int); // rax
  bool v3; // cf
  void (__fastcall *SavedPacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // rdx

  MediaType = a1->MediaType;
  if ( MediaType )
  {
    if ( MediaType == NdisMediumWan )
      goto LABEL_4;
    v2 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
  }
  else
  {
    v2 = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
  }
  a1->SavedPacketIndicateHandler = v2;
LABEL_4:
  v3 = a1->MajorNdisVersion < 6u;
  SavedPacketIndicateHandler = a1->SavedPacketIndicateHandler;
  a1->Ndis5PacketIndicateHandler = SavedPacketIndicateHandler;
  a1->TopNdis5PacketIndicateHandler = SavedPacketIndicateHandler;
  a1->SavedReceivePathEnabled = 1;
  if ( v3 && a1->Ndis6ProtocolsBound == 1 )
  {
    SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    a1->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
  }
  if ( (a1->Flags & 0x20000000) != 0 )
  {
    a1->PacketIndicateHandler = SavedPacketIndicateHandler;
    a1->ReceivePathEnabled = 1;
  }
}

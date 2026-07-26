/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C010FCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C001538C (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0015518 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E6E8 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F430 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00243B0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C010FE38 (-ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *P)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  int v4; // edx
  int v5; // r9d
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx

  MiniportHandle = P->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xFu,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)P,
      P->MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x33u);
  ProtocolHandle = P->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(P->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(MiniportHandle, 0x33u);
  if ( (P->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, P->ProtocolHandle, 0);
  ndisDereferenceProtocol(P->ProtocolHandle, v4, 9u, v5);
  CloseCompleteEvent = P->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = P->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(MiniportHandle, 0x2Eu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x10u,
      (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
      (char)P,
      MiniportHandle);
}

/*
 * XREFs of ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C006F184 (ndisHandleProtocolUnloadNotification.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00962E0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C0097680 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0104680 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01063B0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0106450 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C010BE0C (-ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C012899C (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C012BC6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BC70 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C013EAC0 (NdisOpenAdapterEx.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C014A20C (ndisHandleProtocolReconfigNotification.c)
 *     NdisDeregisterProtocol @ 0x1C014ACB0 (NdisDeregisterProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dql @ 0x1C001E138 (WPP_RECORDER_SF_Dql_ea_1C001E138.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C0095D80 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceProtocol(_NDIS_PROTOCOL_BLOCK *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  KIRQL v6; // al
  struct _NDIS_PROTOCOL_BLOCK *v7; // rcx
  struct _NDIS_PROTOCOL_BLOCK **p_NextProtocol; // rdx
  KIRQL v9; // di
  PVOID v10; // rcx
  unsigned int v11; // edx
  wchar_t *Buffer; // rcx
  struct _KEVENT *DeregEvent; // rcx
  int v14; // [rsp+20h] [rbp-28h]

  v4 = a3;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v14);
  if ( ndisDereferenceRef(&this->Ref.SpinLock, v4) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
    v7 = ndisProtocolList;
    p_NextProtocol = &ndisProtocolList;
    v9 = v6;
    while ( v7 )
    {
      if ( v7 == this )
      {
        v10 = ndisDriverObject;
        *p_NextProtocol = this->NextProtocol;
        ObfDereferenceObject(v10);
        break;
      }
      p_NextProtocol = &v7->NextProtocol;
      v7 = v7->NextProtocol;
    }
    KeReleaseSpinLock(&ndisProtocolListLock, v9);
    Buffer = this->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      this->ImageName.Buffer = 0LL;
    }
    DeregEvent = this->DeregEvent;
    if ( DeregEvent )
      KeSetEvent(DeregEvent, 0, 0);
    _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(this, v11);
    ExFreePoolWithTag(this, 0);
    this = 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x29u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      this);
}

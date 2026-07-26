/*
 * XREFs of ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013B378
 * Callers:
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0015688 (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0015B40 (-ndisFNetPnPEventInternal@@YAXPEAX@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0088580 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     NdisReleaseRWLock @ 0x1C0006310 (NdisReleaseRWLock.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006514 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisAcquireRWLockRead @ 0x1C0006630 (NdisAcquireRWLockRead.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015804 (-ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015960 (-ndisUnprocessAllOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020D60 (-ndisReleaseMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z @ 0x1C0020DB8 (-ndisAcquireMiniportPnPEventLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_KEVENT@@@Z.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqxzdd_EtwWriteTransfer @ 0x1C007A718 (McTemplateK0jqxzdd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ZLqL @ 0x1C007ACD0 (WPP_RECORDER_SF_ZLqL.c)
 *     ?ndisReceiveQueueingPaused@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5290 (-ndisReceiveQueueingPaused@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A52B4 (-ndisReceiveQueueingRestart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisMHandleNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012C14C (-ndisMHandleNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE5C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013E824 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NET_PNP_EVENT_CODE NetEvent; // esi
  unsigned int v3; // r14d
  int *Buffer; // r12
  struct _NDIS_OPEN_BLOCK *UnprocessedOpen; // rax
  struct _NDIS_OPEN_BLOCK *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _NDIS_MINIPORT_BLOCK *v13; // rdx
  __int64 m_numElements; // r13
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r12
  int v17; // edx
  int v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  char v23[160]; // [rsp+78h] [rbp-90h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+150h] [rbp+48h] BYREF

  NetEvent = a2->NetPnPEvent.NetEvent;
  v3 = 0;
  Buffer = (int *)a2->NetPnPEvent.Buffer;
  v22 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  Event.Header.WaitListHead = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x10u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a1,
      NetEvent);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && NetEvent == NetEventRestart && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart(a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
  }
  ndisAcquireMiniportPnPEventLock(a1, (PRKEVENT)&Event.Header.WaitListHead);
  if ( (unsigned int)(NetEvent - 13) > 1 || (v3 = ndisMHandleNDKPnPEvents(a1, a2)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx(a1);
      v8 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v3 = ndisPnPNotifyBinding(UnprocessedOpen, a2);
      if ( v3 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          HIDWORD(v20) = HIDWORD(a1);
          WPP_RECORDER_SF_ZLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v11, v12, v19, &v8->ProtocolHandle->Name.Length);
        }
        if ( (byte_1C00EE584 & 8) != 0 )
          McTemplateK0jqxzdd_EtwWriteTransfer(
            v10,
            v9,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            v8->ProtocolHandle->Name.Buffer,
            NetEvent,
            v3);
        if ( NetEvent != NetEventQueryPower
          && (NetEvent == NetEventQueryRemoveDevice || NetEvent == NetEventSetPower && *Buffer > 1) )
        {
          break;
        }
        v3 = 0;
      }
    }
    ndisUnprocessAllOpens(a1);
  }
  ndisReleaseMiniportPnPEventLock(a1);
  if ( NetEvent == NetEventSetPower && *Buffer == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; i != m_numElements; ++i )
    {
      if ( i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i].__ptr_.__value_->BindState, BindingEnabled, Reason_MiniportLowPower) )
      {
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_1C00EC66B >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i].__ptr_.__value_, (struct NDIS_PNPTRACE_LOCALS *)v23);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v13,
              0x1Cu,
              0x12u,
              (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
              *(unsigned __int16 **)&v23[8],
              *(_QWORD *)v23);
        }
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v13);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && NetEvent == NetEventPause && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused(a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, &LockState);
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v17,
      0xDu,
      0x13u,
      (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
      (char)a1,
      NetEvent,
      v20);
  }
  return v3;
}

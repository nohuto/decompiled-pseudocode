/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BC70
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104348 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006514 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001E014 (--1-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@YAX0.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0025C08 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A2FBC (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0104BD0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x1C0105244 (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0105370 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106340 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106378 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisCloseAdapter @ 0x1C013BF70 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  char v5; // r15
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // r13
  struct _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v10; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *ProtocolBindingContext; // rdx
  int v17; // edx
  struct _KEVENT v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT v19; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT v21[8]; // [rsp+80h] [rbp-80h] BYREF
  int Blink; // [rsp+160h] [rbp+60h] BYREF
  BOOL v23; // [rsp+168h] [rbp+68h]
  __int64 v24; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v25; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  Blink = 0;
  memset(v21, 0, 0x90uLL);
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  memset(&v18, 0, sizeof(v18));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xEu,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      a2,
      *(_QWORD *)&v18.Header.Lock,
      v18.Header.WaitListHead.Flink,
      v18.Header.WaitListHead.Blink);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v23 = ndisReferenceProtocol(ProtocolHandle, 6u) != 0;
  WAIT_FOR_PROTO_MUTEX(ProtocolHandle);
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != a2; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v18, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v18;
    WaitNetPnpEvent = &v18;
  }
  else
  {
    WaitNetPnpEvent = a2->WaitNetPnpEvent;
  }
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u && (a2->OpenFlags & 0x40000000) != 0 )
    v5 = 1;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v8);
  if ( WaitNetPnpEvent )
    ndisWaitForKernelObject(WaitNetPnpEvent);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    memset(&v19, 0, sizeof(v19));
    KeInitializeEvent(&v19, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &v19;
    if ( a2->PendingAfNotifications )
      ndisWaitForKernelObject(&v19);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v21[4], NotificationEvent, 0);
  v10 = -1LL;
  a1->ProcessingOpen = a2;
  v24 = -1LL;
  if ( v5 )
  {
    LODWORD(v21[3].Header.WaitListHead.Blink) = 0;
    a2->UnsolicitedUnbindEvent = &v21[4];
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&Blink, a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&Blink, ProtocolBindingContext, v21);
  }
  else
  {
    Watchdog = ndisMakeWatchdog(&v25, a2, 4, ProtocolHandle->UnbindAdapterHandlerEx, 0x41EB0u, 0LL);
    if ( &v24 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v24,
        *Watchdog);
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
      v10 = v24;
    }
    wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>(&v25);
    Blink = ndisInvokeUnbindAdapter(ProtocolHandle, a2, (struct _NDIS_BIND_CONTEXT *)v21);
  }
  if ( Blink == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct NDISWATCHDOG__ *)v10, &v21[4]);
    Blink = (int)v21[3].Header.WaitListHead.Blink;
  }
  a1->ProcessingOpen = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>((struct NDISWATCHDOG__ **)&v24);
  ndisNotifyWmiBindUnbind(a1, ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v17 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_20;
      v17 = 4;
    }
    ndisBindUnbindPeriodicReceives(v12, v17);
  }
LABEL_20:
  ndisWaitForKernelObject(&Event);
  RELEASE_PROT_MUTEX(ProtocolHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v23 )
  {
    LOBYTE(v14) = 6;
    ndisDereferenceProtocol(ProtocolHandle, v13, v14, v15);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xFu,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids);
}

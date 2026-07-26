/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0147C28
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010FA60 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003614 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C58C (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E6E8 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F430 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F584 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0024D48 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A99C4 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C010F748 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x1C010FBEC (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123A0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123D8 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112614 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B00 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0148730 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  char v5; // r15
  KIRQL v6; // al
  KIRQL v7; // r13
  _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v9; // rbx
  struct NDISWATCHDOG__ **Watchdog; // r15
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r9d
  void *ProtocolBindingContext; // rdx
  int v15; // edx
  struct _KEVENT v16; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT v19[8]; // [rsp+80h] [rbp-80h] BYREF
  int Blink; // [rsp+160h] [rbp+60h] BYREF
  BOOL v21; // [rsp+168h] [rbp+68h]
  __int64 v22; // [rsp+170h] [rbp+70h] BYREF
  struct NDISWATCHDOG__ *v23; // [rsp+178h] [rbp+78h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  Blink = 0;
  memset(v19, 0, 0x90uLL);
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  memset(&v18, 0, sizeof(v18));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xEu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v21 = ndisReferenceProtocol(ProtocolHandle, 6u) != 0;
  WAIT_FOR_PROTO_MUTEX(ProtocolHandle);
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v7 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v18, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v18;
  }
  WaitNetPnpEvent = a2->WaitNetPnpEvent;
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u && (a2->OpenFlags & 0x40000000) != 0 )
    v5 = 1;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v7);
  if ( WaitNetPnpEvent )
    ndisWaitForKernelObject(WaitNetPnpEvent);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    memset(&v16, 0, sizeof(v16));
    KeInitializeEvent(&v16, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &v16;
    if ( a2->PendingAfNotifications )
      ndisWaitForKernelObject(&v16);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v19[4], NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  v9 = -1LL;
  v22 = -1LL;
  if ( v5 )
  {
    LODWORD(v19[3].Header.WaitListHead.Blink) = 0;
    a2->UnsolicitedUnbindEvent = &v19[4];
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&Blink, a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&Blink, ProtocolBindingContext, v19);
  }
  else
  {
    Watchdog = ndisMakeWatchdog(&v23, a2, 4, ProtocolHandle->UnbindAdapterHandlerEx, 0x41EB0u, 0LL);
    if ( &v22 != (__int64 *)Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
        (struct NDISWATCHDOG__ **)&v22,
        *Watchdog);
      v9 = v22;
      *Watchdog = (struct NDISWATCHDOG__ *)-1LL;
    }
    if ( v23 != (struct NDISWATCHDOG__ *)-1LL )
      ndisFreeWatchdog(v23);
    Blink = ndisInvokeUnbindAdapter(ProtocolHandle, a2, (struct _NDIS_BIND_CONTEXT *)v19);
  }
  if ( Blink == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct NDISWATCHDOG__ *)v9, &v19[4]);
    Blink = (int)v19[3].Header.WaitListHead.Blink;
  }
  a1->ProcessingOpen = 0LL;
  if ( v9 != -1 )
    ndisFreeWatchdog((struct NDISWATCHDOG__ *)v9);
  ndisNotifyWmiBindUnbind(a1, ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v15 = 3;
    }
    else
    {
      if ( !ProtocolHandle->IsIPv6 && !ProtocolHandle->IsNdisTest6 )
        goto LABEL_21;
      v15 = 4;
    }
    ndisBindUnbindPeriodicReceives(v11, v15);
  }
LABEL_21:
  ndisWaitForKernelObject(&Event);
  RELEASE_PROT_MUTEX(ProtocolHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v21 )
    ndisDereferenceProtocol(ProtocolHandle, v12, 6u, v13);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xFu,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids);
}

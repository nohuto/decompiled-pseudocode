/*
 * XREFs of ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0063644
 * Callers:
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0033FFC (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C0063CA0 (NdisIMCancelInitializeDeviceInstance.c)
 * Callees:
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0026C28 (WPP_RECORDER_SF_qZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF_qZq @ 0x1C0064210 (WPP_RECORDER_SF_qZq.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123E0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112418 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01124F0 (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 */

char __fastcall ndisIMCheckDeviceInstance(struct _NDIS_M_DRIVER_BLOCK *a1, struct _UNICODE_STRING *a2, void **a3)
{
  char v6; // r12
  _NDIS_PENDING_IM_INSTANCE **p_PendingDeviceList; // r15
  _NDIS_PENDING_IM_INSTANCE *i; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rbx
  unsigned int v13; // eax
  int v15; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  struct _KEVENT v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v18; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v19[20]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      1u,
      0x33u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      &a2->Length);
  ndisWaitForKernelObject(&a1->IMStartRemoveMutex);
  p_PendingDeviceList = &a1->PendingDeviceList;
  a1->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
  for ( i = a1->PendingDeviceList; i; i = i->Next )
  {
    if ( RtlEqualUnicodeString(&i->Name, a2, 1u) )
    {
      if ( a3 )
        *a3 = i->Context;
      *p_PendingDeviceList = i->Next;
      ExFreePoolWithTag(i, 0);
      v6 = 1;
      break;
    }
    p_PendingDeviceList = &i->Next;
  }
  a1->IMStartRemoveMutexOwnerThread = 0LL;
  KeReleaseMutex(&a1->IMStartRemoveMutex, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZq(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, v10, v11, v15, (char)a1, (__int64)a2, (char)a3);
  if ( !v6 )
  {
    if ( a3 )
    {
      AssociatedProtocol = a1->AssociatedProtocol;
      if ( AssociatedProtocol )
      {
        if ( AssociatedProtocol->MajorNdisVersion >= 6u )
          goto LABEL_22;
        if ( AssociatedProtocol->PnPEventHandler )
        {
          memset(&Event, 0, sizeof(Event));
          memset(v19, 0, 0x98uLL);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          LODWORD(v19[0]) = 4;
          v19[3] = &Event;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          if ( AssociatedProtocol->PnPEventHandler(0LL, (_NET_PNP_EVENT *)v19) == 259 )
            ndisWaitForKernelObject(&Event);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
        }
        if ( AssociatedProtocol->MajorNdisVersion >= 6u )
        {
LABEL_22:
          memset(&v18, 0, sizeof(v18));
          memset(&v17, 0, sizeof(v17));
          ndisInitializeNetPnPEvent(&v18, &v17);
          v13 = a2->Length + 16;
          v18.NetPnPEvent.NetEvent = NetEventIMReEnableDevice;
          v18.NetPnPEvent.BufferLength = v13;
          v18.NetPnPEvent.Buffer = a2;
          WAIT_FOR_PROTO_MUTEX(AssociatedProtocol);
          ndisDeliverNetPnPEventSynchronously(AssociatedProtocol, 0LL, &v18);
          RELEASE_PROT_MUTEX(AssociatedProtocol);
        }
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1u,
      0x35u,
      &WPP_38a12df014cc3a137b3c95c6dd994a94_Traceguids,
      (char)a1,
      &a2->Length);
  return v6;
}

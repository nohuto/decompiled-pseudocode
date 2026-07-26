/*
 * XREFs of ?ndisPnPQueryRemoveDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C005E13C
 * Callers:
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C007F454 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPQueryStopDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C01533E4 (-ndisPnPQueryStopDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0014C8C (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

__int64 __fastcall ndisPnPQueryRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-D8h]
  unsigned int UserModeOpenReferences; // [rsp+30h] [rbp-D8h]
  struct _NET_PNP_EVENT_NOTIFICATION v7; // [rsp+40h] [rbp-C8h] BYREF

  memset(&v7, 0, sizeof(v7));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserModeOpenReferences = a1->UserModeOpenReferences;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x57u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)a1,
      UserModeOpenReferences);
  }
  if ( (a1->Flags & 0x40000000) != 0 )
  {
    v3 = -1073741823;
  }
  else
  {
    ndisInitializeNetPnPEvent(&v7, 0LL);
    v7.NetPnPEvent.NetEvent = NetEventQueryRemoveDevice;
    v3 = ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v7);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = v3;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x58u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      (char)a1,
      v5);
  }
  return v3;
}

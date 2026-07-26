/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008D874
 * Callers:
 *     ndisWMIDispatch @ 0x1C000F9B0 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x1C00602D0 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008C70 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C0009210 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0011978 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     NdisWriteConfiguration @ 0x1C001C7C0 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C001CBB0 (NdisOpenConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C001D100 (NdisCloseConfiguration.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001DAE4 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00212C0 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C002134C (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021F54 (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0024EB4 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643A0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0081AA8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C008ECBC (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009996C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A320 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A4B4 (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C009A5F0 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00BE9A0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01381AC (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C01477A0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C014B910 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  struct _NDIS_GUID *v4; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *v6; // r13
  int InstanceName; // ebx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned int Flags; // ecx
  ULONG SizeDataBlock; // r12d
  char *v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int WSyncFlags; // edx
  int v18; // eax
  __int64 v19; // rax
  unsigned int PnPFlags; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r9
  _NDIS_IF_BLOCK *v28; // rcx
  NDIS_HANDLE RequestHandle; // rbx
  int v30; // r8d
  ULONG v31; // r12d
  unsigned int Oid; // ecx
  struct _NDIS_MINIPORT_BLOCK *v33; // rcx
  __int64 v34; // rcx
  unsigned int v35; // esi
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-D0h]
  int Status; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-ACh]
  NDIS_PORT_NUMBER v40; // [rsp+58h] [rbp-A8h]
  unsigned int v41; // [rsp+5Ch] [rbp-A4h]
  PVOID ConfigurationHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+68h] [rbp-98h]
  struct _NDIS_CO_VC_PTR_BLOCK *v44; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v45; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_GUID *v46; // [rsp+80h] [rbp-80h] BYREF
  void *v47; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_OID_REQUEST v50; // [rsp+C0h] [rbp-40h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v51; // [rsp+1C0h] [rbp+C0h] BYREF

  Status = 0;
  v4 = a2;
  v46 = a2;
  memset(&v50, 0, 0xF8uLL);
  v6 = 0LL;
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v40 = 0;
  v41 = 0;
  v47 = 0LL;
  v39 = 0;
  ConfigurationHandle = 0LL;
  v44 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  v43 = 0LL;
  v45 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  memset(&v51, 0, sizeof(v51));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x31u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  InstanceName = ndisWmiFindInstanceName(
                   &v44,
                   a1,
                   (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                   *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( InstanceName < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x32u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    goto LABEL_33;
  }
  v6 = v44;
  if ( !v44 )
  {
LABEL_8:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName(BindPaths->Paths, &v45, 0, MPREF_WMI_CHANGE);
      v43 = v45;
    }
  }
  if ( !v4 )
  {
    ndisWmiGetGuid(&v46, a1, &a3->WnodeHeader.Guid, 0);
    v4 = v46;
    if ( !v46 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          (_WORD)v46 + 51,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      goto LABEL_14;
    }
  }
  Flags = v4->Flags;
  if ( (Flags & 0x40000000) != 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x34u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    InstanceName = -1073741637;
    goto LABEL_130;
  }
  SizeDataBlock = a3->SizeDataBlock;
  v11 = (char *)a3 + a3->DataBlockOffset;
  if ( !SizeDataBlock )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x35u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    goto LABEL_14;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 || *((_QWORD *)v11 + 1) != a1->NetLuid.Value )
    {
LABEL_14:
      InstanceName = -1073741811;
      goto LABEL_130;
    }
    v40 = *((_DWORD *)v11 + 1);
    v47 = (void *)*((_QWORD *)v11 + 2);
    v39 = *((_DWORD *)v11 + 6);
    v41 = 32;
  }
  if ( v6 || (Flags & 0x20000000) == 0 )
  {
    if ( (Flags & 1) == 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0x38u,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      InstanceName = -1073741808;
      goto LABEL_130;
    }
    if ( v4->Oid == 66076 && (SizeDataBlock != 4 || (*(_DWORD *)v11 & 0xFFFFF000) != 0) )
    {
      InstanceName = -1073741808;
      goto LABEL_130;
    }
    *(_DWORD *)&v50.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    *(_QWORD *)&v50.NdisReserved[32] = &ndisIntReqWmi;
    EtwActivityIdControl(3u, (LPGUID)&v50.NdisReserved[96]);
    v31 = SizeDataBlock - v41;
    v50.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = v4->Oid;
    v50.PortNumber = v40;
    v50.DATA.QUERY_INFORMATION.InformationBuffer = &v11[v41];
    v50.RequestId = v47;
    if ( !v47 )
      RequestHandle = v50.RequestHandle;
    v50.RequestHandle = RequestHandle;
    v50.DATA.QUERY_INFORMATION.Oid = Oid;
    v50.RequestType = NdisRequestSetInformation;
    v50.DATA.QUERY_INFORMATION.InformationBufferLength = v31;
    v50.Timeout = v39;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        v30,
        0x39u,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)&v50,
        Oid,
        a1);
    if ( v6 || (v33 = v43) == 0LL )
      v33 = a1;
    Status = ndisQuerySetMiniportEx(v33, v6, &v50, 0, 0LL, 0LL);
    v35 = Status;
    if ( Status == -1071448017 )
    {
      if ( (v4->Flags & 0x200) != 0 )
        goto LABEL_109;
      v35 = 0;
      Status = 0;
    }
    if ( !v35 )
    {
      InstanceName = 0;
      goto LABEL_130;
    }
LABEL_109:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x3Au,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    if ( (byte_1C00F7641 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v34,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v35,
        1,
        0);
    if ( (v4->Flags & 0x200) != 0 )
    {
      if ( (v35 & 0xC0010000) == 0xC0010000 )
      {
        v35 = (unsigned __int16)v35 | 0xC0230000;
        Status = v35;
      }
    }
    else if ( v35 != 259 && v35 != -2147483643 )
    {
      v36 = -1073741823;
      if ( v35 != -1073741823 && v35 != -1073741670 && v35 != -1073741637 )
      {
        if ( v35 == -1073676266 )
        {
          InstanceName = -1073741789;
        }
        else if ( v35 == -1073676268 )
        {
          InstanceName = -1073741306;
        }
        else
        {
          if ( v35 == -1073676267 )
            v36 = -1073741811;
          InstanceName = v36;
        }
        goto LABEL_130;
      }
    }
    InstanceName = v35;
LABEL_130:
    if ( v6 )
      ndisDereferenceVcPtr(v6);
    goto LABEL_31;
  }
  InstanceName = 0;
  if ( SizeDataBlock == 4 )
  {
    v39 = *(_DWORD *)v11;
    if ( v39 > 1 )
      goto LABEL_30;
  }
  v13 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v13 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v13 )
  {
    InstanceName = ndisNDKHandleWmiChangeRequest(a1, *v11);
    goto LABEL_31;
  }
  v14 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v14 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( v14 )
  {
    v19 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
    if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
      v19 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
    if ( v19 )
    {
      v23 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v23 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( v23 )
      {
        v25 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
        if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
          v25 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
        if ( v25 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x37u,
              (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
              a1);
          InstanceName = -1073741808;
          goto LABEL_31;
        }
        v18 = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v11);
        goto LABEL_79;
      }
      if ( (a1->PnPFlags & 0x4000001) == 0x4000001
        && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
      {
        v24 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v24;
        if ( *v11 )
          v22 = v24 | 0x100;
        else
          v22 = v24 & 0xFFFFFEFF;
LABEL_65:
        a1->PnPCapabilities = v22;
        goto LABEL_81;
      }
    }
    else
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x4000001) == 0x4000001 && !a1->AoAc )
      {
        v21 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v21;
        if ( !*v11 )
        {
          a1->PnPFlags = PnPFlags & 0xFFFFFFBF;
          a1->PnPCapabilities = v21 | 0x10;
          ndisCancelWaitWake(a1);
          goto LABEL_81;
        }
        a1->PnPFlags = PnPFlags | 0x40;
        v22 = v21 & 0xFFFFFFEF;
        goto LABEL_65;
      }
    }
LABEL_30:
    InstanceName = -1073741808;
    goto LABEL_31;
  }
  v15 = a1->PnPFlags;
  if ( (v15 & 0x8001) != 1 || a1->AoAc )
  {
    InstanceName = -1073741808;
    goto LABEL_80;
  }
  v16 = a1->PnPCapabilities & 0xEFFFFFFF;
  a1->PnPCapabilities = v16;
  if ( *v11 )
  {
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 0x10) == 0 )
      a1->PnPFlags = v15 | 0x20;
    a1->PnPCapabilities = v16 & 0xFFFFFFF7;
    if ( (WSyncFlags & 8) != 0 )
    {
      a1->PMCurrentParameters.WakeUpFlags |= 1u;
      if ( a1->MediaConnectState == MediaConnectStateDisconnected )
        ndisSetMediaDisconnectTimer(a1);
    }
    goto LABEL_81;
  }
  a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  a1->PnPFlags = v15 & 0xFFFFFFDF;
  a1->PnPCapabilities = v16 | 0x18;
  ndisCancelMediaDisconnectTimer(a1);
  if ( a1->CurrentDevicePowerState == PowerDeviceD0 || (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
  {
LABEL_81:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(&Status, &ConfigurationHandle, a1->ConfigurationHandle);
    if ( Status >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = a1->PnPCapabilities;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
      NdisCloseConfiguration(ConfigurationHandle);
    }
    ndisInitializeNetPnPEvent(&v51, 0LL);
    v51.NetPnPEvent.NetEvent = NetEventPnPCapabilities;
    v51.NetPnPEvent.Buffer = &a1->PMCapabilities61;
    v51.NetPnPEvent.BufferLength = 4;
    ndisPnPNotifyAllTransports(a1, &v51);
    if ( ndisMReferenceIfBlock(a1, 0x10u) )
    {
      IfBlock = a1->IfBlock;
      ifDeviceWakeUpEnable = IfBlock->ifDeviceWakeUpEnable;
      IfBlock->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
      v28 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v28->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v28, &v28->ifDeviceWakeUpEnable, 1, 641);
      ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
    }
    goto LABEL_31;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x36u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  v18 = ndisWakeUpDevice(a1);
LABEL_79:
  InstanceName = v18;
LABEL_80:
  if ( InstanceName >= 0 )
    goto LABEL_81;
LABEL_31:
  if ( v43 )
    ndisDereferenceMiniport(v43, 0x5Fu);
LABEL_33:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v37) = InstanceName;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v37);
  }
  return (unsigned int)InstanceName;
}

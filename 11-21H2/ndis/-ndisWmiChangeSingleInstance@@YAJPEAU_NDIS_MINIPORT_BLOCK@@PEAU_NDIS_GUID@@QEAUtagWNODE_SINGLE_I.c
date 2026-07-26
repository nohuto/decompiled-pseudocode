/*
 * XREFs of ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0088580
 * Callers:
 *     ndisWMIDispatch @ 0x1C00102C0 (ndisWMIDispatch.c)
 *     NdisWdfChangeSingleInstance @ 0x1C005B060 (NdisWdfChangeSingleInstance.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0012AEC (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     NdisWriteConfiguration @ 0x1C001AC80 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C001AE70 (NdisOpenConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C001CC34 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00244CC (-ndisCancelMediaDisconnectTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0025E0C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C0089060 (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009394C (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00942F8 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009448C (-ndisWakeUpDevice@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C00945D0 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B98C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012C458 (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C0139420 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C013B378 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

__int64 __fastcall ndisWmiChangeSingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *const a3)
{
  struct _NDIS_GUID *v4; // r14
  struct _NDIS_CO_VC_PTR_BLOCK *v6; // rbx
  NDIS_PORT_NUMBER v7; // r13d
  unsigned int v8; // r15d
  void *v9; // r12
  _NDIS_BIND_PATHS *BindPaths; // rcx
  unsigned __int16 v11; // r9
  unsigned int Flags; // ecx
  ULONG SizeDataBlock; // edx
  char *v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int WSyncFlags; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 ifDeviceWakeUpEnable; // r9
  _NDIS_IF_BLOCK *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  unsigned int PnPFlags; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // rax
  NDIS_HANDLE RequestHandle; // rcx
  ULONG v34; // edx
  unsigned int Oid; // r10d
  struct _NDIS_MINIPORT_BLOCK *v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // esi
  int v39; // eax
  __int64 v41; // [rsp+30h] [rbp-D0h]
  int Status[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+60h] [rbp-A0h]
  struct _NDIS_CO_VC_PTR_BLOCK *v44; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v45; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_GUID *v46; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v47; // [rsp+80h] [rbp-80h]
  UNICODE_STRING Keyword; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp-68h] BYREF
  struct _NDIS_OID_REQUEST v50; // [rsp+B0h] [rbp-50h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v51; // [rsp+1B0h] [rbp+B0h] BYREF

  memset(Status, 0, sizeof(Status));
  v4 = a2;
  v46 = a2;
  memset(&v50, 0, 0xF8uLL);
  *(_QWORD *)&Keyword.Length = 2097182LL;
  v6 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  v7 = 0;
  v8 = 0;
  v47 = 0LL;
  v9 = 0LL;
  Keyword.Buffer = L"PnPCapabilities";
  v44 = 0LL;
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  memset(&v51, 0, sizeof(v51));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x31u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_8;
  LODWORD(v6) = ndisWmiFindInstanceName(
                  &v44,
                  a1,
                  (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName + 2),
                  *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + a3->OffsetInstanceName));
  if ( (int)v6 < 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x32u,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
    goto LABEL_132;
  }
  v6 = v44;
  v47 = v44;
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
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_15:
        LODWORD(v6) = -1073741811;
        goto LABEL_128;
      }
      v11 = (_WORD)v46 + 51;
LABEL_14:
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        v11,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
      goto LABEL_15;
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
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
    LODWORD(v6) = -1073741637;
    goto LABEL_128;
  }
  SizeDataBlock = a3->SizeDataBlock;
  v14 = (char *)a3 + a3->DataBlockOffset;
  if ( !SizeDataBlock )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v11 = 53;
    goto LABEL_14;
  }
  if ( (Flags & 0x200) != 0 )
  {
    if ( SizeDataBlock < 0x20 || *((_QWORD *)v14 + 1) != a1->NetLuid.Value )
    {
      LODWORD(v6) = -1073741811;
      goto LABEL_128;
    }
    v7 = *((_DWORD *)v14 + 1);
    v8 = 32;
    v9 = (void *)*((_QWORD *)v14 + 2);
    v15 = *((_DWORD *)v14 + 6);
  }
  else
  {
    v15 = Status[1];
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
          (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
          a1);
      LODWORD(v6) = -1073741808;
      goto LABEL_128;
    }
    if ( v4->Oid == 66076 && (SizeDataBlock != 4 || (*(_DWORD *)v14 & 0xFFFFF000) != 0) )
    {
      LODWORD(v6) = -1073741808;
      goto LABEL_128;
    }
    *(_DWORD *)&v50.NdisReserved[16] |= 8u;
    RequestHandle = &ndisIntReqWmi;
    v34 = SizeDataBlock - v8;
    *(_QWORD *)&v50.NdisReserved[32] = &ndisIntReqWmi;
    v50.Header = (NDIS_OBJECT_HEADER)15466902;
    Oid = v4->Oid;
    v50.DATA.QUERY_INFORMATION.Oid = Oid;
    if ( !v9 )
      RequestHandle = v50.RequestHandle;
    v50.RequestHandle = RequestHandle;
    v50.RequestType = NdisRequestSetInformation;
    v50.PortNumber = v7;
    v50.DATA.QUERY_INFORMATION.InformationBuffer = &v14[v8];
    v50.DATA.QUERY_INFORMATION.InformationBufferLength = v34;
    v50.RequestId = v9;
    v50.Timeout = v15;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        (int)v14,
        0x39u,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        (char)&v50,
        Oid,
        a1);
    if ( v6 || (v36 = v43) == 0LL )
      v36 = a1;
    Status[0] = ndisQuerySetMiniportEx(v36, v6, &v50, 0, 0LL, 0LL);
    v38 = Status[0];
    if ( Status[0] == -1071448017 )
    {
      if ( (v4->Flags & 0x200) != 0 )
        goto LABEL_107;
      v38 = 0;
      Status[0] = 0;
    }
    if ( !v38 )
    {
      LODWORD(v6) = 0;
      goto LABEL_128;
    }
LABEL_107:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x3Au,
        (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
        a1);
    if ( (byte_1C00EE581 & 0x10) != 0 )
      McTemplateK0jqxddq_EtwWriteTransfer(
        v37,
        &ChangeInformationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        v38,
        1,
        0);
    if ( (v4->Flags & 0x200) != 0 )
    {
      if ( (v38 & 0xC0010000) == 0xC0010000 )
      {
        v38 = (unsigned __int16)v38 | 0xC0230000;
        Status[0] = v38;
      }
    }
    else if ( v38 != 259 && v38 != -2147483643 )
    {
      v39 = -1073741823;
      if ( v38 != -1073741823 && v38 != -1073741670 && v38 != -1073741637 )
      {
        if ( v38 == -1073676266 )
        {
          LODWORD(v6) = -1073741789;
        }
        else if ( v38 == -1073676268 )
        {
          LODWORD(v6) = -1073741306;
        }
        else
        {
          if ( v38 == -1073676267 )
            v39 = -1073741811;
          LODWORD(v6) = v39;
        }
        goto LABEL_128;
      }
    }
    LODWORD(v6) = v38;
LABEL_128:
    if ( v47 )
      ndisDereferenceVcPtr(v47);
    goto LABEL_130;
  }
  if ( SizeDataBlock == 4 )
  {
    Status[1] = *(_DWORD *)v14;
    if ( Status[1] > 1u )
      goto LABEL_33;
  }
  v16 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
    v16 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
  if ( !v16 )
  {
    LODWORD(v6) = ndisNDKHandleWmiChangeRequest(a1, *v14);
    goto LABEL_130;
  }
  v17 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
  if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
    v17 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
  if ( v17 )
  {
    v25 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
    if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
      v25 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
    if ( v25 )
    {
      v28 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
      if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
        v28 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
      if ( v28 )
      {
        v32 = *(_QWORD *)&v4->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
        if ( *(_QWORD *)&v4->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
          v32 = *(_QWORD *)v4->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
        if ( v32 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x12u,
              0x37u,
              (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
              a1);
          LODWORD(v6) = -1073741808;
          goto LABEL_130;
        }
        v24 = ndisWmiSetPMAdminConfig(a1, (struct _NDIS_WMI_PM_ADMIN_CONFIG *)v14);
        goto LABEL_82;
      }
      if ( (a1->PnPFlags & 0x4000001) == 0x4000001
        && (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
      {
        v29 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v29;
        v30 = v29 & 0xFFFFFEFF;
        v31 = v29 | 0x100;
        if ( !*v14 )
          v31 = v30;
        a1->PnPCapabilities = v31;
        goto LABEL_49;
      }
    }
    else
    {
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x4000001) == 0x4000001 && !a1->AoAc )
      {
        v27 = a1->PnPCapabilities & 0xEFFFFFFF;
        a1->PnPCapabilities = v27;
        if ( *v14 )
        {
          a1->PnPFlags = PnPFlags | 0x40;
          a1->PnPCapabilities = v27 & 0xFFFFFFEF;
        }
        else
        {
          a1->PnPFlags = PnPFlags & 0xFFFFFFBF;
          a1->PnPCapabilities = v27 | 0x10;
          ndisCancelWaitWake(a1);
        }
        goto LABEL_49;
      }
    }
LABEL_33:
    LODWORD(v6) = -1073741808;
    goto LABEL_130;
  }
  v18 = a1->PnPFlags;
  if ( (v18 & 0x8001) != 1 || a1->AoAc )
  {
    LODWORD(v6) = -1073741808;
    goto LABEL_83;
  }
  v19 = a1->PnPCapabilities & 0xEFFFFFFF;
  a1->PnPCapabilities = v19;
  if ( *v14 )
  {
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 0x10) == 0 )
      a1->PnPFlags = v18 | 0x20;
    a1->PnPCapabilities = v19 & 0xFFFFFFF7;
    if ( (WSyncFlags & 8) != 0 )
    {
      a1->PMCurrentParameters.WakeUpFlags |= 1u;
      if ( a1->MediaConnectState == MediaConnectStateDisconnected )
        ndisSetMediaDisconnectTimer(a1);
    }
    goto LABEL_49;
  }
  a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  a1->PnPFlags = v18 & 0xFFFFFFDF;
  a1->PnPCapabilities = v19 | 0x18;
  ndisCancelMediaDisconnectTimer(a1);
  if ( a1->CurrentDevicePowerState == PowerDeviceD0 || (a1->Flags & 0x20000000) != 0 || (a1->WSyncFlags & 8) == 0 )
  {
LABEL_49:
    ndisUpdateAndIndicatePMCapabilities(a1);
    NdisOpenConfiguration(Status, (PNDIS_HANDLE)&Status[2], a1->ConfigurationHandle);
    if ( Status[0] >= 0 )
    {
      ParameterValue.ParameterData.IntegerData = a1->PnPCapabilities;
      NdisWriteConfiguration(Status, *(NDIS_HANDLE *)&Status[2], &Keyword, &ParameterValue);
      NdisCloseConfiguration(*(NDIS_HANDLE *)&Status[2]);
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
      v23 = a1->IfBlock;
      if ( ifDeviceWakeUpEnable != v23->ifDeviceWakeUpEnable )
        ndisNsiScheduleIfBlockRodChangeNotification(v23, &v23->ifDeviceWakeUpEnable, 1, 641);
      ndisMDereferenceIfBlock(a1, MPIFREF_WMI);
    }
    goto LABEL_128;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x36u,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      a1);
  v24 = ndisWakeUpDevice(a1);
LABEL_82:
  LODWORD(v6) = v24;
LABEL_83:
  if ( (int)v6 >= 0 )
    goto LABEL_49;
LABEL_130:
  if ( v43 )
    ndisDereferenceMiniport(v43, 0x5Fu);
LABEL_132:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v41) = (_DWORD)v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x3Bu,
      (struct _GUID *)&WPP_a3deceaeb6403c5105309677219e7454_Traceguids,
      (char)a1,
      v41);
  }
  return (unsigned int)v6;
}

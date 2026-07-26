/*
 * XREFs of ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EE0
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C002A330 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002D1E8 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C0030410 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00643C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxb6_EtwWriteTransfer @ 0x1C006EDA4 (McTemplateK0jqxb6_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDDDD @ 0x1C007044C (WPP_RECORDER_SF_qDDDDDD.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0091104 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C01170DC (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C012D800 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisGetMiniportInfo(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5)
{
  int *v5; // r15
  unsigned int v8; // r13d
  char v9; // r12
  unsigned int *p_DriverVersion; // r9
  int v11; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_MEDIUM MediaType; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  __int32 v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // esi
  _GUID *p_InterfaceGuid; // r8
  _GUID *v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  char v28; // si
  unsigned int v29; // ecx
  unsigned __int16 v30; // ax
  _NDIS_MEDIUM v31; // eax
  int v32; // edx
  int v33; // ecx
  _NDIS_PHYSICAL_MEDIUM *p_PhysicalMediumType; // r14
  int v35; // eax
  unsigned int BytesNeeded; // r14d
  unsigned int *Pool2; // rax
  unsigned int *v38; // r15
  NDIS_STATUS v39; // eax
  PVOID v40; // r14
  unsigned __int16 Length; // cx
  int ParameterType; // [rsp+20h] [rbp-E0h]
  char v44[8]; // [rsp+30h] [rbp-D0h]
  char v45; // [rsp+30h] [rbp-D0h]
  char v46; // [rsp+38h] [rbp-C8h]
  char v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  int Status; // [rsp+68h] [rbp-98h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp-90h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp-88h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Keyword; // [rsp+98h] [rbp-68h] BYREF
  int *v54; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v55; // [rsp+B0h] [rbp-50h]
  __int128 v56; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-38h]
  struct _NDIS_PNP_CAPABILITIES v58; // [rsp+D8h] [rbp-28h] BYREF
  struct _NDIS_OID_REQUEST v59; // [rsp+F0h] [rbp-10h] BYREF

  v5 = a5;
  Keyword.Buffer = L"*IfType";
  v55 = a4;
  v54 = a3;
  *(_QWORD *)&v58.Flags = a5;
  v8 = -1073741823;
  v48 = 0;
  v9 = 0;
  ParameterValue = 0LL;
  v56 = 0LL;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v57 = 0LL;
  ConfigurationHandle = 0LL;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x9Bu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  *a5 = 1;
  p_DriverVersion = &a1->DriverHandle->DriverVersion;
  if ( !*p_DriverVersion )
  {
    v11 = ndisMDoMiniportOp(a1, 1u, 0x10116u, p_DriverVersion, 4, 1, 1u);
    DriverHandle = a1->DriverHandle;
    ndisWriteDriverNDISVersionToServiceKey(
      DriverHandle->MajorNdisVersion,
      DriverHandle->MinorNdisVersion,
      v11 == 0,
      HIWORD(DriverHandle->DriverVersion),
      (unsigned __int16)DriverHandle->DriverVersion,
      &DriverHandle->ServiceName);
  }
  MediaType = a1->MediaType;
  if ( MediaType == NdisMedium802_3 )
  {
    a2->IfType = 6;
    *(_QWORD *)&a2->AccessType = 2LL;
LABEL_26:
    a2->SupportedPacketFilters = 47;
    goto LABEL_27;
  }
  v14 = MediaType - 3;
  if ( !v14 )
  {
    a2->IfType = 23;
    goto LABEL_24;
  }
  v15 = v14 - 5;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
    {
      a2->IfType = 1;
      *(_QWORD *)&a2->AccessType = 3LL;
      a2->ConnectionType = NET_IF_CONNECTION_DEMAND;
      a2->SupportedPacketFilters = 47;
      goto LABEL_28;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 3;
          if ( v20 )
          {
            *(_QWORD *)&a2->AccessType = 2LL;
            a2->ConnectionType = NET_IF_CONNECTION_DEDICATED;
            a2->SupportedPacketFilters = 47;
            if ( v20 == 1 )
              a2->IfType = 71;
            else
              a2->IfType = 1;
            goto LABEL_28;
          }
          *(_QWORD *)&a2->AccessType = 3LL;
          a2->IfType = 131;
          goto LABEL_26;
        }
        a2->IfType = 1;
LABEL_24:
        *(_QWORD *)&a2->AccessType = 3LL;
        a2->ConnectionType = NET_IF_CONNECTION_DEMAND;
        a2->SupportedPacketFilters = 1;
        goto LABEL_28;
      }
      a2->AccessType = NET_IF_ACCESS_POINT_TO_POINT;
      a2->DirectionType = NET_IF_DIRECTION_RECEIVEONLY;
    }
    else
    {
      *(_QWORD *)&a2->AccessType = 3LL;
    }
    a2->IfType = 1;
    a2->SupportedPacketFilters = 1;
  }
  else
  {
    *(_QWORD *)&a2->AccessType = 4LL;
    a2->IfType = 37;
    a2->SupportedPacketFilters = 39;
  }
LABEL_27:
  a2->ConnectionType = NET_IF_CONNECTION_DEDICATED;
LABEL_28:
  v21 = a1->MediaType;
  if ( (int)v21 >= 0 && ((int)v21 >= 20 || (_DWORD)v21 != 3 && ndisMediaTypeCl[v21]) )
  {
    v22 = ndisMDoMiniportOp(a1, 1u, 0x10105u, &a2->LookaheadSize, 4, 1, 1u);
    if ( v22 )
    {
      if ( a1->MediaType < NdisMediumMax )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Cu,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids);
        if ( (byte_1C00F7643 & 0x10) != 0 )
        {
          v47 = 1;
          v46 = v22;
          v45 = 5;
LABEL_38:
          p_InterfaceGuid = &a1->InterfaceGuid;
          v24 = &a1->InterfaceGuid;
LABEL_39:
          McTemplateK0jqxddq_EtwWriteTransfer(
            16LL,
            &OidQueryFailed,
            p_InterfaceGuid,
            (__int64)v24,
            a1->IfIndex,
            a1->NetLuid.Value,
            v45,
            v46,
            v47);
          goto LABEL_111;
        }
        goto LABEL_111;
      }
      a2->LookaheadSize = 0;
    }
  }
  ndisMDoMiniportOp(a1, 1u, 0x10106u, &a2->MtuSize, 4, 1, 1u);
  v25 = a1->MediaType;
  if ( ((unsigned int)v25 > 0x13 || !ndisMediaTypeCl[v25]) && (_DWORD)v25 != 3
    || (v22 = ndisMDoMiniportOp(a1, 1u, 0x10113u, &a2->MacOptions, 4, 3, 1u)) == 0 )
  {
    if ( (a1->SendFlags & 1) != 0 )
    {
      v48 = 16;
      v26 = ndisMDoMiniportOp(a1, 1u, 0x10115u, &v48, 4, 2, 1u);
      v28 = v26;
      if ( v26 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Eu,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        if ( (byte_1C00F7643 & 0x10) != 0 )
          McTemplateK0jqxddq_EtwWriteTransfer(
            v27,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            21,
            v28,
            3);
        v29 = 16;
        v48 = 16;
      }
      else
      {
        v29 = v48;
      }
      v30 = 16;
      if ( v29 < 0x10 )
        v30 = v29;
      a1->MaxSendPackets = v30;
    }
    v31 = a1->MediaType;
    if ( v31 )
    {
      if ( v31 == NdisMediumWan )
      {
        a2->MacAddressLength = 6;
        v22 = ndisMDoMiniportOp(a1, 1u, 0x4010102u, a2->CurrentMacAddress, 6, 23, 1u);
        if ( v22 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0xDu,
              0xA3u,
              (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
              a1);
          if ( (byte_1C00F7643 & 0x10) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              16LL,
              &OidQueryFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              2,
              v22,
              7);
          v9 = 1;
          goto LABEL_111;
        }
        *(_DWORD *)a2->PermanentMacAddress = *(_DWORD *)a2->CurrentMacAddress;
        *(_WORD *)&a2->PermanentMacAddress[4] = *(_WORD *)&a2->CurrentMacAddress[4];
      }
      else
      {
        v22 = 0;
      }
    }
    else
    {
      v22 = ndisMDoMiniportOp(a1, 1u, 0x1010104u, &a2->MaxMulticastListSize, 4, 7, 1u);
      if ( v22 )
      {
        v9 = 1;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Fu,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        if ( (byte_1C00F7643 & 0x10) != 0 )
        {
          v47 = 4;
          p_InterfaceGuid = &a1->InterfaceGuid;
          v46 = v22;
          v24 = &a1->InterfaceGuid;
          v45 = 4;
          goto LABEL_39;
        }
        goto LABEL_111;
      }
      a2->MacAddressLength = 6;
      v22 = ndisMDoMiniportOp(a1, 1u, 0x1010102u, a2->CurrentMacAddress, 6, 9, 1u);
      if ( v22 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0xA0u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        if ( (byte_1C00F7643 & 0x10) != 0 )
          McTemplateK0jqxddq_EtwWriteTransfer(
            16LL,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            v22,
            5);
        v9 = 1;
        goto LABEL_111;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDDDDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2->CurrentMacAddress[3],
          a2->CurrentMacAddress[2],
          a2->CurrentMacAddress[1],
          ParameterType,
          (char)a1,
          a2->CurrentMacAddress[0],
          a2->CurrentMacAddress[1],
          a2->CurrentMacAddress[2],
          a2->CurrentMacAddress[3],
          a2->CurrentMacAddress[4],
          a2->CurrentMacAddress[5]);
      if ( Microsoft_Windows_NDISEnableBits < 0 )
        McTemplateK0jqxb6_EtwWriteTransfer(
          v33,
          v32,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          (__int64)a2->CurrentMacAddress);
      v9 = 1;
      v22 = ndisMDoMiniportOp(a1, 1u, 0x1010101u, a2->PermanentMacAddress, a2->MacAddressLength, 9, 1u);
      if ( v22 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0xA2u,
            (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
            a1);
        if ( (byte_1C00F7643 & 0x10) != 0 )
        {
          v47 = 6;
          v24 = &a1->InterfaceGuid;
          v46 = v22;
          p_InterfaceGuid = &a1->InterfaceGuid;
          v45 = 1;
          goto LABEL_39;
        }
        goto LABEL_111;
      }
      p_PhysicalMediumType = &a2->PhysicalMediumType;
      v22 = ndisMDoMiniportOp(a1, 1u, 0x10202u, &a2->PhysicalMediumType, 4, 10, 1u);
      if ( v22 )
      {
        v22 = 0;
        *p_PhysicalMediumType = NdisPhysicalMediumUnspecified;
      }
      if ( *p_PhysicalMediumType == NdisPhysicalMediumWirelessLan )
        a2->IfType = 71;
      ndisGetMiniportOffloadCapability(a1);
      v9 = 0;
      v5 = *(int **)&v58.Flags;
    }
    if ( ((a1->PnPFlags & 0x8001) != 0 || (a1->DriverHandle->Flags & 1) != 0)
      && a1->MediaType <= (unsigned int)NdisMediumIP )
    {
      v58 = 0LL;
      v35 = ndisMDoMiniportOp(a1, 1u, 0xFD010100, &v58, 16, 25, 0);
      *v5 = v35;
      if ( !v35 )
        ndisConvertPnpCapabilitiesToPM(&v58, a2->PowerManagementCapabilitiesEx);
    }
    a2->IfConnectorPresent = (a1->PnPFlags & 0x200000) != 0;
    a2->MediaDuplexState = MediaDuplexStateUnknown;
    a2->MaxXmitLinkSpeed = 0x40000000LL;
    a2->XmitLinkSpeed = 0x40000000LL;
    a2->MaxRcvLinkSpeed = 0x40000000LL;
    a2->RcvLinkSpeed = 0x40000000LL;
    a2->MediaConnectState = MediaConnectStateConnected;
    v57 = 0LL;
    *((_QWORD *)&v56 + 1) = a1;
    memset(&v59, 0, 0xF8uLL);
    if ( (((unsigned int)ndisQueryDeviceOid((struct _NDIS_USER_OPEN_CONTEXT *)&v56, &v59, 0x10101u, 0LL, 0) + 1073676268) & 0xFFFFFFFD) == 0 )
    {
      BytesNeeded = v59.DATA.QUERY_INFORMATION.BytesNeeded;
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, v59.DATA.QUERY_INFORMATION.BytesNeeded, 538985550);
      v38 = Pool2;
      if ( Pool2 )
      {
        if ( !(unsigned int)ndisQueryDeviceOid(
                              (struct _NDIS_USER_OPEN_CONTEXT *)&v56,
                              &v59,
                              0x10101u,
                              Pool2,
                              BytesNeeded) )
        {
          a1->SupportedOidList = v38;
          a1->SupportedOidListLength = BytesNeeded;
        }
      }
    }
    ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)&v56);
    ConfigObject.Flags = 0;
    ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
    ConfigObject.NdisHandle = a1;
    v39 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
    v40 = ConfigurationHandle;
    v8 = v39;
    Status = v39;
    if ( !v39 )
    {
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
      v8 = Status;
      if ( !Status )
      {
        Length = ParameterValue->ParameterData.StringData.Length;
        if ( Length != 1 )
          a2->IfType = Length;
        v8 = 0;
      }
    }
    if ( v40 )
      NdisCloseConfiguration(v40);
    goto LABEL_111;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xDu,
      0x9Du,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  if ( (byte_1C00F7643 & 0x10) != 0 )
  {
    v47 = 2;
    v46 = v22;
    v45 = 19;
    goto LABEL_38;
  }
LABEL_111:
  *v54 = v22;
  *v55 = v9;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v44 = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xA4u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      *(_QWORD *)v44);
  }
  return v8;
}

/*
 * XREFs of ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0064C50
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008B60 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfigurationEx @ 0x1C001B190 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001B3D0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001B4B0 (NdisReadConfiguration.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002AD90 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x1C002E53C (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C005F2C0 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxb6_EtwWriteTransfer @ 0x1C00699C8 (McTemplateK0jqxb6_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDDDDDD @ 0x1C006B080 (WPP_RECORDER_SF_qDDDDDD.c)
 *     ?ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008B4B0 (-ndisGetMiniportOffloadCapability@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0121D80 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisGetMiniportInfo(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2,
        int *a3,
        unsigned __int8 *a4,
        int *a5)
{
  unsigned int v7; // r12d
  char v8; // r15
  unsigned int *p_DriverVersion; // r9
  int v10; // eax
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  _NDIS_MEDIUM MediaType; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  char v25; // si
  unsigned int v26; // ecx
  unsigned __int16 v27; // ax
  _NDIS_MEDIUM v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  unsigned int BytesNeeded; // r14d
  unsigned int *Pool2; // rax
  unsigned int *v34; // r15
  NDIS_STATUS v35; // eax
  PVOID v36; // r14
  unsigned __int16 Length; // cx
  int ParameterType; // [rsp+20h] [rbp-E0h]
  char v40[8]; // [rsp+30h] [rbp-D0h]
  char v41; // [rsp+30h] [rbp-D0h]
  char v42; // [rsp+38h] [rbp-C8h]
  char v43; // [rsp+40h] [rbp-C0h]
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  int Status; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+68h] [rbp-98h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+70h] [rbp-90h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Keyword; // [rsp+90h] [rbp-70h] BYREF
  int *v50; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v51; // [rsp+A8h] [rbp-58h]
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-40h]
  struct _NDIS_PNP_CAPABILITIES v54; // [rsp+D0h] [rbp-30h] BYREF
  struct _NDIS_OID_REQUEST v55; // [rsp+E0h] [rbp-20h] BYREF

  Keyword.Buffer = L"*IfType";
  v51 = a4;
  v50 = a3;
  v44 = 0;
  v7 = -1073741823;
  ParameterValue = 0LL;
  v8 = 0;
  *(_QWORD *)&Keyword.Length = 1048590LL;
  v52 = 0LL;
  ConfigurationHandle = 0LL;
  v53 = 0LL;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x9Bu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  *a5 = 1;
  p_DriverVersion = &a1->DriverHandle->DriverVersion;
  if ( !*p_DriverVersion )
  {
    v10 = ndisMDoMiniportOp(a1, 1u, 0x10116u, p_DriverVersion, 4, 1, 1u);
    DriverHandle = a1->DriverHandle;
    ndisWriteDriverNDISVersionToServiceKey(
      DriverHandle->MajorNdisVersion,
      DriverHandle->MinorNdisVersion,
      v10 == 0,
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
  v13 = MediaType - 3;
  if ( !v13 )
  {
    a2->IfType = 23;
    goto LABEL_24;
  }
  v14 = v13 - 5;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( !v15 )
    {
      a2->IfType = 1;
      *(_QWORD *)&a2->AccessType = 3LL;
      a2->ConnectionType = NET_IF_CONNECTION_DEMAND;
      a2->SupportedPacketFilters = 47;
      goto LABEL_28;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 3;
          if ( v19 )
          {
            *(_QWORD *)&a2->AccessType = 2LL;
            a2->ConnectionType = NET_IF_CONNECTION_DEDICATED;
            a2->SupportedPacketFilters = 47;
            if ( v19 == 1 )
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
  v20 = a1->MediaType;
  if ( (int)v20 >= 0 && ((int)v20 >= 20 || (_DWORD)v20 != 3 && ndisMediaTypeCl[v20]) )
  {
    v21 = ndisMDoMiniportOp(a1, 1u, 0x10105u, &a2->LookaheadSize, 4, 1, 1u);
    if ( v21 )
    {
      if ( a1->MediaType < NdisMediumMax )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Cu,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids);
        if ( (byte_1C00EE583 & 0x10) != 0 )
        {
          v43 = 1;
          v42 = v21;
          v41 = 5;
LABEL_38:
          McTemplateK0jqxddq_EtwWriteTransfer(
            16LL,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            v41,
            v42,
            v43);
          goto LABEL_109;
        }
        goto LABEL_109;
      }
      a2->LookaheadSize = 0;
    }
  }
  ndisMDoMiniportOp(a1, 1u, 0x10106u, &a2->MtuSize, 4, 1, 1u);
  v22 = a1->MediaType;
  if ( ((unsigned int)v22 > 0x13 || !ndisMediaTypeCl[v22]) && (_DWORD)v22 != 3
    || (v21 = ndisMDoMiniportOp(a1, 1u, 0x10113u, &a2->MacOptions, 4, 3, 1u)) == 0 )
  {
    if ( (a1->SendFlags & 1) != 0 )
    {
      v44 = 16;
      v23 = ndisMDoMiniportOp(a1, 1u, 0x10115u, &v44, 4, 2, 1u);
      v25 = v23;
      if ( v23 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Eu,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            a1);
        if ( (byte_1C00EE583 & 0x10) != 0 )
          McTemplateK0jqxddq_EtwWriteTransfer(
            v24,
            &OidQueryFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            21,
            v25,
            3);
        v26 = 16;
        v44 = 16;
      }
      else
      {
        v26 = v44;
      }
      v27 = 16;
      if ( v26 < 0x10 )
        v27 = v26;
      a1->MaxSendPackets = v27;
    }
    v28 = a1->MediaType;
    if ( v28 )
    {
      if ( v28 != NdisMediumWan )
      {
        v21 = 0;
        goto LABEL_93;
      }
      a2->MacAddressLength = 6;
      v21 = ndisMDoMiniportOp(a1, 1u, 0x4010102u, a2->CurrentMacAddress, 6, 23, 1u);
      if ( !v21 )
      {
        *(_DWORD *)a2->PermanentMacAddress = *(_DWORD *)a2->CurrentMacAddress;
        *(_WORD *)&a2->PermanentMacAddress[4] = *(_WORD *)&a2->CurrentMacAddress[4];
        goto LABEL_93;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xA3u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          a1);
      if ( (byte_1C00EE583 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          16LL,
          &OidQueryFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          2,
          v21,
          7);
    }
    else
    {
      v21 = ndisMDoMiniportOp(a1, 1u, 0x1010104u, &a2->MaxMulticastListSize, 4, 7, 1u);
      if ( v21 )
      {
        v8 = 1;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xDu,
            0x9Fu,
            (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
            a1);
        if ( (byte_1C00EE583 & 0x10) != 0 )
        {
          v43 = 4;
          v42 = v21;
          v41 = 4;
          goto LABEL_38;
        }
        goto LABEL_109;
      }
      a2->MacAddressLength = 6;
      v21 = ndisMDoMiniportOp(a1, 1u, 0x1010102u, a2->CurrentMacAddress, 6, 9, 1u);
      if ( !v21 )
      {
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
            v30,
            v29,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            (__int64)a2->CurrentMacAddress);
        v8 = 1;
        v21 = ndisMDoMiniportOp(a1, 1u, 0x1010101u, a2->PermanentMacAddress, a2->MacAddressLength, 9, 1u);
        if ( v21 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              3u,
              0xDu,
              0xA2u,
              (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
              a1);
          if ( (byte_1C00EE583 & 0x10) != 0 )
          {
            v43 = 6;
            v42 = v21;
            v41 = 1;
            goto LABEL_38;
          }
          goto LABEL_109;
        }
        v21 = ndisMDoMiniportOp(a1, 1u, 0x10202u, &a2->PhysicalMediumType, 4, 10, 1u);
        if ( v21 )
        {
          v21 = 0;
          a2->PhysicalMediumType = NdisPhysicalMediumUnspecified;
        }
        else if ( a2->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
        {
          a2->IfType = 71;
        }
        ndisGetMiniportOffloadCapability(a1);
LABEL_93:
        if ( ((a1->PnPFlags & 0x8001) != 0 || (a1->DriverHandle->Flags & 1) != 0)
          && a1->MediaType <= (unsigned int)NdisMediumIP )
        {
          v54 = 0LL;
          v31 = ndisMDoMiniportOp(a1, 1u, 0xFD010100, &v54, 16, 25, 0);
          *a5 = v31;
          if ( !v31 )
            ndisConvertPnpCapabilitiesToPM(&v54, a2->PowerManagementCapabilitiesEx);
        }
        a2->IfConnectorPresent = (a1->PnPFlags & 0x200000) != 0;
        a2->MediaDuplexState = MediaDuplexStateUnknown;
        a2->MaxXmitLinkSpeed = 0x40000000LL;
        a2->XmitLinkSpeed = 0x40000000LL;
        a2->MaxRcvLinkSpeed = 0x40000000LL;
        a2->RcvLinkSpeed = 0x40000000LL;
        a2->MediaConnectState = MediaConnectStateConnected;
        v53 = 0LL;
        *((_QWORD *)&v52 + 1) = a1;
        memset(&v55, 0, 0xF8uLL);
        if ( (((unsigned int)ndisQueryDeviceOid((struct _NDIS_USER_OPEN_CONTEXT *)&v52, &v55, 0x10101u, 0LL, 0)
             + 1073676268) & 0xFFFFFFFD) == 0 )
        {
          BytesNeeded = v55.DATA.QUERY_INFORMATION.BytesNeeded;
          Pool2 = (unsigned int *)ExAllocatePool2(64LL, v55.DATA.QUERY_INFORMATION.BytesNeeded, 538985550);
          v34 = Pool2;
          if ( Pool2 )
          {
            if ( !(unsigned int)ndisQueryDeviceOid(
                                  (struct _NDIS_USER_OPEN_CONTEXT *)&v52,
                                  &v55,
                                  0x10101u,
                                  Pool2,
                                  BytesNeeded) )
            {
              a1->SupportedOidList = v34;
              a1->SupportedOidListLength = BytesNeeded;
            }
          }
        }
        ndisQueryOidList((struct _NDIS_USER_OPEN_CONTEXT *)&v52);
        ConfigObject.Flags = 0;
        ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
        ConfigObject.NdisHandle = a1;
        v35 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
        v36 = ConfigurationHandle;
        v7 = v35;
        Status = v35;
        if ( !v35 )
        {
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
          v7 = Status;
          if ( !Status )
          {
            Length = ParameterValue->ParameterData.StringData.Length;
            if ( Length != 1 )
              a2->IfType = Length;
            v7 = 0;
          }
        }
        v8 = 0;
        if ( v36 )
          NdisCloseConfiguration(v36);
        goto LABEL_109;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xA0u,
          (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
          a1);
      if ( (byte_1C00EE583 & 0x10) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          16LL,
          &OidQueryFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          2,
          v21,
          5);
    }
    v8 = 1;
    goto LABEL_109;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xDu,
      0x9Du,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      a1);
  if ( (byte_1C00EE583 & 0x10) != 0 )
  {
    v43 = 2;
    v42 = v21;
    v41 = 19;
    goto LABEL_38;
  }
LABEL_109:
  *v50 = v21;
  *v51 = v8;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v40 = v7;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xA4u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      *(_QWORD *)v40);
  }
  return v7;
}

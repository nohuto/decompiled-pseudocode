/*
 * XREFs of NdisReadConfiguration @ 0x1C001D1E0
 * Callers:
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C002BD40 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002BF1C (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C4B0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002DFD0 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002E4C8 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034254 (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00348A8 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadNetworkAddress @ 0x1C005D190 (NdisReadNetworkAddress.c)
 *     NdisWdfReadConfiguration @ 0x1C005D360 (NdisWdfReadConfiguration.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EC0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EA60 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0076894 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1C0088FB0 (-NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A76DC (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0110BF0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0110CD4 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0119CC4 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C011ABFC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138994 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0138A94 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0162AFC (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C01636F4 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ndisOpenProtocolSubkey @ 0x1C001EC78 (ndisOpenProtocolSubkey.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0024730 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0026D48 (WPP_RECORDER_SF_Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ndisReadUpperBindings @ 0x1C005D048 (ndisReadUpperBindings.c)
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C0138190 (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C0138578 (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  PNDIS_CONFIGURATION_PARAMETER *v7; // r14
  NTSTATUS RegistryValues; // ebx
  unsigned int i; // edi
  unsigned int v10; // r15d
  NDIS_PARAMETER_TYPE v11; // r12d
  __int64 v12; // rdi
  unsigned int j; // r12d
  PCWSTR *v14; // r15
  char *Pool2; // rax
  char *v16; // rbx
  PNDIS_CONFIGURATION_PARAMETER v17; // rcx
  unsigned int Length; // r9d
  wchar_t *v19; // rcx
  wchar_t *Buffer; // r8
  unsigned int v21; // edx
  struct _NDIS_CONFIGURATION_PARAMETER *v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  _BYTE *v29; // rcx
  PVOID v30; // rdi
  int v31; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-5Dh] BYREF
  PVOID v33; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+40h] [rbp-51h]
  _UNICODE_STRING String; // [rsp+48h] [rbp-49h] BYREF
  PNDIS_STATUS v36; // [rsp+58h] [rbp-39h]
  _DWORD v37[2]; // [rsp+60h] [rbp-31h]
  char v38; // [rsp+68h] [rbp-29h]
  _OWORD v39[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v40; // [rsp+90h] [rbp-1h]

  v36 = Status;
  v31 = 0;
  v33 = 0LL;
  v40 = 0LL;
  v32 = 0;
  v37[0] = 67305985;
  v7 = ParameterValue;
  v37[1] = 33620481;
  String = 0LL;
  v38 = 3;
  memset(v39, 0, sizeof(v39));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ParameterValue) = 4;
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ParameterValue,
      8,
      30,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids,
      (__int64)Keyword);
  }
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00D50A0 + i, 1u) )
    {
      RegistryValues = 0;
      v22 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C00E2130 + 24 * i);
      goto LABEL_80;
    }
  }
  v10 = 0;
  v11 = ParameterType;
  v12 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v12 )
  {
LABEL_16:
    if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          8u,
          0x1Fu,
          (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
      RegistryValues = 0;
      *v7 = (PNDIS_CONFIGURATION_PARAMETER)&unk_1C00E2118;
      goto LABEL_25;
    }
    v14 = (PCWSTR *)((char *)ConfigurationHandle + 32);
    if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
      || *v14
      || (RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle), RegistryValues >= 0) )
    {
      Pool2 = (char *)ExAllocatePool2(66LL, Keyword->Length + 2LL, 538985550);
      P = Pool2;
      v16 = Pool2;
      if ( !Pool2 )
      {
        RegistryValues = -1073741670;
        goto LABEL_28;
      }
      memmove(Pool2, Keyword->Buffer, Keyword->Length);
      *(_WORD *)&v16[Keyword->Length] = 0;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v16;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = v7;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0x40000000u,
                         *v14,
                         (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                         ConfigurationHandle,
                         0LL);
    }
    if ( !v12 )
    {
      if ( RegistryValues >= 0 )
      {
LABEL_34:
        v17 = *v7;
        if ( (*v7)->ParameterType == NdisParameterString )
        {
          if ( v11 )
          {
            if ( v11 == NdisParameterHexInteger )
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v17->ParameterData, 0x10u, &v17->ParameterData.IntegerData);
              (*v7)->ParameterType = NdisParameterHexInteger;
            }
          }
          else
          {
            RtlUnicodeStringToInteger((PCUNICODE_STRING)&v17->ParameterData, 0xAu, &v17->ParameterData.IntegerData);
            (*v7)->ParameterType = NdisParameterInteger;
          }
        }
        goto LABEL_25;
      }
      if ( !RtlEqualUnicodeString(Keyword, &stru_1C00D5120, 1u) )
        goto LABEL_25;
      v29 = (_BYTE *)*((_QWORD *)ConfigurationHandle + 1);
      if ( !v29 || *v29 != 2 || v29[24] < 6u || (unsigned int)ndisReadUpperBindings(v29, &v33, &v32) )
        goto LABEL_25;
      v30 = v33;
      RegistryValues = ndisSaveParameters((wchar_t *)L"UpperBindings", 7u, v33, v32, ConfigurationHandle, v7);
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
    }
    if ( RegistryValues < 0 )
      goto LABEL_25;
    goto LABEL_34;
  }
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v12 + 3808);
    v19 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3816);
    v21 = 1;
LABEL_41:
    RegistryValues = ndisSaveParameters(v19, v21, Buffer, Length, ConfigurationHandle, v7);
    goto LABEL_25;
  }
  if ( RtlEqualUnicodeString(Keyword, &stru_1C00D50F0, 1u)
    && (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) == 0 )
  {
    if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
    {
      v21 = 4;
      Buffer = (wchar_t *)(v12 + 3720);
      Length = 4;
LABEL_40:
      v19 = (wchar_t *)L"BusType";
      goto LABEL_41;
    }
    if ( ParameterType == NdisParameterString )
    {
      String.MaximumLength = 40;
      String.Buffer = (wchar_t *)v39;
      RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3720), 0xAu, &String);
      if ( RegistryValues )
        goto LABEL_25;
      Length = String.Length;
      v21 = 1;
      Buffer = String.Buffer;
      goto LABEL_40;
    }
  }
  for ( j = 0; j < 9; ++j )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00D5010 + j, 1u) )
    {
      v23 = *(_QWORD *)(v12 + 944);
      if ( !v23 )
        goto LABEL_25;
      v24 = *(_DWORD *)(v23 + 16);
      if ( !v24 )
        goto LABEL_64;
      v25 = *((unsigned __int8 *)v37 + j);
      while ( *(_BYTE *)(v23 + 20LL * v10 + 20) != (_BYTE)v25 )
      {
        if ( ++v10 >= v24 )
          goto LABEL_64;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
          v28 = *(unsigned __int16 *)(v23 + 20LL * v10 + 24);
          goto LABEL_62;
        }
        if ( (unsigned int)(v27 - 1) > 1 )
        {
LABEL_63:
          RegistryValues = ndisSaveParameters(
                             *((wchar_t **)&unk_1C00D5010 + 2 * j + 1),
                             4u,
                             &v31,
                             4u,
                             ConfigurationHandle,
                             v7);
LABEL_64:
          if ( v10 >= *(_DWORD *)(v23 + 16) )
            RegistryValues = -1073741823;
          goto LABEL_25;
        }
      }
      v28 = *(_DWORD *)(v23 + 20LL * v10 + 24);
LABEL_62:
      v31 = v28;
      goto LABEL_63;
    }
  }
  v11 = ParameterType;
  if ( RtlEqualUnicodeString(Keyword, &stru_1C00D5100, 1u) )
  {
    if ( ParameterType )
      goto LABEL_25;
    if ( ndisNDKGlobalDisabled() )
    {
      RegistryValues = 0;
      v22 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00E2118;
      goto LABEL_80;
    }
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00D5110, 1u) )
  {
    if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
    {
      *(_DWORD *)(v12 + 568) |= 0x80u;
      *(_DWORD *)(v12 + 1872) |= 0x10000u;
    }
    goto LABEL_16;
  }
  if ( ParameterType )
    goto LABEL_25;
  dword_1C00F7760 = ndisReadNDKGlobalFlags();
  RegistryValues = 0;
  v22 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00F7758;
LABEL_80:
  *v7 = v22;
LABEL_25:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
LABEL_28:
  *v36 = (RegistryValues >> 31) & 0xC0000001;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x20u,
      (struct _GUID *)&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids);
}

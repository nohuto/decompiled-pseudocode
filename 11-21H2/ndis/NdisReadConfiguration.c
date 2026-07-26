/*
 * XREFs of NdisReadConfiguration @ 0x1C001B4B0
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F734 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002FDE4 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 *     ?ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00302F8 (-ndisReadSoftwareTimestampSettings@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@.c)
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x1C00304A0 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003232C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033010 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadNetworkAddress @ 0x1C0057F40 (NdisReadNetworkAddress.c)
 *     NdisWdfReadConfiguration @ 0x1C0058110 (NdisWdfReadConfiguration.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0064C50 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00696A4 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C0071468 (-ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z.c)
 *     ?NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W4_NDIS_PARAMETER_TYPE@@@Z @ 0x1C0083B50 (-NdisReadConfigShimHook@@YAXPEAHPEAPEAU_NDIS_CONFIGURATION_PARAMETER@@PEAXPEAU_UNICODE_STRING@@W.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A0BB4 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105724 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0105D64 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0112FCC (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01159F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CB9C (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CC9C (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C015339C (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C0154974 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ndisOpenProtocolSubkey @ 0x1C001D314 (ndisOpenProtocolSubkey.c)
 *     ?ndisSaveParameters@@YAJPEA_WKPEAXK11@Z @ 0x1C0025790 (-ndisSaveParameters@@YAJPEA_WKPEAXK11@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ndisReadUpperBindings @ 0x1C0057DF8 (ndisReadUpperBindings.c)
 *     ?ndisNDKGlobalDisabled@@YAEXZ @ 0x1C012C43C (-ndisNDKGlobalDisabled@@YAEXZ.c)
 *     ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x1C012C860 (-ndisReadNDKGlobalFlags@@YAKXZ.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  NTSTATUS RegistryValues; // ebx
  unsigned int i; // edi
  unsigned int v10; // r15d
  __int64 v11; // rdi
  char *Pool2; // rax
  char *v13; // rbx
  PNDIS_CONFIGURATION_PARAMETER v14; // rcx
  unsigned int Length; // r9d
  wchar_t *v16; // rcx
  wchar_t *Buffer; // r8
  unsigned int v18; // edx
  struct _NDIS_CONFIGURATION_PARAMETER *v19; // rax
  __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 v22; // r12
  int v23; // r8d
  int v24; // ecx
  _BYTE *v25; // rcx
  PVOID v26; // rdi
  int v27; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-5Dh] BYREF
  PVOID v29; // [rsp+38h] [rbp-59h] BYREF
  PVOID P; // [rsp+40h] [rbp-51h]
  _UNICODE_STRING String; // [rsp+48h] [rbp-49h] BYREF
  PNDIS_STATUS v32; // [rsp+58h] [rbp-39h]
  _DWORD v33[2]; // [rsp+60h] [rbp-31h]
  char v34; // [rsp+68h] [rbp-29h]
  _OWORD v35[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v36; // [rsp+90h] [rbp-1h]

  v32 = Status;
  v27 = 0;
  v29 = 0LL;
  v36 = 0LL;
  v28 = 0;
  v33[0] = 67305985;
  v33[1] = 33620481;
  String = 0LL;
  v34 = 3;
  memset(v35, 0, sizeof(v35));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x1Eu,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      &Keyword->Length);
  RegistryValues = -1073741823;
  P = Keyword->Buffer;
  for ( i = 0; i < 3; ++i )
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00CE0B0 + i, 1u) )
    {
      RegistryValues = 0;
      v19 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C00D9D90 + 24 * i);
      goto LABEL_80;
    }
  }
  v10 = 0;
  v11 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v11 )
  {
LABEL_15:
    if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          8u,
          0x1Fu,
          (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids);
      RegistryValues = 0;
      *ParameterValue = (PNDIS_CONFIGURATION_PARAMETER)&unk_1C00D9D78;
      goto LABEL_24;
    }
    if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
      || *((_QWORD *)ConfigurationHandle + 4)
      || (RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle), RegistryValues >= 0) )
    {
      Pool2 = (char *)ExAllocatePool2(66LL, Keyword->Length + 2LL, 538985550);
      P = Pool2;
      v13 = Pool2;
      if ( !Pool2 )
      {
        RegistryValues = -1073741670;
        goto LABEL_27;
      }
      memmove(Pool2, Keyword->Buffer, Keyword->Length);
      *(_WORD *)&v13[Keyword->Length] = 0;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v13;
      *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
      RegistryValues = RtlQueryRegistryValuesEx(
                         0x40000000u,
                         *((PCWSTR *)ConfigurationHandle + 4),
                         (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                         ConfigurationHandle,
                         0LL);
    }
    if ( !v11 )
    {
      if ( RegistryValues >= 0 )
      {
LABEL_33:
        v14 = *ParameterValue;
        if ( (*ParameterValue)->ParameterType == NdisParameterString )
        {
          if ( ParameterType )
          {
            if ( ParameterType == NdisParameterHexInteger )
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v14->ParameterData, 0x10u, &v14->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterHexInteger;
            }
          }
          else
          {
            RtlUnicodeStringToInteger((PCUNICODE_STRING)&v14->ParameterData, 0xAu, &v14->ParameterData.IntegerData);
            (*ParameterValue)->ParameterType = NdisParameterInteger;
          }
        }
        goto LABEL_24;
      }
      if ( !RtlEqualUnicodeString(Keyword, &stru_1C00CE010, 1u) )
        goto LABEL_24;
      v25 = (_BYTE *)*((_QWORD *)ConfigurationHandle + 1);
      if ( !v25 || *v25 != 2 || v25[24] < 6u || (unsigned int)ndisReadUpperBindings(v25, &v29, &v28) )
        goto LABEL_24;
      v26 = v29;
      RegistryValues = ndisSaveParameters(
                         (wchar_t *)L"UpperBindings",
                         7u,
                         v29,
                         v28,
                         ConfigurationHandle,
                         ParameterValue);
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    if ( RegistryValues < 0 )
      goto LABEL_24;
    goto LABEL_33;
  }
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v11 + 3808);
    v16 = L"MiniportName";
    Buffer = *(wchar_t **)(v11 + 3816);
    v18 = 1;
    goto LABEL_40;
  }
  if ( RtlEqualUnicodeString(Keyword, &stru_1C00CE110, 1u)
    && (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) == 0 )
  {
    if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
    {
      v18 = 4;
      Buffer = (wchar_t *)(v11 + 3720);
      Length = 4;
    }
    else
    {
      if ( ParameterType != NdisParameterString )
        goto LABEL_9;
      String.MaximumLength = 40;
      String.Buffer = (wchar_t *)v35;
      RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v11 + 3720), 0xAu, &String);
      if ( RegistryValues )
        goto LABEL_24;
      Length = String.Length;
      v18 = 1;
      Buffer = String.Buffer;
    }
    v16 = (wchar_t *)L"BusType";
LABEL_40:
    RegistryValues = ndisSaveParameters(v16, v18, Buffer, Length, ConfigurationHandle, ParameterValue);
    goto LABEL_24;
  }
  do
  {
LABEL_9:
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C00CE020 + v10, 1u) )
    {
      v20 = *(_QWORD *)(v11 + 944);
      if ( !v20 )
        goto LABEL_24;
      v21 = *(_DWORD *)(v20 + 16);
      v22 = 0LL;
      if ( !v21 )
        goto LABEL_65;
      v23 = *((unsigned __int8 *)v33 + v10);
      while ( *(_BYTE *)(v20 + 20 * v22 + 20) != (_BYTE)v23 )
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_65;
      }
      if ( v23 == 1 )
      {
        v27 = *(_DWORD *)(v20 + 20 * v22 + 24);
        goto LABEL_64;
      }
      if ( v23 == 2 )
      {
        v24 = *(unsigned __int16 *)(v20 + 20 * v22 + 24);
      }
      else
      {
        if ( (unsigned int)(v23 - 3) > 1 )
        {
LABEL_64:
          RegistryValues = ndisSaveParameters(
                             *((wchar_t **)&unk_1C00CE020 + 2 * v10 + 1),
                             4u,
                             &v27,
                             4u,
                             ConfigurationHandle,
                             ParameterValue);
LABEL_65:
          if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 16) )
            RegistryValues = -1073741823;
          goto LABEL_24;
        }
        v24 = *(_DWORD *)(v20 + 20 * v22 + 24);
      }
      v27 = v24;
      goto LABEL_64;
    }
    ++v10;
  }
  while ( v10 < 9 );
  if ( RtlEqualUnicodeString(Keyword, &stru_1C00CE100, 1u) )
  {
    if ( ParameterType )
      goto LABEL_24;
    if ( ndisNDKGlobalDisabled() )
    {
      RegistryValues = 0;
      v19 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00D9D78;
      goto LABEL_80;
    }
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00CE0F0, 1u) )
  {
    if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
    {
      *(_DWORD *)(v11 + 568) |= 0x80u;
      *(_DWORD *)(v11 + 1872) |= 0x10000u;
    }
    goto LABEL_15;
  }
  if ( ParameterType )
    goto LABEL_24;
  dword_1C00EE6A0 = ndisReadNDKGlobalFlags();
  RegistryValues = 0;
  v19 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00EE698;
LABEL_80:
  *ParameterValue = v19;
LABEL_24:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
LABEL_27:
  *v32 = (RegistryValues >> 31) & 0xC0000001;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x20u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids);
}

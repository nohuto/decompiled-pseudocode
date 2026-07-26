/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C001B190
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002CE64 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002EDFC (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F5C4 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F734 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003232C (-ndisReadRssKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033010 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0064C50 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00696A4 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0071DC0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008C940 (-DisableMagicPacketKeyword@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C00945D0 (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 *     ?ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00A0A18 (-ndisUpdateHDSplitKeyword@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z @ 0x1C00A0BB4 (-ndisUpdateOffloadKeywords@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_PARAMETERS@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105724 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfGetFilterIfInfoFromRegistry @ 0x1C0105D64 (ndisIfGetFilterIfInfoFromRegistry.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x1C0105EB0 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01159F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CB9C (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012CC9C (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisOpenConfiguration @ 0x1C001AE70 (NdisOpenConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x1C001AFC0 (ndisAllocateConfigurationString.c)
 *     NdisOpenProtocolConfiguration @ 0x1C001D660 (NdisOpenProtocolConfiguration.c)
 *     ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x1C0060AA4 (-ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ndisWdfOpenConfiguration @ 0x1C011FAB0 (ndisWdfOpenConfiguration.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r15
  int v6; // eax
  int v7; // ebx
  bool v8; // zf
  _UNICODE_STRING *p_Destination; // r8
  PVOID *v11; // rdx
  void *v12; // r8
  const UNICODE_STRING *v13; // rcx
  const UNICODE_STRING *v14; // r8
  const UNICODE_STRING *v15; // rdx
  __int64 v16; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v19; // [rsp+A0h] [rbp+40h] BYREF
  int Status; // [rsp+B0h] [rbp+50h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  Status = 0;
  v3 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v19 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x13u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v7 = -1073741637;
        goto LABEL_18;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_16;
    case 3u:
      v13 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_34;
    case 4u:
      v13 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_34:
      v14 = 0LL;
      v15 = 0LL;
      goto LABEL_35;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v16 = *((_QWORD *)NdisHandle + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(v16 + 336) + 40LL) & 2) != 0 )
        {
          v6 = ndisGetOrCreateFilterInstanceKey(
                 (const struct _UNICODE_STRING *)(v16 + 144),
                 (struct _NDIS_FILTER_BLOCK *)NdisHandle,
                 *((struct _NDIS_MINIPORT_BLOCK **)NdisHandle + 4),
                 0,
                 &v19,
                 &Destination);
          goto LABEL_13;
        }
      }
      else if ( !RtlStringFromGUID(
                   (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4008LL),
                   &GuidString) )
      {
        v3 = 1;
        v6 = ndisAllocateConfigurationString(
               (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 144LL),
               &GuidString,
               &ndisFilterAdapterStr,
               &Destination);
LABEL_13:
        v7 = v6;
        Status = v6;
        v8 = v6 == 0;
        goto LABEL_14;
      }
LABEL_44:
      v7 = -1073741823;
      goto LABEL_18;
    case 0xAu:
      v12 = NdisHandle;
      v11 = ConfigurationHandle;
LABEL_32:
      NdisOpenConfiguration(&Status, v11, v12);
      goto LABEL_17;
    case 0x11u:
      v11 = ConfigurationHandle;
      if ( (*((_DWORD *)NdisHandle + 30) & 0x80u) != 0 )
      {
        v7 = ndisWdfOpenConfiguration((char)NdisHandle);
        goto LABEL_18;
      }
      v12 = (void *)*((_QWORD *)NdisHandle + 500);
      goto LABEL_32;
  }
  if ( *NdisHandle != 18 )
  {
    if ( *NdisHandle == 134 )
    {
      p_Destination = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
      goto LABEL_16;
    }
    goto LABEL_44;
  }
  v14 = (const UNICODE_STRING *)&ndisAdapterStr;
  v15 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3792LL);
  v13 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
LABEL_35:
  v7 = ndisAllocateConfigurationString(v13, v15, v14, &Destination);
  Status = v7;
  v8 = v7 == 0;
LABEL_14:
  if ( v8 )
  {
    p_Destination = &Destination;
LABEL_16:
    NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_Destination);
LABEL_17:
    v7 = Status;
  }
LABEL_18:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v7 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x14u,
      (struct _GUID *)&WPP_231a7ad8765e3b8a0571d07bdac2bb37_Traceguids,
      (char)ConfigObject,
      v7);
  return v7;
}

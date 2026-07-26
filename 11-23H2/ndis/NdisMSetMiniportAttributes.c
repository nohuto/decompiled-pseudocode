/*
 * XREFs of NdisMSetMiniportAttributes @ 0x1C0018430
 * Callers:
 *     ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012D874 (-ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0018668 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0018750 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0021724 (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z @ 0x1C006D9A4 (-ndisMSetHDSplitAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_HD_SPLIT_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C006DB90 (-ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_.c)
 *     ?ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006DCAC (-ndisMSetNicSwitchAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_A.c)
 *     ?ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E060 (-ndisMSetQosAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_.c)
 *     ?ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E2D0 (-ndisMSetReceiveFilterAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWA.c)
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E680 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 *     ?NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C008B22C (-NdisTraceLoggingNDKCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIB.c)
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1C008B8D0 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 *     ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C008BB5C (-NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTR.c)
 *     ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C008BC10 (-NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_AT.c)
 *     ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0091AAC (-ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNE.c)
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C01338E8 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     ?ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0137FC8 (-ndisMSetNDKAttributes@@YAHPEAXPEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 *     NdisMSetAttributesEx @ 0x1C01492A0 (NdisMSetAttributesEx.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportAttributes(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_ADAPTER_ATTRIBUTES MiniportAttributes)
{
  int v4; // ebx
  int Type; // r15d
  void *Pool2; // rax
  int v7; // eax
  int v8; // edx
  int v10; // edx
  unsigned int Flags; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  ULONG v16; // ebx
  int v17; // ecx
  unsigned int v18; // ecx
  UCHAR Revision; // al
  USHORT Size; // cx
  struct _NDIS_TCP_CONNECTION_OFFLOAD *DefaultTcpConnectionOffloadConfiguration; // r9
  struct _NDIS_TCP_CONNECTION_OFFLOAD *TcpConnectionOffloadHardwareCapabilities; // rax
  struct _NDIS_OFFLOAD *DefaultOffloadConfiguration; // rbp
  struct _NDIS_OFFLOAD *HardwareOffloadCapabilities; // r14

  v4 = 0;
  Type = MiniportAttributes->Header.Type;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Fu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)NdisMiniportHandle,
      MiniportAttributes->Header.Type);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( Type == 158 )
  {
    v10 = 16 * ((*(_WORD *)(*((_QWORD *)NdisMiniportHandle + 470) + 26LL) & 1) + 34);
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 1) != 0 )
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x200000u;
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 2) != 0 )
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x400000u;
    Flags = MiniportAttributes->AddDeviceRegistrationAttributes.Flags;
    v12 = v10 | 0x80;
    if ( (Flags & 4) == 0 )
      v12 = v10;
    v13 = v12 | 0x100;
    if ( (Flags & 8) == 0 )
      v13 = v12;
    v14 = v13 | 0x400;
    if ( (Flags & 0x10) == 0 )
      v14 = v13;
    v15 = v14 | 0x40;
    if ( (Flags & 0x20) == 0 )
      v15 = v14;
    v16 = v15 | 8;
    if ( (Flags & 0x40) == 0 )
      v16 = v15;
    if ( (Flags & 0x100) != 0 )
    {
      *((_DWORD *)NdisMiniportHandle + 468) |= 0x80000000;
      ndisUpdateNoPauseOnSuspend((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle);
    }
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x200) != 0 )
      *((_DWORD *)NdisMiniportHandle + 468) |= 0x200u;
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x400) != 0
      || *((_BYTE *)NdisMiniportHandle + 32) <= 6u
      && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x1Eu) )
    {
      *((_DWORD *)NdisMiniportHandle + 30) |= 0x400u;
    }
    NdisMSetAttributesEx(
      NdisMiniportHandle,
      MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext,
      MiniportAttributes->RegistrationAttributes.CheckForHangTimeInSeconds,
      v16,
      MiniportAttributes->RegistrationAttributes.InterfaceType);
    v17 = *((_DWORD *)NdisMiniportHandle + 30);
    if ( (MiniportAttributes->AddDeviceRegistrationAttributes.Flags & 0x80u) != 0 )
    {
      *((_DWORD *)NdisMiniportHandle + 31) |= 0x80u;
      v18 = v17 & 0xFFFEFFFF;
    }
    else
    {
      v18 = v17 | 0x10000;
    }
    *((_DWORD *)NdisMiniportHandle + 30) = v18;
    v4 = 0;
    goto LABEL_8;
  }
  if ( Type != 159 )
  {
    switch ( Type )
    {
      case 160:
        DefaultTcpConnectionOffloadConfiguration = 0LL;
        TcpConnectionOffloadHardwareCapabilities = 0LL;
        DefaultOffloadConfiguration = 0LL;
        HardwareOffloadCapabilities = 0LL;
        if ( MiniportAttributes->Header.Size >= 0x28u )
        {
          DefaultOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultOffloadConfiguration;
          HardwareOffloadCapabilities = MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities;
          DefaultTcpConnectionOffloadConfiguration = MiniportAttributes->OffloadAttributes.DefaultTcpConnectionOffloadConfiguration;
          TcpConnectionOffloadHardwareCapabilities = MiniportAttributes->OffloadAttributes.TcpConnectionOffloadHardwareCapabilities;
        }
        v4 = ndisMSetOffloadAttributes(
               (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
               DefaultOffloadConfiguration,
               HardwareOffloadCapabilities,
               DefaultTcpConnectionOffloadConfiguration,
               TcpConnectionOffloadHardwareCapabilities);
        if ( !v4 && dword_1C00F4210 )
          NdisTraceLoggingOffloads(
            (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
            HardwareOffloadCapabilities,
            DefaultOffloadConfiguration);
        goto LABEL_8;
      case 161:
        v7 = ndisMSetNative802_11Attributes(
               (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
               (struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *)MiniportAttributes);
        goto LABEL_7;
      case 164:
        *((_QWORD *)NdisMiniportHandle + 514) = MiniportAttributes->AddDeviceRegistrationAttributes.MiniportAddDeviceContext;
        goto LABEL_8;
    }
    if ( Type != 175 )
    {
      if ( Type == 179 )
      {
        v4 = ndisMSetNDKAttributes(NdisMiniportHandle, MiniportAttributes);
        if ( !v4 && dword_1C00F4210 )
          NdisTraceLoggingNDKCapabilities((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
        goto LABEL_8;
      }
      if ( Type == 197 )
      {
        v7 = ndisMSetPacketDirectAttributes(NdisMiniportHandle, MiniportAttributes);
        goto LABEL_7;
      }
LABEL_52:
      v4 = -1073741811;
      goto LABEL_8;
    }
    Revision = MiniportAttributes->Header.Revision;
    if ( !Revision )
      goto LABEL_52;
    Size = MiniportAttributes->Header.Size;
    if ( Size < 0x10u )
      goto LABEL_52;
    if ( Revision == 2 )
    {
      if ( Size < 0x30u )
        goto LABEL_52;
    }
    else if ( Revision >= 3u && Size < 0x50u )
    {
      goto LABEL_52;
    }
    if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u
      || *((_BYTE *)NdisMiniportHandle + 32) == 6 && *((_BYTE *)NdisMiniportHandle + 33) )
    {
      v4 = ndisMSetHDSplitAttributes(
             (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
             MiniportAttributes->HardwareAssistAttributes.HDSplitAttributes);
      if ( v4 < 0 )
        goto LABEL_8;
      if ( MiniportAttributes->Header.Revision >= 2u )
      {
        if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
          && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
        {
          goto LABEL_58;
        }
        if ( MiniportAttributes->OffloadAttributes.HardwareOffloadCapabilities )
        {
          if ( MiniportAttributes->GeneralAttributes.MaxXmitLinkSpeed )
          {
            v4 = ndisMSetReceiveFilterAttributes(
                   (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                   (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
            if ( v4 < 0 )
              goto LABEL_8;
          }
        }
        if ( MiniportAttributes->Header.Revision >= 2u )
        {
          if ( *((_BYTE *)NdisMiniportHandle + 32) <= 6u
            && (*((_BYTE *)NdisMiniportHandle + 32) != 6 || *((_BYTE *)NdisMiniportHandle + 33) < 0x14u) )
          {
            goto LABEL_58;
          }
          if ( MiniportAttributes->GeneralAttributes.XmitLinkSpeed )
          {
            if ( MiniportAttributes->GeneralAttributes.MaxRcvLinkSpeed )
            {
              v4 = ndisMSetNicSwitchAttributes(
                     (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                     (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
              if ( v4 < 0 )
                goto LABEL_8;
            }
          }
        }
      }
      if ( MiniportAttributes->Header.Revision < 3u )
        goto LABEL_8;
      if ( *((_BYTE *)NdisMiniportHandle + 32) > 6u
        || *((_BYTE *)NdisMiniportHandle + 32) == 6 && *((_BYTE *)NdisMiniportHandle + 33) >= 0x1Eu )
      {
        if ( !MiniportAttributes->GeneralAttributes.RcvLinkSpeed
          || !MiniportAttributes->Native_802_11_Attributes.WFDAttributes
          || (v4 = ndisMSetSriovAttributes(
                     (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                     (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes),
              v4 >= 0) )
        {
          if ( MiniportAttributes->HardwareAssistAttributes.HardwareQosCapabilities )
          {
            if ( MiniportAttributes->GeneralAttributes.PowerManagementCapabilities )
            {
              v4 = ndisMSetQosAttributes(
                     (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                     (struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *)MiniportAttributes);
              if ( v4 >= 0 )
              {
                NdisTraceLoggingQosHardwareOffloads(
                  (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
                  MiniportAttributes);
                NdisTraceLoggingQosConfigOffloads((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, MiniportAttributes);
              }
            }
          }
        }
        goto LABEL_8;
      }
    }
LABEL_58:
    v4 = -1073741637;
    goto LABEL_8;
  }
  Pool2 = (void *)ExAllocatePool2(66LL, MiniportAttributes->Header.Size, 538985550);
  *((_QWORD *)NdisMiniportHandle + 339) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, MiniportAttributes, MiniportAttributes->Header.Size);
    v7 = ndisMSetGeneralAttributes(
           (struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle,
           *((struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)NdisMiniportHandle + 339));
LABEL_7:
    v4 = v7;
    goto LABEL_8;
  }
  v4 = -1073741670;
LABEL_8:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      112,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)NdisMiniportHandle,
      Type,
      v4);
  return v4;
}

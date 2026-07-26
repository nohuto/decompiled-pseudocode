/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0018750
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018430 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0021284 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C006DF48 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C006E5D8 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0110BB0 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C012D800 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

int __fastcall ndisMSetGeneralAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  bool v8; // zf
  _NDIS_MEDIUM MediaType; // eax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int Flags; // ecx
  unsigned int v13; // ecx
  KIRQL v14; // dl
  UCHAR Revision; // al
  _NDIS_PM_CAPABILITIES *PowerManagementCapabilitiesEx; // rdx
  struct _NDIS_RECEIVE_SCALE_CAPABILITIES *RecvScaleCapabilities; // rdx
  unsigned int SupportedPacketFilters; // ecx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int LookaheadSize; // eax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // ecx
  _NDIS_PHYSICAL_MEDIUM v23; // eax
  bool v24; // cf
  unsigned int SupportedOidListLength; // eax
  unsigned int *Pool2; // rax
  __int128 v27; // xmm0
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int *p_SupportedOidListLength; // rax
  unsigned int *v31; // rax
  int result; // eax
  struct _NDIS_IF_BLOCK *v33; // rax
  struct _NDIS_PNP_CAPABILITIES *PowerManagementCapabilities; // rcx
  unsigned int SupportedStatistics; // eax
  int NewIrql; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(NewIrql) = 0;
  v4 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x77u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v33 = ndisMReferenceIfBlock(a1, MPIFREF_SET_ATTRIBUTES);
    if ( !v33 )
      return -1073676271;
    a2->IfType = v33->ifType;
    a2->MediaType = v33->MediaType;
    a2->PhysicalMediumType = v33->PhysicalMediumType;
    a2->IfConnectorPresent = v33->ifConnectorPresent;
    a2->AccessType = v33->AccessType;
    a2->ConnectionType = v33->ConnectionType;
    a2->DirectionType = v33->DirectionType;
    a2->LookaheadSize = 1500;
    a2->MacOptions = 581;
    ndisMDereferenceIfBlock(a1, MPIFREF_SET_ATTRIBUTES);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return -1073676263;
  do
  {
    if ( a2->MediaType == *((_DWORD *)ndisMediumArray + v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v5 >= (unsigned int)ndisMediumArraySize )
    return -1073676263;
  ndisReadDataLinkLayerKeywords(a1);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v7 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v7 != InterlockedFlags );
  v8 = (InterlockedFlags & 0x100) == 0;
  MediaType = a2->MediaType;
  if ( !v8 )
  {
    a1->MpSpecifiedMediaType = MediaType;
    MediaType = a1->DataLinkLayerType;
  }
  a1->MediaType = MediaType;
  a1->MiniportMediaType = MediaType;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = a2->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = a2->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = a2->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = a2->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = a2->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a2->MediaConnectState;
    Flags = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v13 = Flags | 0x20000000;
    else
      v13 = Flags & 0xDFFFFFFF;
    a1->Flags = v13;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = a2->RcvLinkSpeed;
    a1->XmitLinkSpeed = a2->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = a2->MediaDuplexState;
  ndisIfSetInterfaceState(a1, 0, NewIrql);
  v14 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v14);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledWoLPacketPatterns = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.WakeUpFlags = 0LL;
  NewIrql = 1311360;
  a1->PMCurrentParameters.Header = (_NDIS_OBJECT_HEADER)1311360;
  Revision = a2->Header.Revision;
  if ( Revision == 1 )
  {
    PowerManagementCapabilities = a2->PowerManagementCapabilities;
    if ( PowerManagementCapabilities )
    {
      ndisConvertPnpCapabilitiesToPM(PowerManagementCapabilities, &a1->PMHardwareCapabilities);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  if ( Revision < 2u || (PowerManagementCapabilitiesEx = a2->PowerManagementCapabilitiesEx) == 0LL )
  {
LABEL_26:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_28;
  }
  result = ndisMSetPowerManagementCapabilities((char)a1, (char)PowerManagementCapabilitiesEx);
  v4 = result;
  if ( result )
    return result;
LABEL_28:
  RecvScaleCapabilities = a2->RecvScaleCapabilities;
  if ( RecvScaleCapabilities )
  {
    result = ndisMSetRssCapabilities(a1, RecvScaleCapabilities);
    v4 = result;
    if ( result )
      return result;
  }
  v8 = (a1->DeviceFlags & 1) == 0;
  SupportedPacketFilters = a2->SupportedPacketFilters;
  a1->SupportedPacketFilters = SupportedPacketFilters;
  if ( !v8 )
    a1->SupportedPacketFilters = SupportedPacketFilters | 0x20;
  v19 = a1->MediaType;
  a1->MaxXmitLinkSpeed = a2->MaxXmitLinkSpeed;
  a1->MaxRcvLinkSpeed = a2->MaxRcvLinkSpeed;
  v20 = a1->MacOptions | a2->MacOptions;
  a1->MacOptions = v20;
  if ( (_DWORD)v19 )
  {
    if ( (_DWORD)v19 == 3 )
    {
      a1->MiniportMaximumLookahead = 512;
    }
    else
    {
      if ( (_DWORD)v19 == 4
        || (_DWORD)v19 == 9
        || (_DWORD)v19 == 10
        || (_DWORD)v19 == 15
        || (_DWORD)v19 == 16
        || (unsigned int)(v19 - 18) <= 1 )
      {
        a1->MiniportMaximumLookahead = a2->LookaheadSize;
      }
      if ( (int)v19 >= 20 )
        a1->MiniportMaximumLookahead = a2->LookaheadSize;
      if ( (unsigned int)v19 > 0x13 )
      {
LABEL_92:
        if ( (_DWORD)v19 != 3 )
          goto LABEL_38;
        goto LABEL_36;
      }
    }
  }
  else
  {
    LookaheadSize = a2->LookaheadSize;
    if ( LookaheadSize > 0x200 )
      LookaheadSize = 512;
    a1->MiniportMaximumLookahead = LookaheadSize;
  }
  if ( !ndisMediaTypeCl[v19] )
    goto LABEL_92;
LABEL_36:
  if ( (v20 & 0x80000001) == 0x80000001 )
    a1->MiniportMaximumLookahead = 512;
LABEL_38:
  if ( (int)v19 > 10 )
  {
    if ( (_DWORD)v19 != 11
      && (_DWORD)v19 != 12
      && (_DWORD)v19 != 13
      && (_DWORD)v19 != 14
      && (_DWORD)v19 != 15
      && (_DWORD)v19 != 17
      && (int)v19 < 20 )
    {
      goto LABEL_46;
    }
  }
  else if ( (_DWORD)v19 != 10
         && (_DWORD)v19 != 2
         && (_DWORD)v19 != 3
         && (_DWORD)v19 != 4
         && (_DWORD)v19 != 5
         && (_DWORD)v19 != 6
         && (unsigned int)(v19 - 7) >= 2 )
  {
LABEL_46:
    PhysicalMediumType = a2->PhysicalMediumType;
    goto LABEL_47;
  }
  PhysicalMediumType = NdisPhysicalMediumUnspecified;
LABEL_47:
  a1->PhysicalMediumType = PhysicalMediumType;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  if ( (_DWORD)v19 )
  {
    v23 = PhysicalMediumType;
    if ( (_DWORD)v19 == 16 )
    {
      a1->MaximumLongAddresses = a2->MaxMulticastListSize;
      v23 = PhysicalMediumType;
    }
  }
  else
  {
    a1->MaximumLongAddresses = a2->MaxMulticastListSize;
    v23 = PhysicalMediumType;
    if ( PhysicalMediumType == NdisPhysicalMediumWirelessLan && a1->MajorNdisVersion >= 6u )
      return -1073741637;
  }
  if ( v23 == NdisPhysicalMediumUnspecified && a1->PhysicalMediumInInf == 14 )
  {
    a1->PhysicalMediumType = NdisPhysicalMedium802_3;
    v23 = NdisPhysicalMedium802_3;
  }
  v24 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = v23;
  if ( v24 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    a2->SupportedStatistics = SupportedStatistics;
  else
    a1->SupportedStatistics = a2->SupportedStatistics;
  a1->DataBackFillSize = a2->DataBackFillSize;
  a1->ContextBackFillSize = a2->ContextBackFillSize;
  SupportedOidListLength = a2->SupportedOidListLength;
  if ( SupportedOidListLength )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(66LL, SupportedOidListLength, 1835091022);
    a1->SupportedOidList = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, a2->SupportedOidList, a2->SupportedOidListLength);
      a1->SupportedOidListLength = a2->SupportedOidListLength;
    }
  }
  v27 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = a2->AccessType;
  a1->TopFilterRestartAttributes.ConnectionType = a2->ConnectionType;
  a1->TopFilterRestartAttributes.ContextBackFillSize = a2->ContextBackFillSize;
  a1->TopFilterRestartAttributes.DataBackFillSize = a2->DataBackFillSize;
  a1->TopFilterRestartAttributes.Header = a2->Header;
  a1->TopFilterRestartAttributes.LookaheadSize = a2->LookaheadSize;
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->MaxMulticastListSize;
  a1->TopFilterRestartAttributes.MtuSize = a2->MtuSize;
  v28 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v27;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v28;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->SupportedPacketFilters;
  a1->TopFilterRestartAttributes.SupportedStatistics = a2->SupportedStatistics;
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->MaxXmitLinkSpeed;
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->MaxRcvLinkSpeed;
  v29 = a2->SupportedOidListLength;
  if ( v29 )
  {
    p_SupportedOidListLength = &a1->SupportedOidListLength;
    if ( a1->MajorNdisVersion >= 6u )
      goto LABEL_59;
    goto LABEL_111;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    p_SupportedOidListLength = &a1->SupportedOidListLength;
    if ( a1->SupportedOidListLength )
    {
LABEL_111:
      v29 = *p_SupportedOidListLength;
      a2->SupportedOidListLength = *p_SupportedOidListLength;
      a2->SupportedOidList = a1->SupportedOidList;
LABEL_59:
      v31 = (unsigned int *)ExAllocatePool2(66LL, v29, 1835091022);
      a1->TopFilterRestartAttributes.SupportedOidList = v31;
      if ( v31 )
      {
        memmove(v31, a2->SupportedOidList, a2->SupportedOidListLength);
        a1->TopFilterRestartAttributes.SupportedOidListLength = a2->SupportedOidListLength;
      }
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x78u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      v4);
  return 0;
}

/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C001834C
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C0018820 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0020370 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C0068B6C (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00691FC (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105724 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0121D80 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
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
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int LookaheadSize; // eax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  _NDIS_MEDIUM v23; // eax
  bool v24; // cf
  _NDIS_PHYSICAL_MEDIUM v25; // eax
  unsigned int SupportedOidListLength; // eax
  unsigned int *Pool2; // rax
  __int128 v28; // xmm0
  int v29; // eax
  unsigned int v30; // ecx
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
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
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
  if ( !(_DWORD)v19 )
  {
    LookaheadSize = a2->LookaheadSize;
    if ( LookaheadSize > 0x200 )
      LookaheadSize = 512;
    a1->MiniportMaximumLookahead = LookaheadSize;
    goto LABEL_35;
  }
  if ( (_DWORD)v19 == 3 )
  {
    a1->MiniportMaximumLookahead = 512;
LABEL_35:
    if ( (ndisMediaTypeCl[v19] || (_DWORD)v19 == 3) && (v20 & 0x80000001) == 0x80000001 )
      a1->MiniportMaximumLookahead = 512;
    goto LABEL_38;
  }
  if ( (_DWORD)v19 == 4
    || (int)v19 > 8 && ((int)v19 <= 10 || (int)v19 > 14 && ((int)v19 <= 16 || (unsigned int)(v19 - 18) <= 1)) )
  {
    a1->MiniportMaximumLookahead = a2->LookaheadSize;
  }
  if ( (int)v19 >= 20 )
    a1->MiniportMaximumLookahead = a2->LookaheadSize;
  if ( (unsigned int)v19 <= 0x13 )
    goto LABEL_35;
LABEL_38:
  if ( (int)v19 >= 2 && ((int)v19 <= 8 || (int)v19 > 9 && ((int)v19 <= 15 || (_DWORD)v19 == 17)) || (int)v19 >= 20 )
    PhysicalMediumType = NdisPhysicalMediumUnspecified;
  else
    PhysicalMediumType = a2->PhysicalMediumType;
  a1->PhysicalMediumType = PhysicalMediumType;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  v23 = a1->MediaType;
  if ( v23 )
  {
    if ( v23 == NdisMediumNative802_11 )
      a1->MaximumLongAddresses = a2->MaxMulticastListSize;
  }
  else
  {
    v24 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = a2->MaxMulticastListSize;
    if ( !v24 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return -1073741637;
  }
  v25 = a1->PhysicalMediumType;
  if ( v25 == NdisPhysicalMediumUnspecified )
  {
    v25 = NdisPhysicalMediumUnspecified;
    if ( a1->PhysicalMediumInInf == 14 )
    {
      a1->PhysicalMediumType = NdisPhysicalMedium802_3;
      v25 = NdisPhysicalMedium802_3;
    }
  }
  v24 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = v25;
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
  v28 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = a2->AccessType;
  a1->TopFilterRestartAttributes.ConnectionType = a2->ConnectionType;
  a1->TopFilterRestartAttributes.ContextBackFillSize = a2->ContextBackFillSize;
  a1->TopFilterRestartAttributes.DataBackFillSize = a2->DataBackFillSize;
  a1->TopFilterRestartAttributes.Header = a2->Header;
  a1->TopFilterRestartAttributes.LookaheadSize = a2->LookaheadSize;
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->MaxMulticastListSize;
  a1->TopFilterRestartAttributes.MtuSize = a2->MtuSize;
  v29 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v28;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v29;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->SupportedPacketFilters;
  a1->TopFilterRestartAttributes.SupportedStatistics = a2->SupportedStatistics;
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->MaxXmitLinkSpeed;
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->MaxRcvLinkSpeed;
  v30 = a2->SupportedOidListLength;
  if ( v30 )
  {
    if ( a1->MajorNdisVersion >= 6u )
      goto LABEL_54;
    goto LABEL_101;
  }
  if ( a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
LABEL_101:
    v30 = a1->SupportedOidListLength;
    a2->SupportedOidListLength = v30;
    a2->SupportedOidList = a1->SupportedOidList;
LABEL_54:
    v31 = (unsigned int *)ExAllocatePool2(66LL, v30, 1835091022);
    a1->TopFilterRestartAttributes.SupportedOidList = v31;
    if ( v31 )
    {
      memmove(v31, a2->SupportedOidList, a2->SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->SupportedOidListLength;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x78u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      v4);
  return 0;
}

/*
 * XREFs of ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0021A24
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B40 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D74C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001DB40 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001FAB8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021450 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00214DC (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C154 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  _NDIS_FILTER_BLOCK *HighestFilter; // rax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rax
  __int128 v9; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v10; // rax
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rax
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+C0h] [rbp-48h]
  int v18; // [rsp+C8h] [rbp-40h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // [rsp+CCh] [rbp-3Ch]
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+D0h] [rbp-38h]
  int v21; // [rsp+D4h] [rbp-34h]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+D8h] [rbp-30h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+E0h] [rbp-28h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+E8h] [rbp-20h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+ECh] [rbp-1Ch]
  __int128 v26; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int Flags; // [rsp+100h] [rbp-8h]
  __int128 v28; // [rsp+108h] [rbp+0h] BYREF
  __int64 v29; // [rsp+118h] [rbp+10h]
  unsigned int MaxHeaderSize; // [rsp+120h] [rbp+18h]
  __int128 v31; // [rsp+128h] [rbp+20h] BYREF
  __int128 v32; // [rsp+138h] [rbp+30h]
  __int128 v33; // [rsp+148h] [rbp+40h]
  __int64 v34; // [rsp+158h] [rbp+50h]
  _OWORD v35[6]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v36[9]; // [rsp+1C8h] [rbp+C0h] BYREF
  _OWORD v37[14]; // [rsp+258h] [rbp+150h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v21 = 0;
  v16 = 0LL;
  ifOperStatusFlags = 0;
  LOBYTE(v14) = 0;
  memset(v37, 0, 0xD8uLL);
  Flags = 0;
  v29 = 0LL;
  MaxHeaderSize = 0;
  v26 = 0LL;
  v28 = 0LL;
  memset(v35, 0, 0x54uLL);
  memset(v36, 0, 0x84uLL);
  v31 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x4Fu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a1,
      v14);
  ndisMAcquireStInLockWithSpinLock(MiniportHandle, (unsigned __int8 *)&v14);
  v18 = 2621824;
  HighestFilter = MiniportHandle->HighestFilter;
  if ( HighestFilter )
  {
    MediaConnectStateIndicateUp = HighestFilter->MediaConnectStateIndicateUp;
    MediaDuplexStateIndicateUp = MiniportHandle->HighestFilter->MediaDuplexStateIndicateUp;
    XmitLinkSpeedIndicateUp = MiniportHandle->HighestFilter->XmitLinkSpeedIndicateUp;
    RcvLinkSpeedIndicateUp = MiniportHandle->HighestFilter->RcvLinkSpeedIndicateUp;
    PauseFunctionsIndicateUp = MiniportHandle->HighestFilter->PauseFunctionsIndicateUp;
    AutoNegotiationFlagsIndicateUp = MiniportHandle->HighestFilter->AutoNegotiationFlagsIndicateUp;
  }
  else
  {
    MediaConnectStateIndicateUp = MiniportHandle->MediaConnectState;
    MediaDuplexStateIndicateUp = MiniportHandle->MediaDuplexState;
    XmitLinkSpeedIndicateUp = MiniportHandle->XmitLinkSpeed;
    RcvLinkSpeedIndicateUp = MiniportHandle->RcvLinkSpeed;
    PauseFunctionsIndicateUp = MiniportHandle->PauseFunctions;
    AutoNegotiationFlagsIndicateUp = MiniportHandle->AutoNegotiationFlags;
  }
  memset(&v15, 0, sizeof(v15));
  v15.Flags |= 3u;
  v15.StatusBuffer = &v18;
  v15.Header = (_NDIS_OBJECT_HEADER)7340440;
  v15.SourceHandle = MiniportHandle;
  v15.StatusCode = 1073807383;
  v15.StatusBufferSize = 40;
  v15.DestinationHandle = a1;
  ndisIndicateStatusInternal(MiniportHandle, &v15);
  if ( ndisMReferenceIfBlock(MiniportHandle, 0x11u) )
  {
    LODWORD(v16) = 786816;
    HIDWORD(v16) = MiniportHandle->IfBlock->ifOperStatus;
    ifOperStatusFlags = MiniportHandle->IfBlock->ifOperStatusFlags;
    memset(&v15, 0, sizeof(v15));
    v15.Flags |= 1u;
    v15.StatusBuffer = &v16;
    v15.Header = (_NDIS_OBJECT_HEADER)7340440;
    v15.SourceHandle = MiniportHandle;
    v15.StatusCode = 1073807395;
    v15.StatusBufferSize = 12;
    v15.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v15);
    ndisMDereferenceIfBlock(MiniportHandle, MPIFREF_INITIALSTATE);
  }
  Offload = MiniportHandle->Offload;
  if ( Offload )
  {
    if ( Offload->SupportsTopOffload == 1 )
    {
      p_TopCapabilities = &Offload->TopCapabilities;
      v37[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v37[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v37[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v37[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v37[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v37[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v37[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v9 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v37[7] = v9;
      v37[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v37[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v37[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v37[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v37[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v37[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      memset(&v15, 0, sizeof(v15));
      v15.Flags |= 1u;
      v15.StatusBuffer = v37;
      v15.Header = (_NDIS_OBJECT_HEADER)7340440;
      v15.SourceHandle = MiniportHandle;
      v15.StatusCode = 1073872902;
      v15.StatusBufferSize = 216;
      v15.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v15);
    }
    v10 = MiniportHandle->Offload;
    if ( v10->SupportsTcpConnectionOffload == 1 && !v10->TopConnectionOffloadPaused )
    {
      v26 = *(_OWORD *)&v10->TopTcpConnectionOffloadCapabilities.Header.Type;
      Flags = v10->TopTcpConnectionOffloadCapabilities.Flags;
      memset(&v15, 0, sizeof(v15));
      v15.Flags |= 1u;
      v15.StatusBuffer = &v26;
      v15.Header = (_NDIS_OBJECT_HEADER)7340440;
      v15.SourceHandle = MiniportHandle;
      v15.StatusCode = 1073872899;
      v15.StatusBufferSize = 20;
      v15.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v15);
    }
  }
  HDSplitCurrentConfig = MiniportHandle->HDSplitCurrentConfig;
  if ( HDSplitCurrentConfig )
  {
    v28 = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
    v29 = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
    MaxHeaderSize = HDSplitCurrentConfig->MaxHeaderSize;
    memset(&v15, 0, sizeof(v15));
    v15.Flags |= 1u;
    v15.StatusBuffer = &v28;
    v15.Header = (_NDIS_OBJECT_HEADER)7340440;
    v15.SourceHandle = MiniportHandle;
    v15.StatusCode = 1073872908;
    v15.StatusBufferSize = 28;
    v15.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v15);
  }
  if ( !MiniportHandle->NumReceiveQueues
    && (MiniportHandle->TopNicSwitchCurrentCapabilities || MiniportHandle->TopReceiveFilterCurrentCapabilities) )
  {
    SriovCurrentCapabilities = MiniportHandle->SriovCurrentCapabilities;
    if ( (!SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3)
      && !ndisIovNicSwitchWithoutIovSupported(MiniportHandle) )
    {
      TopReceiveFilterCurrentCapabilities = MiniportHandle->TopReceiveFilterCurrentCapabilities;
      if ( TopReceiveFilterCurrentCapabilities )
      {
        v35[0] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->Header.Type;
        v35[1] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->NumQueues;
        v35[2] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedMacHeaderFields;
        v35[3] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->MinLookaheadSplitSize;
        v35[4] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedIPv6HeaderFields;
        LODWORD(v35[5]) = TopReceiveFilterCurrentCapabilities->NdisReserved;
        memset(&v15, 0, sizeof(v15));
        v15.Flags |= 1u;
        v15.StatusBuffer = v35;
        v15.Header = (_NDIS_OBJECT_HEADER)7340440;
        v15.SourceHandle = MiniportHandle;
        v15.StatusCode = 1073872912;
        v15.StatusBufferSize = 84;
        v15.DestinationHandle = a1;
        ndisIndicateStatusInternal(MiniportHandle, &v15);
      }
      TopNicSwitchCurrentCapabilities = MiniportHandle->TopNicSwitchCurrentCapabilities;
      if ( TopNicSwitchCurrentCapabilities )
      {
        v36[0] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->Header.Type;
        v36[1] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NumMacAddressesPerPort;
        v36[2] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NicSwitchCapabilities;
        v36[3] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->MaxNumVFs;
        v36[4] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved7;
        v36[5] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved10;
        v36[6] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved13;
        v36[7] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved17;
        LODWORD(v36[8]) = TopNicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort;
        memset(&v15, 0, sizeof(v15));
        v15.Flags |= 1u;
        v15.StatusBuffer = v36;
        v15.Header = (_NDIS_OBJECT_HEADER)7340440;
        v15.SourceHandle = MiniportHandle;
        v15.StatusCode = 1073872960;
        v15.StatusBufferSize = 132;
        v15.DestinationHandle = a1;
        ndisIndicateStatusInternal(MiniportHandle, &v15);
      }
    }
  }
  TopHwTimestampCapabilities = MiniportHandle->TopHwTimestampCapabilities;
  if ( TopHwTimestampCapabilities )
  {
    v31 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
    v32 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
    v33 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
    v34 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
    memset(&v15, 0, sizeof(v15));
    v15.Flags |= 1u;
    v15.StatusBuffer = &v31;
    v15.Header = (_NDIS_OBJECT_HEADER)7340440;
    v15.SourceHandle = MiniportHandle;
    v15.StatusCode = 1074073600;
    v15.StatusBufferSize = 56;
    v15.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v15);
  }
  TopTimestampConfig = MiniportHandle->TopTimestampConfig;
  if ( TopTimestampConfig )
  {
    v31 = *(_OWORD *)&TopTimestampConfig->Header.Type;
    v32 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
    v33 = *(_OWORD *)&TopTimestampConfig->Reserved2;
    v34 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
    memset(&v15, 0, sizeof(v15));
    v15.Flags |= 1u;
    v15.StatusBuffer = &v31;
    v15.Header = (_NDIS_OBJECT_HEADER)7340440;
    v15.SourceHandle = MiniportHandle;
    v15.StatusCode = 1074073601;
    v15.StatusBufferSize = 56;
    v15.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v15);
  }
  ndisMReleaseStInLockAndSpinLock(MiniportHandle, v14);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x50u,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      a1);
}

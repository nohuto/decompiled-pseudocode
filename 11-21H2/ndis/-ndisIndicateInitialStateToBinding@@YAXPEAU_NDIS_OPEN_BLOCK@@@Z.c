/*
 * XREFs of ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00240EC
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001BCF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001BD40 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001EBE0 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0020544 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C00205DC (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002F194 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
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
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // r8
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rax
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_STATUS_INDICATION v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+C0h] [rbp-48h]
  int v17; // [rsp+C8h] [rbp-40h] BYREF
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // [rsp+CCh] [rbp-3Ch]
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // [rsp+D0h] [rbp-38h]
  int v20; // [rsp+D4h] [rbp-34h]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+D8h] [rbp-30h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+E0h] [rbp-28h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+E8h] [rbp-20h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+ECh] [rbp-1Ch]
  __int128 v25; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int Flags; // [rsp+100h] [rbp-8h]
  __int128 v27; // [rsp+108h] [rbp+0h] BYREF
  __int64 v28; // [rsp+118h] [rbp+10h]
  unsigned int MaxHeaderSize; // [rsp+120h] [rbp+18h]
  __int128 v30; // [rsp+128h] [rbp+20h] BYREF
  __int128 v31; // [rsp+138h] [rbp+30h]
  __int128 v32; // [rsp+148h] [rbp+40h]
  __int64 v33; // [rsp+158h] [rbp+50h]
  _OWORD v34[6]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v35[9]; // [rsp+1C8h] [rbp+C0h] BYREF
  _OWORD v36[14]; // [rsp+258h] [rbp+150h] BYREF

  MiniportHandle = a1->MiniportHandle;
  v20 = 0;
  v15 = 0LL;
  ifOperStatusFlags = 0;
  LOBYTE(v13) = 0;
  memset(v36, 0, 0xD8uLL);
  Flags = 0;
  v28 = 0LL;
  MaxHeaderSize = 0;
  v25 = 0LL;
  v27 = 0LL;
  memset(v34, 0, 0x54uLL);
  memset(v35, 0, 0x84uLL);
  v30 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x4Fu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1,
      v13);
  ndisMAcquireStInLockWithSpinLock(MiniportHandle, (unsigned __int8 *)&v13);
  v17 = 2621824;
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
  memset(&v14, 0, sizeof(v14));
  v14.Flags |= 3u;
  v14.StatusBuffer = &v17;
  v14.Header = (_NDIS_OBJECT_HEADER)7340440;
  v14.SourceHandle = MiniportHandle;
  v14.StatusCode = 1073807383;
  v14.StatusBufferSize = 40;
  v14.DestinationHandle = a1;
  ndisIndicateStatusInternal(MiniportHandle, &v14);
  if ( ndisMReferenceIfBlock(MiniportHandle, 0x11u) )
  {
    LODWORD(v15) = 786816;
    HIDWORD(v15) = MiniportHandle->IfBlock->ifOperStatus;
    ifOperStatusFlags = MiniportHandle->IfBlock->ifOperStatusFlags;
    memset(&v14, 0, sizeof(v14));
    v14.Flags |= 1u;
    v14.StatusBuffer = &v15;
    v14.Header = (_NDIS_OBJECT_HEADER)7340440;
    v14.SourceHandle = MiniportHandle;
    v14.StatusCode = 1073807395;
    v14.StatusBufferSize = 12;
    v14.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v14);
    ndisMDereferenceIfBlock(MiniportHandle, MPIFREF_INITIALSTATE);
  }
  Offload = MiniportHandle->Offload;
  if ( Offload )
  {
    if ( Offload->SupportsTopOffload == 1 )
    {
      p_TopCapabilities = &Offload->TopCapabilities;
      v36[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v36[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v36[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v36[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v36[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v36[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v36[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v9 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v36[7] = v9;
      v36[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v36[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v36[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v36[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v36[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v36[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      memset(&v14, 0, sizeof(v14));
      v14.Flags |= 1u;
      v14.StatusBuffer = v36;
      v14.Header = (_NDIS_OBJECT_HEADER)7340440;
      v14.SourceHandle = MiniportHandle;
      v14.StatusCode = 1073872902;
      v14.StatusBufferSize = 216;
      v14.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v14);
      Offload = MiniportHandle->Offload;
    }
    if ( Offload->SupportsTcpConnectionOffload == 1 && !Offload->TopConnectionOffloadPaused )
    {
      v25 = *(_OWORD *)&Offload->TopTcpConnectionOffloadCapabilities.Header.Type;
      Flags = Offload->TopTcpConnectionOffloadCapabilities.Flags;
      memset(&v14, 0, sizeof(v14));
      v14.Flags |= 1u;
      v14.StatusBuffer = &v25;
      v14.Header = (_NDIS_OBJECT_HEADER)7340440;
      v14.SourceHandle = MiniportHandle;
      v14.StatusCode = 1073872899;
      v14.StatusBufferSize = 20;
      v14.DestinationHandle = a1;
      ndisIndicateStatusInternal(MiniportHandle, &v14);
    }
  }
  HDSplitCurrentConfig = MiniportHandle->HDSplitCurrentConfig;
  if ( HDSplitCurrentConfig )
  {
    v27 = *(_OWORD *)&HDSplitCurrentConfig->Header.Type;
    v28 = *(_QWORD *)&HDSplitCurrentConfig->HDSplitCombineFlags;
    MaxHeaderSize = HDSplitCurrentConfig->MaxHeaderSize;
    memset(&v14, 0, sizeof(v14));
    v14.Flags |= 1u;
    v14.StatusBuffer = &v27;
    v14.Header = (_NDIS_OBJECT_HEADER)7340440;
    v14.SourceHandle = MiniportHandle;
    v14.StatusCode = 1073872908;
    v14.StatusBufferSize = 28;
    v14.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v14);
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
        v34[0] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->Header.Type;
        v34[1] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->NumQueues;
        v34[2] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedMacHeaderFields;
        v34[3] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->MinLookaheadSplitSize;
        v34[4] = *(_OWORD *)&TopReceiveFilterCurrentCapabilities->SupportedIPv6HeaderFields;
        LODWORD(v34[5]) = TopReceiveFilterCurrentCapabilities->NdisReserved;
        memset(&v14, 0, sizeof(v14));
        v14.Flags |= 1u;
        v14.StatusBuffer = v34;
        v14.Header = (_NDIS_OBJECT_HEADER)7340440;
        v14.SourceHandle = MiniportHandle;
        v14.StatusCode = 1073872912;
        v14.StatusBufferSize = 84;
        v14.DestinationHandle = a1;
        ndisIndicateStatusInternal(MiniportHandle, &v14);
        TopNicSwitchCurrentCapabilities = MiniportHandle->TopNicSwitchCurrentCapabilities;
      }
      if ( TopNicSwitchCurrentCapabilities )
      {
        v35[0] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->Header.Type;
        v35[1] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NumMacAddressesPerPort;
        v35[2] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NicSwitchCapabilities;
        v35[3] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->MaxNumVFs;
        v35[4] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved7;
        v35[5] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved10;
        v35[6] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved13;
        v35[7] = *(_OWORD *)&TopNicSwitchCurrentCapabilities->NdisReserved17;
        LODWORD(v35[8]) = TopNicSwitchCurrentCapabilities->MaxNumQueuePairsForDefaultVPort;
        memset(&v14, 0, sizeof(v14));
        v14.Flags |= 1u;
        v14.StatusBuffer = v35;
        v14.Header = (_NDIS_OBJECT_HEADER)7340440;
        v14.SourceHandle = MiniportHandle;
        v14.StatusCode = 1073872960;
        v14.StatusBufferSize = 132;
        v14.DestinationHandle = a1;
        ndisIndicateStatusInternal(MiniportHandle, &v14);
      }
    }
  }
  TopHwTimestampCapabilities = MiniportHandle->TopHwTimestampCapabilities;
  if ( TopHwTimestampCapabilities )
  {
    v30 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
    v31 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
    v32 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
    v33 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
    memset(&v14, 0, sizeof(v14));
    v14.Flags |= 1u;
    v14.StatusBuffer = &v30;
    v14.Header = (_NDIS_OBJECT_HEADER)7340440;
    v14.SourceHandle = MiniportHandle;
    v14.StatusCode = 1074073600;
    v14.StatusBufferSize = 56;
    v14.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v14);
  }
  TopTimestampConfig = MiniportHandle->TopTimestampConfig;
  if ( TopTimestampConfig )
  {
    v30 = *(_OWORD *)&TopTimestampConfig->Header.Type;
    v31 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
    v32 = *(_OWORD *)&TopTimestampConfig->Reserved2;
    v33 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
    memset(&v14, 0, sizeof(v14));
    v14.Flags |= 1u;
    v14.StatusBuffer = &v30;
    v14.Header = (_NDIS_OBJECT_HEADER)7340440;
    v14.SourceHandle = MiniportHandle;
    v14.StatusCode = 1074073601;
    v14.StatusBufferSize = 56;
    v14.DestinationHandle = a1;
    ndisIndicateStatusInternal(MiniportHandle, &v14);
  }
  ndisMReleaseStInLockAndSpinLock(MiniportHandle, v13);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x50u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a1);
}

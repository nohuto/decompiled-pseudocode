/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106C18
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01073F0 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006514 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00086F4 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C001F9B8 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1C00201C0 (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0020738 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0023A24 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00240EC (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0025C84 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0026928 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0070DB0 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x1C0097ED4 (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A2FBC (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106340 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106378 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1C01064EC (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C01072B0 (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int Blink; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // r12
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r13
  UNICODE_STRING v11; // xmm0
  __int16 v12; // ax
  unsigned __int8 MajorNdisVersion; // r8
  unsigned __int8 MinorNdisVersion; // al
  UCHAR v15; // dl
  USHORT v16; // ax
  unsigned int v17; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v27; // rdx
  _NDIS_IF_BLOCK *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 v35; // cl
  int v36; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_BIND_PARAMETERS v44; // [rsp+110h] [rbp+10h] BYREF

  memset(&v44, 0, sizeof(v44));
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v38 = 0;
  Blink = 0;
  v40 = 0;
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v40, 4, 1, 1u);
  if ( ndisReferenceProtocol(a2, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          6u,
          0x1Bu,
          (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
          (char)a1,
          a2);
      goto LABEL_53;
    }
    v8 = 1;
    WAIT_FOR_PROTO_MUTEX(a2);
    if ( a2->Ref.Closing )
      goto LABEL_50;
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v8 = 0;
      goto LABEL_50;
    }
    Paths = a1->BindPaths->Paths;
    a2->BindDeviceName = &a1->MiniportName;
    a2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v11 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
    v12 = a2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    Destination.MaximumLength = Paths->Length + DestinationString.Length + v12 + 2;
    Destination.Length = 0;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
    if ( !Destination.Buffer )
      goto LABEL_50;
    RtlCopyUnicodeString(&Destination, &a2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = a2->MajorNdisVersion;
    v44.Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      MinorNdisVersion = a2->MinorNdisVersion;
      if ( MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v15 = 4;
        v16 = 312;
LABEL_15:
        v44.Header.Size = v16;
        v44.Header.Revision = v15;
        v44.ProtocolSection = &Destination;
        v44.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v17 = a1->MacOptions & 0x80000001;
        v44.AdapterName = Paths;
        v44.BoundAdapterName = &a1->MiniportName;
        if ( v17 == -2147483647 )
          v44.MediaType = NdisMediumWan;
        else
          v44.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v44.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v44.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v44.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v44.XmitLinkSpeed = a1->XmitLinkSpeed;
          v44.RcvLinkSpeed = a1->RcvLinkSpeed;
          v44.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v44.MediaDuplexState = MediaDuplexStateIndicateUp;
        v44.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v44.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v44.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v44.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v44.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v44.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v44.PhysicalMediumType = a1->PhysicalMediumType;
        v44.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x14u )
          v44.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v44.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v44.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v44.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v44.HDSplitCurrentConfig;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v44.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v44.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        v44.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v44.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v44.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v35 = *((_BYTE *)NDKBlock + 24);
            v44.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v44.NDKEnabled = v35;
          }
          else
          {
            v44.NDKEnabled = 0;
            v44.NDKCapabilities = 0LL;
          }
        }
        if ( v15 >= 4u )
        {
          if ( a1->SriovCurrentCapabilities )
          {
            v44.SriovCapabilities = a1->SriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(a1, &v44.NicSwitchArray) )
              goto LABEL_50;
          }
        }
        v27 = a1->IfBlock;
        v44.MacAddressLength = v27->ifPhysAddress.Length;
        memmove(v44.CurrentMacAddress, v27->ifPhysAddress.Address, v44.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v44.BoundIfIndex,
          &v44.BoundIfNetluid,
          &v44.LowestIfIndex,
          &v44.LowestIfNetluid);
        v28 = a1->IfBlock;
        v44.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v44.DirectionType = v28->DirectionType;
        v44.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v44.IfType = v28->ifType;
        v44.IfConnectorPresent = v28->ifConnectorPresent;
        v44.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v44.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v44.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v44.CompartmentId = v28->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v44.ActivePorts) )
        {
          BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
          *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
          BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
          *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
          KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
          a2->BindingAdapter = a1;
          v8 = 0;
          Blink = ndisInvokeBindAdapter(a2, BugCheckParameter3, &v44);
          if ( Blink == 259 )
          {
            ndisWaitForKernelObject(&BugCheckParameter3[4]);
            Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
          }
          if ( Blink )
            goto LABEL_46;
          if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
          {
            if ( !ndisReferenceOpenByHandle((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
              KeBugCheckEx(
                0x7Cu,
                0x16uLL,
                (ULONG_PTR)a2,
                (ULONG_PTR)BugCheckParameter3,
                (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
            v38 = 1;
            ndisIndicateInitialStateToBinding((struct _NDIS_OPEN_BLOCK *)BugCheckParameter3[0].Header.WaitListHead.Blink);
          }
          if ( MiniportSupportsReceiveThrottle(a1) )
          {
LABEL_45:
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
LABEL_46:
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v30,
                v32,
                0x1Cu,
                BugCheckParameter4,
                &a2->Name.Length,
                &a1->pAdapterInstanceName->Length);
            if ( (byte_1C00EE581 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v31,
                v30,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                a2->Name.Buffer,
                Blink);
            goto LABEL_50;
          }
          if ( a2->IsIPv4 == 1 )
          {
            v36 = 0;
          }
          else if ( a2->IsIPv6 == 1 )
          {
            v36 = 1;
          }
          else
          {
            if ( a2->IsNdisTest6 != 1 )
              goto LABEL_45;
            v36 = 2;
          }
          ndisBindUnbindPeriodicReceives(v29, v36);
          goto LABEL_45;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_50:
        RELEASE_PROT_MUTEX(a2);
        if ( v38 )
        {
          ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u);
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
        }
        if ( v8 && Blink )
          ndisNotifyBindFailure(a1, a2);
LABEL_53:
        LOBYTE(v6) = 8;
        ndisDereferenceProtocol(a2, v5, v6, v7);
        goto LABEL_54;
      }
      if ( MinorNdisVersion >= 0x14u )
      {
        v15 = 3;
        v16 = 280;
        goto LABEL_15;
      }
      if ( MinorNdisVersion )
      {
        v15 = 2;
        v16 = 256;
        goto LABEL_15;
      }
    }
    v15 = 1;
    v16 = 248;
    goto LABEL_15;
  }
  Blink = -1073741823;
LABEL_54:
  if ( v44.ActivePorts )
    ExFreePoolWithTag(v44.ActivePorts, 0);
  if ( v44.NicSwitchArray )
    ExFreePoolWithTag(v44.NicSwitchArray, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_00be6b421a7931e0b0f96a5f66efcc23_Traceguids,
      (char)a1,
      a2);
  return Blink;
}

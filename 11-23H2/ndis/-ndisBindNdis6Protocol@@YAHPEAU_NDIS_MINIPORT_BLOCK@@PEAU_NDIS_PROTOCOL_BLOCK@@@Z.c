/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B40
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C01131E4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003614 (-MiniportSupportsReceiveThrottle@@YA_NPEBU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00065F4 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E6E8 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F430 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F584 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C00208B0 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1C00210D4 (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0021A24 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0022ACC (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023980 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0024DC4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00335F8 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C00761F4 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x1C009DF1C (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A99C4 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123A0 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C01123D8 (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1C01133A0 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C011346C (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C01170DC (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int Blink; // esi
  int v5; // edx
  int v6; // r9d
  char v7; // r12
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r13
  UNICODE_STRING v10; // xmm0
  __int16 v11; // ax
  unsigned __int8 MajorNdisVersion; // r8
  UCHAR v13; // dl
  USHORT v14; // ax
  unsigned int v15; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v25; // rdx
  _NDIS_IF_BLOCK *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int8 v33; // cl
  int v34; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_BIND_PARAMETERS v42; // [rsp+120h] [rbp+20h] BYREF

  memset(&v42, 0, sizeof(v42));
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v36 = 0;
  Blink = 0;
  v38 = 0;
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v38, 4, 1, 1u);
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
          (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
          (char)a1,
          a2);
      goto LABEL_53;
    }
    v7 = 1;
    WAIT_FOR_PROTO_MUTEX(a2);
    if ( a2->Ref.Closing )
      goto LABEL_50;
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v7 = 0;
      goto LABEL_50;
    }
    Paths = a1->BindPaths->Paths;
    a2->BindDeviceName = &a1->MiniportName;
    a2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v10 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v10) - ndisDeviceStr.Length;
    v11 = a2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    Destination.MaximumLength = Paths->Length + DestinationString.Length + v11 + 2;
    Destination.Length = 0;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
    if ( !Destination.Buffer )
      goto LABEL_50;
    RtlCopyUnicodeString(&Destination, &a2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = a2->MajorNdisVersion;
    v42.Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      if ( a2->MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v13 = 4;
        v14 = 312;
LABEL_15:
        v42.Header.Size = v14;
        v42.Header.Revision = v13;
        v42.ProtocolSection = &Destination;
        v42.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v15 = a1->MacOptions & 0x80000001;
        v42.AdapterName = Paths;
        v42.BoundAdapterName = &a1->MiniportName;
        if ( v15 == -2147483647 )
          v42.MediaType = NdisMediumWan;
        else
          v42.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v42.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v42.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v42.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v42.XmitLinkSpeed = a1->XmitLinkSpeed;
          v42.RcvLinkSpeed = a1->RcvLinkSpeed;
          v42.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v42.MediaDuplexState = MediaDuplexStateIndicateUp;
        v42.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v42.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v42.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v42.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v42.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v42.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v42.PhysicalMediumType = a1->PhysicalMediumType;
        v42.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x14u )
          v42.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v42.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v42.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v42.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v42.HDSplitCurrentConfig;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v42.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v42.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        v42.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v42.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v42.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v33 = *((_BYTE *)NDKBlock + 24);
            v42.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v42.NDKEnabled = v33;
          }
          else
          {
            v42.NDKEnabled = 0;
            v42.NDKCapabilities = 0LL;
          }
        }
        if ( v13 >= 4u )
        {
          if ( a1->SriovCurrentCapabilities )
          {
            v42.SriovCapabilities = a1->SriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(a1, &v42.NicSwitchArray) )
              goto LABEL_50;
          }
        }
        v25 = a1->IfBlock;
        v42.MacAddressLength = v25->ifPhysAddress.Length;
        memmove(v42.CurrentMacAddress, v25->ifPhysAddress.Address, v42.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v42.BoundIfIndex,
          &v42.BoundIfNetluid,
          &v42.LowestIfIndex,
          &v42.LowestIfNetluid);
        v26 = a1->IfBlock;
        v42.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v42.DirectionType = v26->DirectionType;
        v42.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v42.IfType = v26->ifType;
        v42.IfConnectorPresent = v26->ifConnectorPresent;
        v42.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v42.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v42.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v42.CompartmentId = v26->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v42.ActivePorts) )
        {
          BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
          *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
          BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
          *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
          KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
          a2->BindingAdapter = a1;
          v7 = 0;
          Blink = ndisInvokeBindAdapter(a2, BugCheckParameter3, &v42);
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
            v36 = 1;
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
                v28,
                v30,
                0x1Cu,
                BugCheckParameter4,
                &a2->Name.Length,
                &a1->pAdapterInstanceName->Length);
            if ( (byte_1C00F7641 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v29,
                v28,
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
            v34 = 0;
          }
          else if ( a2->IsIPv6 == 1 )
          {
            v34 = 1;
          }
          else
          {
            if ( a2->IsNdisTest6 != 1 )
              goto LABEL_45;
            v34 = 2;
          }
          ndisBindUnbindPeriodicReceives(v27, v34);
          goto LABEL_45;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_50:
        RELEASE_PROT_MUTEX(a2);
        if ( v36 )
        {
          ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u);
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
        }
        if ( v7 && Blink )
          ndisNotifyBindFailure(a1, a2);
LABEL_53:
        ndisDereferenceProtocol(a2, v5, 8u, v6);
        goto LABEL_54;
      }
      if ( a2->MinorNdisVersion >= 0x14u )
      {
        v13 = 3;
        v14 = 280;
        goto LABEL_15;
      }
      if ( a2->MinorNdisVersion )
      {
        v13 = 2;
        v14 = 256;
        goto LABEL_15;
      }
    }
    v13 = 1;
    v14 = 248;
    goto LABEL_15;
  }
  Blink = -1073741823;
LABEL_54:
  if ( v42.ActivePorts )
    ExFreePoolWithTag(v42.ActivePorts, 0);
  if ( v42.NicSwitchArray )
    ExFreePoolWithTag(v42.NicSwitchArray, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_a3a0dfe1e6d739a64d48f097d248e118_Traceguids,
      (char)a1,
      a2);
  return Blink;
}

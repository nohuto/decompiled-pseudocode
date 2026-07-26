/*
 * XREFs of ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001D7E0
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001D74C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001DB40 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001DCF0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001F9EC (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     NdisMSleep @ 0x1C0040E00 (NdisMSleep.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C0064AFC (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0066EB0 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0090F9C (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  _NDIS_FILTER_BLOCK *HigherFilter; // rdi
  _NDIS_FILTER_BLOCK *LowerFilter; // r13
  char v5; // r15
  unsigned __int64 *p_Lock; // r14
  unsigned int Flags; // eax
  _NDIS_MINIPORT_OFFLOAD *v8; // rax
  void (__fastcall *v9)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  unsigned __int8 XState; // al
  void (__fastcall *v13)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  void (__stdcall *v14)(PVOID); // rax
  KIRQL v15; // dl
  unsigned int v16; // eax
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rax
  __int128 v18; // xmm1
  unsigned int *p_UdpEsp; // rax
  _NDIS_FILTER_TASK_OFFLOAD *v20; // rcx
  void *v21; // rax
  KIRQL v22; // dl
  unsigned int v23; // eax
  void (__fastcall *v24)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  void *v25; // rax
  KIRQL v26; // dl
  unsigned int v27; // eax
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax
  bool v29; // zf
  _NDIS_TIMESTAMP_CAPABILITIES *v30; // rax
  void *v31; // rax
  KIRQL v32; // dl
  KIRQL v33; // dl
  unsigned int v34; // eax
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v36; // rax
  KIRQL v37; // dl
  KIRQL v38; // dl
  _NDIS_OFFLOAD *p_TopCapabilities; // rax
  __int128 v40; // xmm1
  _NDIS_FILTER_TASK_OFFLOAD *v41; // rcx
  _NDIS_TIMESTAMP_CAPABILITIES *v42; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v43; // rax
  KIRQL v44; // [rsp+38h] [rbp-D0h] BYREF
  KIRQL NewIrql[15]; // [rsp+39h] [rbp-CFh] BYREF
  struct _NDIS_STATUS_INDICATION v46; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  __int128 v50; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-18h]
  __int128 v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  _OWORD v54[14]; // [rsp+118h] [rbp+10h] BYREF

  NewIrql[0] = 0;
  v44 = 0;
  memset(&v46, 0, sizeof(v46));
  Miniport = a1->Miniport;
  HigherFilter = a1->HigherFilter;
  LowerFilter = a1->LowerFilter;
  memset(v54, 0, 0xD8uLL);
  v50 = 0LL;
  v53 = 0LL;
  v5 = 1;
  v51 = 0LL;
  v52 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Fu,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
  p_Lock = &a1->Lock;
  v47 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  while ( 1 )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    Flags = a1->Flags;
    a1->LockThread = 0LL;
    if ( (Flags & 0x2000) == 0 )
      break;
    KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
    if ( KeGetCurrentIrql() == 2 )
      KeStallExecutionProcessor(1u);
    else
      NdisMSleep(0x32u);
  }
  a1->Flags = Flags | 0x2000;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  *(_QWORD *)((char *)&v47 + 4) = *(_QWORD *)&a1->MediaConnectState;
  v48 = *(_OWORD *)&a1->XmitLinkSpeed;
  v49 = *(_QWORD *)&a1->PauseFunctions;
  LODWORD(v47) = 2621824;
  if ( HigherFilter )
  {
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v44);
      v16 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v16 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v44);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags = v16 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    Offload = HigherFilter->Offload;
    if ( Offload )
    {
      v54[0] = *(_OWORD *)&Offload->OffloadCaps.Header.Type;
      v54[1] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv4Receive + 4);
      v54[2] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv6Receive + 4);
      v54[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&Offload->OffloadCaps.LsoV1.IPv4 + 12);
      v54[4] = *(_OWORD *)&Offload->OffloadCaps.IPsecV1.Supported.IPv4Options;
      v54[5] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv4.Encapsulation;
      v54[6] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize;
      v18 = *(_OWORD *)&Offload->OffloadCaps.IPsecV2.Encapsulation;
      p_UdpEsp = &Offload->OffloadCaps.IPsecV2.UdpEsp;
      v54[7] = v18;
      v54[8] = *(_OWORD *)p_UdpEsp;
      v54[9] = *((_OWORD *)p_UdpEsp + 1);
      v54[10] = *((_OWORD *)p_UdpEsp + 2);
      v54[11] = *((_OWORD *)p_UdpEsp + 3);
      v54[12] = *((_OWORD *)p_UdpEsp + 4);
      *(_QWORD *)&v54[13] = *((_QWORD *)p_UdpEsp + 10);
      if ( a1->Offload || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v20 = a1->Offload;
        *(_OWORD *)&v20->OffloadCaps.Header.Type = v54[0];
        *(_OWORD *)((char *)&v20->OffloadCaps.Checksum.IPv4Receive + 4) = v54[1];
        *(_OWORD *)((char *)&v20->OffloadCaps.Checksum.IPv6Receive + 4) = v54[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v20->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v54[3];
        *(_OWORD *)&v20->OffloadCaps.IPsecV1.Supported.IPv4Options = v54[4];
        *(_OWORD *)&v20->OffloadCaps.LsoV2.IPv4.Encapsulation = v54[5];
        *(_OWORD *)&v20->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v54[6];
        v20 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v20 + 128);
        v20[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v54[7];
        *(_OWORD *)&v20->OffloadCaps.Header.Type = v54[8];
        *(_OWORD *)((char *)&v20->OffloadCaps.Checksum.IPv4Receive + 4) = v54[9];
        *(_OWORD *)((char *)&v20->OffloadCaps.Checksum.IPv6Receive + 4) = v54[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v20->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v54[11];
        *(_OWORD *)&v20->OffloadCaps.IPsecV1.Supported.IPv4Options = v54[12];
        *(_QWORD *)&v20->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v54[13];
        memset(&v46, 0, sizeof(v46));
        v46.Header = (_NDIS_OBJECT_HEADER)7340440;
        v21 = Miniport;
        v46.StatusCode = 1073872902;
        if ( LowerFilter )
          v21 = LowerFilter;
        v46.StatusBufferSize = 216;
        v46.SourceHandle = v21;
        v46.StatusBuffer = v54;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        v22 = v44;
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v22);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v46);
        else
          ndisFIndicateStatusInternal(a1, &v46);
        while ( 1 )
        {
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v44);
          v23 = HigherFilter->Flags;
          HigherFilter->LockThread = 0LL;
          if ( (v23 & 0x2000) == 0 )
            break;
          KeReleaseSpinLock(&HigherFilter->Lock, v44);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
        }
        HigherFilter->Flags = v23 | 0x2000;
        KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
      }
      else
      {
        v5 = 0;
      }
    }
    v24 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( HigherFilter->MediaConnectState != MediaConnectStateConnected )
      v24 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v24;
    memset(&v46, 0, sizeof(v46));
    v46.Header = (_NDIS_OBJECT_HEADER)7340440;
    v25 = Miniport;
    v46.StatusCode = 1073807383;
    if ( LowerFilter )
      v25 = LowerFilter;
    v46.StatusBufferSize = 40;
    v46.SourceHandle = v25;
    v46.StatusBuffer = &v47;
    KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
    v26 = v44;
    HigherFilter->Flags &= ~0x2000u;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v26);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v46);
    else
      ndisFIndicateStatusInternal(a1, &v46);
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v44);
      v27 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v27 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v44);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags = v27 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCapabilities = HigherFilter->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
    {
      v29 = a1->HwTimestampCapabilities == 0LL;
      v50 = *(_OWORD *)&HwTimestampCapabilities->Header.Type;
      v51 = *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp;
      v52 = *(_OWORD *)&HwTimestampCapabilities->Reserved2;
      v53 = *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( !v29
        || (v30 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCapabilities),
            (a1->HwTimestampCapabilities = v30) != 0LL) )
      {
        if ( v5 )
        {
          memset(&v46, 0, sizeof(v46));
          v46.Header = (_NDIS_OBJECT_HEADER)7340440;
          v31 = Miniport;
          v46.StatusCode = 1074073600;
          if ( LowerFilter )
            v31 = LowerFilter;
          v46.StatusBufferSize = 56;
          v46.SourceHandle = v31;
          v46.StatusBuffer = &v50;
          KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
          v32 = v44;
          HigherFilter->Flags &= ~0x2000u;
          HigherFilter->LockThread = 0LL;
          KeReleaseSpinLock(&HigherFilter->Lock, v32);
          if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
            ndisFInvokeStatus(a1, &v46);
          else
            ndisFIndicateStatusInternal(a1, &v46);
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      v33 = v44;
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v33);
    }
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v44);
      v34 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v34 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v44);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags = v34 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCurrentConfig = HigherFilter->HwTimestampCurrentConfig;
    if ( HwTimestampCurrentConfig )
    {
      v29 = a1->HwTimestampCurrentConfig == 0LL;
      v50 = *(_OWORD *)&HwTimestampCurrentConfig->Header.Type;
      v51 = *(_OWORD *)&HwTimestampCurrentConfig->CrossTimestamp;
      v52 = *(_OWORD *)&HwTimestampCurrentConfig->Reserved2;
      v53 = *(_QWORD *)&HwTimestampCurrentConfig->TimestampFlags.AllReceiveHw;
      if ( !v29
        || (v36 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCurrentConfig),
            (a1->HwTimestampCurrentConfig = v36) != 0LL) )
      {
        if ( v5 )
        {
          memset(&v46, 0, sizeof(v46));
          v46.Header = (_NDIS_OBJECT_HEADER)7340440;
          v46.StatusCode = 1074073601;
          v46.StatusBuffer = &v50;
          if ( LowerFilter )
            Miniport = (_NDIS_MINIPORT_BLOCK *)LowerFilter;
          v46.StatusBufferSize = 56;
          v46.SourceHandle = Miniport;
          KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
          v37 = v44;
          HigherFilter->Flags &= ~0x2000u;
          HigherFilter->LockThread = 0LL;
          KeReleaseSpinLock(&HigherFilter->Lock, v37);
          if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
            ndisFInvokeStatus(a1, &v46);
          else
            ndisFIndicateStatusInternal(a1, &v46);
        }
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      v38 = v44;
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v38);
    }
    p_Lock = &a1->Lock;
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock(Miniport, &v44);
    v8 = Miniport->Offload;
    if ( v8 && v8->SupportsOffload )
    {
      p_TopCapabilities = &v8->TopCapabilities;
      v54[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v54[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v54[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v54[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v54[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v54[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v54[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v40 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v54[7] = v40;
      v54[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v54[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v54[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v54[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v54[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v54[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      if ( a1->Offload || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v41 = a1->Offload;
        *(_OWORD *)&v41->OffloadCaps.Header.Type = v54[0];
        *(_OWORD *)((char *)&v41->OffloadCaps.Checksum.IPv4Receive + 4) = v54[1];
        *(_OWORD *)((char *)&v41->OffloadCaps.Checksum.IPv6Receive + 4) = v54[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v41->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v54[3];
        *(_OWORD *)&v41->OffloadCaps.IPsecV1.Supported.IPv4Options = v54[4];
        *(_OWORD *)&v41->OffloadCaps.LsoV2.IPv4.Encapsulation = v54[5];
        *(_OWORD *)&v41->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v54[6];
        v41 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v41 + 128);
        v41[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v54[7];
        *(_OWORD *)&v41->OffloadCaps.Header.Type = v54[8];
        *(_OWORD *)((char *)&v41->OffloadCaps.Checksum.IPv4Receive + 4) = v54[9];
        *(_OWORD *)((char *)&v41->OffloadCaps.Checksum.IPv6Receive + 4) = v54[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v41->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v54[11];
        *(_OWORD *)&v41->OffloadCaps.IPsecV1.Supported.IPv4Options = v54[12];
        *(_QWORD *)&v41->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v54[13];
        memset(&v46, 0, sizeof(v46));
        v46.StatusBuffer = v54;
        v46.Header = (_NDIS_OBJECT_HEADER)7340440;
        v46.SourceHandle = Miniport;
        v46.StatusCode = 1073872902;
        v46.StatusBufferSize = 216;
        ndisMReleaseStInLockAndSpinLock(Miniport, v44);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v46);
        else
          ndisFIndicateStatusInternal(a1, &v46);
        ndisMAcquireStInLockWithSpinLock(Miniport, &v44);
      }
      else
      {
        v5 = 0;
      }
    }
    DWORD1(v47) = Miniport->MediaConnectState;
    DWORD2(v47) = Miniport->MediaDuplexState;
    v48 = *(_OWORD *)&Miniport->XmitLinkSpeed;
    v9 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( Miniport->MediaConnectState != MediaConnectStateConnected )
      v9 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v9;
    memset(&v46, 0, sizeof(v46));
    v46.StatusBuffer = &v47;
    v46.Header = (_NDIS_OBJECT_HEADER)7340440;
    v46.SourceHandle = Miniport;
    v46.StatusCode = 1073807383;
    v46.StatusBufferSize = 40;
    ndisMReleaseStInLockAndSpinLock(Miniport, v44);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v46);
    else
      ndisFIndicateStatusInternal(a1, &v46);
    ndisMAcquireStInLockWithSpinLock(Miniport, &v44);
    TopHwTimestampCapabilities = Miniport->TopHwTimestampCapabilities;
    if ( TopHwTimestampCapabilities )
    {
      v29 = a1->HwTimestampCapabilities == 0LL;
      v50 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
      v51 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
      v52 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
      v53 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( !v29
        || (v42 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopHwTimestampCapabilities),
            (a1->HwTimestampCapabilities = v42) != 0LL) )
      {
        if ( v5 )
        {
          memset(&v46, 0, sizeof(v46));
          v46.StatusBuffer = &v50;
          v46.Header = (_NDIS_OBJECT_HEADER)7340440;
          v46.SourceHandle = Miniport;
          v46.StatusCode = 1074073600;
          v46.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v44);
          if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
            ndisFInvokeStatus(a1, &v46);
          else
            ndisFIndicateStatusInternal(a1, &v46);
        }
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v44);
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, &v44);
    TopTimestampConfig = Miniport->TopTimestampConfig;
    if ( TopTimestampConfig )
    {
      v29 = a1->HwTimestampCurrentConfig == 0LL;
      v50 = *(_OWORD *)&TopTimestampConfig->Header.Type;
      v51 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
      v52 = *(_OWORD *)&TopTimestampConfig->Reserved2;
      v53 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
      if ( !v29
        || (v43 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopTimestampConfig),
            (a1->HwTimestampCurrentConfig = v43) != 0LL) )
      {
        if ( v5 )
        {
          memset(&v46, 0, sizeof(v46));
          v46.StatusBuffer = &v50;
          v46.Header = (_NDIS_OBJECT_HEADER)7340440;
          v46.SourceHandle = Miniport;
          v46.StatusCode = 1074073601;
          v46.StatusBufferSize = 56;
          ndisMReleaseStInLockAndSpinLock(Miniport, v44);
          if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
            ndisFInvokeStatus(a1, &v46);
          else
            ndisFIndicateStatusInternal(a1, &v46);
        }
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v44);
    }
  }
  XState = a1->XState;
  if ( a1->MediaConnectState == MediaConnectStateConnected )
  {
    v13 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
    a1->XState = XState & 0xFE;
    v14 = (void (__stdcall *)(PVOID))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    a1->XState = XState | 1;
    ndisUpdateFilterFakeStatus(a1);
    v14 = NdisQueryOffloadState;
    v13 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
  }
  a1->FilterSendNetBufferListsHandler = v13;
  a1->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))v14;
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v15 = NewIrql[0];
  a1->Flags &= ~0x2000u;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v15);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x40u,
      (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
      a1);
}

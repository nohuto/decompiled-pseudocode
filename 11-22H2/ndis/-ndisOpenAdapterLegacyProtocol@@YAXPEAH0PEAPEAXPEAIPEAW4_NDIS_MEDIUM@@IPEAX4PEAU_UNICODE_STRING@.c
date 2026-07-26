/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C009C32C
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0137B08 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C0156DB0 (NdisOpenAdapter.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CDC0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00151FC (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0015388 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A758 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001AF6C (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001E558 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F2A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F3F4 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C0020854 (WPP_RECORDER_SF_qZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C00235E4 (WPP_RECORDER_SF_Zq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E8F4 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C010C6B8 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0111394 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x1C0111E00 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0115960 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C01167E0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C011711C (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C0137998 (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013ABCC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C013AC08 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C0156700 (ndisFindRootDevice.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        int *a2,
        void **a3,
        unsigned int *a4,
        enum _NDIS_MEDIUM *a5,
        unsigned int a6,
        struct _NDIS_PROTOCOL_BLOCK *NewIrql,
        void *a8,
        struct _UNICODE_STRING *a9,
        char a10,
        struct _NDIS_MINIPORT_BLOCK *a11,
        int *a12)
{
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rdi
  struct _STRING *BindingAdapter; // rbx
  __int64 Pool2; // r13
  struct _UNICODE_STRING *v17; // r12
  struct _NDIS_PROTOCOL_BLOCK *v18; // r14
  unsigned int v19; // edx
  int v20; // r9d
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  int v24; // edx
  int v25; // r9d
  int v26; // edx
  KIRQL v27; // al
  __int64 v28; // rcx
  enum _NDIS_MEDIUM *v29; // rax
  char v30; // r12
  KIRQL v31; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  __int64 v33; // rcx
  int *v34; // rcx
  __int64 v35; // rdx
  struct _NDIS_MINIPORT_BLOCK *v36; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v38; // edx
  int v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING *v41; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING *v42; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  int *v44; // [rsp+80h] [rbp-80h] BYREF
  void **v45; // [rsp+88h] [rbp-78h]
  unsigned int *v46; // [rsp+90h] [rbp-70h]
  enum _NDIS_MEDIUM *v47; // [rsp+98h] [rbp-68h]
  unsigned int v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A4h] [rbp-5Ch]
  struct _NDIS_PROTOCOL_BLOCK *v50; // [rsp+A8h] [rbp-58h]
  void *v51; // [rsp+B0h] [rbp-50h]
  struct _UNICODE_STRING *v52; // [rsp+B8h] [rbp-48h]
  char v53[224]; // [rsp+C0h] [rbp-40h] BYREF
  char v54; // [rsp+1B0h] [rbp+B0h]
  char v55; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)&String1.Length = 2359330LL;
  OpenBlock = 0LL;
  a11 = 0LL;
  BindingAdapter = 0LL;
  v41 = 0LL;
  Pool2 = 0LL;
  v55 = 0;
  v54 = 0;
  a10 = 0;
  v40 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a9;
  v18 = NewIrql;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x17u,
      v39,
      (char)NewIrql,
      &NewIrql->Name.Length,
      &a9->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol(v18, 9u) )
  {
    *a1 = -1073676286;
    goto LABEL_78;
  }
  BindDeviceName = v18->BindDeviceName;
  v55 = 1;
  v42 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = v18->RootDeviceName;
    BindingAdapter = (struct _STRING *)v18->BindingAdapter;
    v41 = RootDeviceName;
    a11 = (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter;
  }
  else
  {
    ndisFindRootDevice((__int64)v17, (__int64)&a11, MPREF_PT_OPENING);
    BindingAdapter = (struct _STRING *)a11;
    if ( a11 )
    {
      v49 = 0;
      v45 = a3;
      v46 = a4;
      v47 = a5;
      v52 = v17;
      v48 = a6;
      v51 = a8;
      v44 = a1;
      v50 = v18;
      Ndis::BindEngine::BeginPolicyUpdates(&a11->BindEngine);
      DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                           &BindingAdapter[313],
                                                           &v18->Bind,
                                                           BindingAdapter,
                                                           4LL);
      if ( DynamicBinding )
      {
        DynamicBinding->BindState.m_AdditionalContext = &v44;
        if ( Ndis::BindState::SetBinding(
               &DynamicBinding->BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
        {
          memset(v53, 0, 0xA0uLL);
          if ( (unsigned __int8)byte_1C00F5443 >= 4u )
          {
            ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v53);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v26,
                0x1Cu,
                0x18u,
                (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
                *(unsigned __int16 **)&v53[8],
                *(_QWORD *)v53);
          }
        }
      }
      else
      {
        *a1 = -1073741670;
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)&BindingAdapter[319].Buffer, RunSynchronous, 0);
      if ( !*v45 && !*a1 )
        *a1 = -1073676271;
      v55 = 0;
      ndisDereferenceProtocol(v18, v24, 9u, v25);
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 0x2Cu);
      goto LABEL_78;
    }
    BindDeviceName = v42;
    RootDeviceName = v41;
    a10 = 1;
  }
  v18->BindDeviceName = 0LL;
  if ( !BindingAdapter || ((__int64)BindingAdapter[7].Buffer & 0x10000) == 0 )
  {
    *a1 = -1073676282;
LABEL_78:
    if ( a12 )
      *a12 = *a1;
    goto LABEL_80;
  }
  if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)&BindingAdapter[22].Buffer, 1u) )
  {
    *a1 = -1073676281;
    goto LABEL_78;
  }
  OpenBlock = ndisAllocateOpenBlock((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, v18, 0);
  if ( !OpenBlock )
  {
    *a1 = -1073741670;
    goto LABEL_78;
  }
  v27 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
  LOBYTE(NewIrql) = v27;
  ndisGlobalOpenList = OpenBlock;
  v54 = 1;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v27);
  v19 = a6;
  OpenBlock->ProtocolBindingContext = a8;
  OpenBlock->BindDeviceName = BindDeviceName;
  OpenBlock->RootDeviceName = RootDeviceName;
  OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
  OpenBlock->ProtocolHandle = v18;
  *a3 = OpenBlock;
  if ( ((__int64)BindingAdapter[35].Buffer & 0x80000001) == 0x80000001 )
  {
    LODWORD(v28) = 0;
    if ( a6 )
    {
      v29 = a5;
      do
      {
        if ( *v29 == NdisMediumWan )
          break;
        LODWORD(v28) = v28 + 1;
        ++v29;
      }
      while ( (unsigned int)v28 < a6 );
    }
  }
  else
  {
    v28 = 0LL;
    if ( a6 )
    {
      v20 = (int)a5;
      do
      {
        if ( a5[v28] == *(_DWORD *)&BindingAdapter[29].Length )
          break;
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (unsigned int)v28 < a6 );
    }
  }
  if ( (_DWORD)v28 == a6 )
  {
    *a1 = -1073676263;
    goto LABEL_78;
  }
  *a4 = v28;
  if ( (HIDWORD(BindingAdapter[7].Buffer) & 0x40000000) != 0 )
  {
    v40 = 0x100080180LL;
    if ( (unsigned int)ndisMDoMiniportOp((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 0, 0x1021Eu, &v40, 8, 1, 1u) )
    {
      *a1 = -1073741823;
      goto LABEL_78;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, (unsigned __int8 *)&NewIrql);
  if ( ((__int64)BindingAdapter[7].Buffer & 0x40000) == 0 )
  {
    while ( BYTE1(BindingAdapter[5].Buffer) )
    {
      BindingAdapter[32].Buffer = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&BindingAdapter[6].Length);
      KeStallExecutionProcessor(1u);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&BindingAdapter[6].Length);
      BindingAdapter[32].Buffer = (char *)KeGetCurrentThread();
    }
    BYTE1(BindingAdapter[5].Buffer) = 1;
    BindingAdapter = (struct _STRING *)a11;
    a11->LockThread = KeGetCurrentThread();
  }
  ndisMOpenAdapter(a1, OpenBlock, (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter);
  if ( *a1 )
  {
    v30 = a10;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        6u,
        0x19u,
        (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
        (char)OpenBlock,
        (char)v18,
        BindingAdapter);
    v30 = a10;
    if ( a10 )
    {
      BindingAdapter = (struct _STRING *)a11;
      OpenBlock->OpenFlags |= 0x400000u;
    }
    if ( ((__int64)BindingAdapter[7].Buffer & 0x20020000) == 0 )
      ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 2u);
    if ( ((__int64)BindingAdapter[7].Buffer & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
    {
      Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
      if ( Pool2 )
      {
        ndisMReferenceOpen((__int64)OpenBlock, 0);
        _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
        *(_QWORD *)(Pool2 + 8) = 0LL;
        BindingAdapter = (struct _STRING *)a11;
        *(_QWORD *)(Pool2 + 24) = ndisMFinishQueuedPendingOpen;
        *(_QWORD *)Pool2 = OpenBlock;
        *(_QWORD *)(Pool2 + 32) = Pool2;
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x13u,
          0x1Au,
          (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
          OpenBlock);
      }
    }
  }
  if ( ((__int64)BindingAdapter[7].Buffer & 0x40000) == 0 )
  {
    BYTE1(BindingAdapter[5].Buffer) = 0;
    BindingAdapter[116].Buffer = 0LL;
  }
  v31 = (unsigned __int8)NewIrql;
  BindingAdapter[32].Buffer = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&BindingAdapter[6].Length, v31);
  if ( *a1 )
    goto LABEL_78;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
  if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
    *a1 = -1073741670;
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  v19 = *a1;
  if ( *a1 )
    goto LABEL_78;
  if ( (HIDWORD(BindingAdapter[7].Buffer) & 0x2000) != 0 )
  {
    v33 = *(_QWORD *)&BindingAdapter[249].Length;
    if ( v33 )
    {
      (*(void (__fastcall **)(_QWORD))(v33 + 32))(*(_QWORD *)(v33 + 8));
      v19 = *a1;
    }
  }
  v34 = a12;
  if ( a12 )
  {
    a12 = 0LL;
    *v34 = v19;
  }
  ndisPktMonOpenRegister((char)OpenBlock);
  if ( Pool2 )
  {
    v35 = (unsigned int)*a1;
    if ( v18->MajorNdisVersion < 6u )
      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v35, v35);
    else
      ndisInvokeOpenAdapterComplete(OpenBlock, v35);
    ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter);
    if ( v30 )
    {
      ndisNotifyWmiBindUnbind(v36, v18, 1u);
      a10 = 0;
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 8), (WORK_QUEUE_TYPE)40);
    *a1 = 259;
    goto LABEL_78;
  }
LABEL_80:
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v55 )
        ndisDereferenceProtocol(v18, v19, 9u, v20);
      if ( v54 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( a10 && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, v18, 1u);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v38,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
      (char)v18,
      (char)a11,
      (char)OpenBlock,
      *a1);
}

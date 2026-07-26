/*
 * XREFs of ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C00962E0
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C012BC6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C014AE90 (NdisOpenAdapter.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00162C8 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016450 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019598 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E70 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001D194 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C001FC6C (WPP_RECORDER_SF_qZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0020A90 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C0021598 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069538 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C0101128 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C0108A08 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C010A034 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C010A148 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010B510 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C012BAFC (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C012EE5C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C012EE98 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013CF90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C014A7C8 (ndisFindRootDevice.c)
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
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  struct _STRING *BindingAdapter; // rbx
  struct _UNICODE_STRING *v17; // r12
  struct _NDIS_PROTOCOL_BLOCK *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  enum _NDIS_MEDIUM *v21; // r9
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  KIRQL v29; // al
  __int64 v30; // rcx
  enum _NDIS_MEDIUM *v31; // rax
  _DWORD *v32; // r12
  int *v33; // r15
  int v34; // ecx
  __int64 Pool2; // r13
  KIRQL v36; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v38; // edx
  __int64 v39; // rcx
  int *v40; // rcx
  __int64 v41; // rdx
  struct _NDIS_MINIPORT_BLOCK *v42; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v44; // edx
  int v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING *v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v49; // [rsp+68h] [rbp-98h]
  int *p_Buffer; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  int *v52; // [rsp+90h] [rbp-70h] BYREF
  void **v53; // [rsp+98h] [rbp-68h]
  unsigned int *v54; // [rsp+A0h] [rbp-60h]
  enum _NDIS_MEDIUM *v55; // [rsp+A8h] [rbp-58h]
  unsigned int v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B4h] [rbp-4Ch]
  struct _NDIS_PROTOCOL_BLOCK *v58; // [rsp+B8h] [rbp-48h]
  void *v59; // [rsp+C0h] [rbp-40h]
  struct _UNICODE_STRING *v60; // [rsp+C8h] [rbp-38h]
  char v61[208]; // [rsp+D0h] [rbp-30h] BYREF
  char v62; // [rsp+1B0h] [rbp+B0h]
  char v63; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)&String1.Length = 2359330LL;
  OpenBlock = 0LL;
  a11 = 0LL;
  BindingAdapter = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v63 = 0;
  v62 = 0;
  a10 = 0;
  v46 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a9;
  v18 = NewIrql;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x17u,
      v45,
      (char)NewIrql,
      &NewIrql->Name.Length,
      &a9->Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol(v18, 9u) )
  {
    *a1 = -1073676286;
    goto LABEL_79;
  }
  BindDeviceName = v18->BindDeviceName;
  v63 = 1;
  v49 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = v18->RootDeviceName;
    BindingAdapter = (struct _STRING *)v18->BindingAdapter;
    v47 = RootDeviceName;
    a11 = (struct _NDIS_MINIPORT_BLOCK *)BindingAdapter;
  }
  else
  {
    ndisFindRootDevice((__int64)v17, (__int64)&a11, MPREF_PT_OPENING);
    BindingAdapter = (struct _STRING *)a11;
    if ( a11 )
    {
      v57 = 0;
      v53 = a3;
      v55 = a5;
      v60 = v17;
      v56 = a6;
      v59 = a8;
      v52 = a1;
      v54 = a4;
      v58 = v18;
      Ndis::BindEngine::BeginPolicyUpdates(&a11->BindEngine);
      DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                           &BindingAdapter[313],
                                                           &v18->Bind,
                                                           BindingAdapter,
                                                           4LL);
      if ( DynamicBinding )
      {
        DynamicBinding->BindState.m_AdditionalContext = &v52;
        if ( Ndis::BindState::SetBinding(
               &DynamicBinding->BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
        {
          memset(v61, 0, 0xA0uLL);
          if ( (unsigned __int8)byte_1C00EC66B >= 4u )
          {
            ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v61);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v25,
                0x1Cu,
                0x18u,
                (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
                *(unsigned __int16 **)&v61[8],
                *(_QWORD *)v61);
          }
        }
      }
      else
      {
        *a1 = -1073741670;
      }
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)&BindingAdapter[319].Buffer, RunSynchronous, 0);
      if ( !*v53 && !*a1 )
        *a1 = -1073676271;
      LOBYTE(v27) = 9;
      v63 = 0;
      ndisDereferenceProtocol(v18, v26, v27, v28);
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 0x2Cu);
      goto LABEL_79;
    }
    BindDeviceName = v49;
    RootDeviceName = v47;
    a10 = 1;
  }
  v18->BindDeviceName = 0LL;
  if ( !BindingAdapter
    || (p_Buffer = (int *)&BindingAdapter[7].Buffer, ((__int64)BindingAdapter[7].Buffer & 0x10000) == 0) )
  {
    *a1 = -1073676282;
LABEL_79:
    if ( a12 )
      *a12 = *a1;
    goto LABEL_81;
  }
  if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)&BindingAdapter[22].Buffer, 1u) )
  {
    *a1 = -1073676281;
    goto LABEL_79;
  }
  OpenBlock = ndisAllocateOpenBlock((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, v18, 0);
  if ( !OpenBlock )
  {
    *a1 = -1073741670;
    goto LABEL_79;
  }
  v29 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
  LOBYTE(NewIrql) = v29;
  ndisGlobalOpenList = OpenBlock;
  v62 = 1;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v29);
  v19 = a6;
  OpenBlock->ProtocolBindingContext = a8;
  OpenBlock->BindDeviceName = BindDeviceName;
  OpenBlock->RootDeviceName = RootDeviceName;
  OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
  OpenBlock->ProtocolHandle = v18;
  *a3 = OpenBlock;
  if ( ((__int64)BindingAdapter[35].Buffer & 0x80000001) == 0x80000001 )
  {
    LODWORD(v30) = 0;
    if ( a6 )
    {
      v31 = a5;
      while ( *v31 != NdisMediumWan )
      {
        LODWORD(v30) = v30 + 1;
        ++v31;
        if ( (unsigned int)v30 >= a6 )
          goto LABEL_35;
      }
      goto LABEL_37;
    }
  }
  else
  {
    v30 = 0LL;
    if ( a6 )
    {
      v20 = *(unsigned int *)&BindingAdapter[29].Length;
      v21 = a5;
      while ( a5[v30] != (_DWORD)v20 )
      {
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= a6 )
          goto LABEL_35;
      }
      goto LABEL_37;
    }
  }
LABEL_35:
  if ( (_DWORD)v30 == a6 )
  {
    *a1 = -1073676263;
    goto LABEL_79;
  }
LABEL_37:
  v32 = (_DWORD *)&BindingAdapter[7].Buffer + 1;
  *a4 = v30;
  if ( (HIDWORD(BindingAdapter[7].Buffer) & 0x40000000) != 0 )
  {
    v46 = 0x100080180LL;
    if ( (unsigned int)ndisMDoMiniportOp((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 0, 0x1021Eu, &v46, 8, 1, 1u) )
    {
      *a1 = -1073741823;
      goto LABEL_79;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, (unsigned __int8 *)&NewIrql);
  v33 = p_Buffer;
  if ( (*p_Buffer & 0x40000) == 0 )
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
    goto LABEL_59;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x19u,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)OpenBlock,
      (char)v18,
      BindingAdapter);
  if ( a10 )
  {
    BindingAdapter = (struct _STRING *)a11;
    OpenBlock->OpenFlags |= 0x400000u;
  }
  v34 = *v33;
  if ( (*v33 & 0x20000000) == 0 && (*v33 & 0x20000) == 0 )
  {
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter, 2u);
    v34 = *v33;
  }
  if ( (v34 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
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
        (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
        OpenBlock);
    }
  }
  else
  {
LABEL_59:
    Pool2 = v48;
  }
  if ( (*v33 & 0x40000) == 0 )
  {
    BYTE1(BindingAdapter[5].Buffer) = 0;
    BindingAdapter[116].Buffer = 0LL;
  }
  v36 = (unsigned __int8)NewIrql;
  BindingAdapter[32].Buffer = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&BindingAdapter[6].Length, v36);
  if ( *a1 )
    goto LABEL_79;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
  if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
    *a1 = -1073741670;
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)&BindingAdapter[319].Buffer);
  if ( *a1 )
    goto LABEL_79;
  v38 = 0;
  if ( (*v32 & 0x2000) != 0 )
  {
    v39 = *(_QWORD *)&BindingAdapter[249].Length;
    if ( v39 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(v39 + 32))(*(_QWORD *)(v39 + 8), 0LL);
      v38 = *a1;
    }
  }
  v40 = a12;
  if ( a12 )
  {
    a12 = 0LL;
    *v40 = v38;
  }
  ndisPktMonOpenRegister(OpenBlock);
  if ( Pool2 )
  {
    v41 = (unsigned int)*a1;
    if ( v18->MajorNdisVersion < 6u )
      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v41, v41);
    else
      ndisInvokeOpenAdapterComplete(OpenBlock, v41);
    ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)BindingAdapter);
    if ( a10 )
    {
      ndisNotifyWmiBindUnbind(v42, v18, 1u);
      a10 = 0;
    }
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 8), (WORK_QUEUE_TYPE)40);
    *a1 = 259;
    goto LABEL_79;
  }
LABEL_81:
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v63 )
      {
        LOBYTE(v20) = 9;
        ndisDereferenceProtocol(v18, v19, v20, (__int64)v21);
      }
      if ( v62 )
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
      v44,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      (char)v18,
      (char)a11,
      (char)OpenBlock,
      *a1);
}

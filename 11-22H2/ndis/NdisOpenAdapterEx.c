/*
 * XREFs of NdisOpenAdapterEx @ 0x1C0149DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CDC0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0015388 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00171AC (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A758 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C001AF6C (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001F2A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001F3F4 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F5AC (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C0020854 (WPP_RECORDER_SF_qZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006E8F4 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C010C6B8 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0111394 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisPktMonOpenRegister @ 0x1C0111E00 (ndisPktMonOpenRegister.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C0112018 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01142E8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C01394AC (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01496A8 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C0156700 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  PNDIS_HANDLE v5; // r13
  struct _NDIS_OPEN_BLOCK *v8; // r14
  char v9; // r12
  unsigned int MediumArraySize; // edx
  int v11; // r9d
  _UNICODE_STRING *v12; // rax
  __int64 v13; // rdi
  _UNICODE_STRING *v14; // rsi
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rax
  unsigned int v16; // ecx
  unsigned int FrameTypeArraySize; // eax
  unsigned int i; // r8d
  __int64 v19; // rdx
  KIRQL v20; // al
  _DWORD *v21; // rsi
  KIRQL v22; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  bool v24; // zf
  struct _NDIS_MINIPORT_BLOCK *v25; // rdx
  int v26; // eax
  NDIS_STATUS v27; // esi
  __int64 v28; // rbx
  int v29; // edx
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  int v34; // [rsp+28h] [rbp-51h]
  int v35; // [rsp+58h] [rbp-21h] BYREF
  int v36; // [rsp+5Ch] [rbp-1Dh]
  __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  _UNICODE_STRING *v38; // [rsp+68h] [rbp-11h]
  __int64 Pool2; // [rsp+70h] [rbp-9h]
  _UNICODE_STRING *v40; // [rsp+78h] [rbp-1h]
  _UNICODE_STRING *v41; // [rsp+80h] [rbp+7h]
  _UNICODE_STRING *v42; // [rsp+88h] [rbp+Fh]
  char v43; // [rsp+D8h] [rbp+5Fh]

  v5 = NdisBindingHandle;
  v37 = 0LL;
  Pool2 = 0LL;
  v38 = 0LL;
  *NdisBindingHandle = 0LL;
  v8 = 0LL;
  v43 = 0;
  v9 = 0;
  v35 = -1073741823;
  LOBYTE(v36) = 0;
  if ( NdisProtocolHandle )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)ProtocolBindingContext,
        (__int64)OpenParameters,
        0x3Eu,
        v34,
        (char)NdisProtocolHandle,
        (unsigned __int16 *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
    {
      v13 = v37;
      v27 = v35;
      goto LABEL_82;
    }
    if ( !ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
    {
      *v5 = 0LL;
      v27 = -1073676286;
      v13 = v37;
      goto LABEL_39;
    }
    v9 = 1;
    v42 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 54);
    v40 = v42;
    if ( v42 )
    {
      v12 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 55);
      v13 = *((_QWORD *)NdisProtocolHandle + 57);
      v14 = v42;
      v38 = v12;
      v37 = v13;
    }
    else
    {
      ndisFindRootDevice((__int64)OpenParameters->AdapterName, (__int64)&v37, MPREF_PT_OPENINGX);
      v13 = v37;
      v14 = v40;
      v31 = (unsigned __int8)v36;
      if ( v37 )
        v31 = 1;
      v36 = v31;
      v12 = v38;
    }
    *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
    v41 = v12;
    if ( !v13 )
    {
      *v5 = 0LL;
      v27 = -1073676282;
LABEL_83:
      ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, MediumArraySize, 9u, v11);
LABEL_84:
      if ( v43 )
        ndisRemoveOpenFromGlobalList(v8);
      goto LABEL_39;
    }
    OpenBlock = ndisAllocateOpenBlock(
                  (struct _NDIS_MINIPORT_BLOCK *)v13,
                  (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle,
                  1);
    v11 = 0;
    v8 = OpenBlock;
    if ( OpenBlock )
    {
      if ( (*(_DWORD *)(v13 + 124) & 0x100) != 0
        || !*(_BYTE *)(v13 + 1995) && *(_DWORD *)(v13 + 2248) != 6 && *(_BYTE *)(v13 + 32) >= 6u )
      {
        v27 = -1073676282;
        goto LABEL_54;
      }
      if ( !*(_BYTE *)(v13 + 1994) )
        *(_BYTE *)(v13 + 1994) = 1;
      OpenBlock->BindDeviceName = v14;
      OpenBlock->RootDeviceName = v41;
      OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
      OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)v13;
      OpenBlock->ProtocolHandle = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
      *v5 = OpenBlock;
      MediumArraySize = OpenParameters->MediumArraySize;
      v16 = 0;
      if ( (*(_DWORD *)(v13 + 568) & 0x80000001) == 0x80000001 )
      {
        if ( MediumArraySize )
        {
          do
          {
            if ( OpenParameters->MediumArray[v16] == NdisMediumWan )
              break;
            ++v16;
          }
          while ( v16 < MediumArraySize );
        }
      }
      else if ( MediumArraySize )
      {
        do
        {
          if ( OpenParameters->MediumArray[v16] == *(_DWORD *)(v13 + 464) )
            break;
          ++v16;
        }
        while ( v16 < MediumArraySize );
        v11 = 0;
      }
      if ( v16 == MediumArraySize )
      {
        v27 = -1073676263;
        goto LABEL_54;
      }
      *OpenParameters->SelectedMediumIndex = v16;
      FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
      if ( FrameTypeArraySize <= 4 )
      {
        v8->FrameTypeArraySize = FrameTypeArraySize;
        for ( i = 0;
              i < OpenParameters->FrameTypeArraySize;
              v8->FrameTypeArray[v19] = __ROR2__(OpenParameters->FrameTypeArray[v19], 8) )
        {
          v19 = i++;
        }
        if ( ndisDatapathVerifierMode == 1 )
        {
          if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13))
            || !ndisDriverVerifierNdisFlagEnabled() )
          {
LABEL_25:
            v20 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
            v8->NextGlobalOpen = ndisGlobalOpenList;
            LOBYTE(NdisBindingHandle) = v20;
            ndisGlobalOpenList = v8;
            v43 = 1;
            KeReleaseSpinLock(&ndisGlobalOpenListLock, v20);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v13, (unsigned __int8 *)&NdisBindingHandle);
            v21 = (_DWORD *)(v13 + 120);
            if ( (*(_DWORD *)(v13 + 120) & 0x40000) == 0 )
            {
              while ( *(_BYTE *)(v13 + 89) )
              {
                *(_QWORD *)(v13 + 520) = 0LL;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 96));
                KeStallExecutionProcessor(1u);
                KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 96));
                *(_QWORD *)(v13 + 520) = KeGetCurrentThread();
              }
              *(_BYTE *)(v13 + 89) = 1;
              v13 = v37;
              *(_QWORD *)(v37 + 1864) = KeGetCurrentThread();
            }
            ndisMOpenAdapter(&v35, v8, (struct _NDIS_MINIPORT_BLOCK *)v13);
            if ( !v35 )
            {
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  6u,
                  0x3Fu,
                  (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
                  (char)v8,
                  (char)NdisProtocolHandle,
                  v13);
              if ( (*v21 & 0x20020000) == 0 )
                ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v13, 2u);
              if ( (*v21 & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
              {
                Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
                if ( Pool2 )
                {
                  ndisMReferenceOpen((__int64)v8, 0);
                  _InterlockedAdd(&v8->PendingAfNotifications, 1u);
                  v32 = (_QWORD *)Pool2;
                  v13 = v37;
                  *(_QWORD *)(Pool2 + 8) = 0LL;
                  *v32 = v8;
                  v32[3] = ndisMFinishQueuedPendingOpen;
                  v32[4] = v32;
                }
                else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    0x13u,
                    0x40u,
                    (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
                    v8);
                }
              }
            }
            if ( (*v21 & 0x40000) == 0 )
            {
              *(_BYTE *)(v13 + 89) = 0;
              *(_QWORD *)(v13 + 1864) = 0LL;
            }
            v22 = (unsigned __int8)NdisBindingHandle;
            *(_QWORD *)(v13 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), v22);
            Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v13 + 5112));
            CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v13 + 5112));
            v8->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
            v24 = Ndis::BindState::AddBindContext(&CurrentLink->BindState, v8) == 0;
            v26 = v35;
            if ( v24 )
              v26 = -1073741670;
            v27 = v26;
            Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v13 + 5112), v25);
            if ( !v27 )
            {
              if ( (*(_DWORD *)(v13 + 124) & 0x2000) != 0 )
              {
                v33 = *(_QWORD *)(v13 + 3984);
                if ( v33 )
                  (*(void (__fastcall **)(_QWORD))(v33 + 32))(*(_QWORD *)(v33 + 8));
              }
              ndisPktMonOpenRegister((__int64)v8);
              v28 = Pool2;
              *((_QWORD *)BindContext + 2) = v8;
              if ( !v28 )
                goto LABEL_39;
              (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(v8->ProtocolBindingContext, 0LL);
              ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)v13);
              ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v28 + 8));
              v27 = 259;
            }
            if ( v27 != 259 )
            {
LABEL_82:
              *v5 = 0LL;
              if ( !v9 )
                goto LABEL_84;
              goto LABEL_83;
            }
LABEL_39:
            ndisDereferencePackage((PVOID *)&ndisPkgs);
            if ( (_BYTE)v36 )
              ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v13, 0x2Du);
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqqL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v29,
                6u,
                0x41u,
                (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids,
                (char)NdisProtocolHandle,
                v13,
                (char)v8,
                v27);
            return v27;
          }
        }
        else if ( ndisDatapathVerifierMode != 2 )
        {
          goto LABEL_25;
        }
        v13 = v37;
        v8->OpenFlags |= 1u;
        goto LABEL_25;
      }
    }
    v27 = -1073741670;
LABEL_54:
    *v5 = 0LL;
    goto LABEL_83;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      6u,
      0x3Du,
      (struct _GUID *)&WPP_fdc5294f2db637a048b8ad24a033bc88_Traceguids);
  return -1073741823;
}

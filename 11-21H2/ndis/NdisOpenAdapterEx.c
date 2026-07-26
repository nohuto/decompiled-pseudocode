/*
 * XREFs of NdisOpenAdapterEx @ 0x1C013EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016450 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0017174 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019598 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E70 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C001E260 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C001E30C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C001FC6C (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C0021598 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069538 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C0101128 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C01061E8 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C010A034 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C010A148 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C012D690 (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013CF90 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C014A7C8 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  PNDIS_HANDLE v5; // r12
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  char v9; // r13
  __int64 MediumArraySize; // rdx
  _NDIS_MEDIUM *MediumArray; // r8
  __int64 v12; // r9
  _UNICODE_STRING *v13; // rsi
  _UNICODE_STRING *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int FrameTypeArraySize; // eax
  unsigned int i; // r8d
  __int64 v20; // rdx
  KIRQL v21; // al
  int *v22; // rsi
  int v23; // ecx
  KIRQL v24; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  bool v26; // zf
  struct _NDIS_MINIPORT_BLOCK *v27; // rdx
  int v28; // eax
  NDIS_STATUS v29; // esi
  __int64 v30; // rbx
  int v31; // edx
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  int v36; // [rsp+28h] [rbp-51h]
  int v37; // [rsp+58h] [rbp-21h] BYREF
  int v38; // [rsp+5Ch] [rbp-1Dh]
  __int64 v39; // [rsp+60h] [rbp-19h] BYREF
  _UNICODE_STRING *v40; // [rsp+68h] [rbp-11h]
  __int64 Pool2; // [rsp+70h] [rbp-9h]
  _UNICODE_STRING *v42; // [rsp+78h] [rbp-1h]
  _UNICODE_STRING *v43; // [rsp+80h] [rbp+7h]
  _DWORD *v44; // [rsp+88h] [rbp+Fh]
  char v45; // [rsp+D8h] [rbp+5Fh]

  v5 = NdisBindingHandle;
  v39 = 0LL;
  Pool2 = 0LL;
  v40 = 0LL;
  *NdisBindingHandle = 0LL;
  OpenBlock = 0LL;
  v45 = 0;
  v9 = 0;
  v37 = -1073741823;
  LOBYTE(v38) = 0;
  if ( NdisProtocolHandle )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)ProtocolBindingContext,
        (__int64)OpenParameters,
        0x3Eu,
        v36,
        (char)NdisProtocolHandle,
        (unsigned __int16 *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
    {
      v15 = v39;
      v29 = v37;
      goto LABEL_85;
    }
    if ( !ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
    {
      *v5 = 0LL;
      v29 = -1073676286;
      v15 = v39;
      goto LABEL_39;
    }
    v13 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 54);
    v9 = 1;
    v42 = v13;
    if ( v13 )
    {
      v14 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 55);
      v15 = *((_QWORD *)NdisProtocolHandle + 57);
      v40 = v14;
      v39 = v15;
    }
    else
    {
      ndisFindRootDevice((__int64)OpenParameters->AdapterName, (__int64)&v39, MPREF_PT_OPENINGX);
      v15 = v39;
      v13 = v42;
      v33 = (unsigned __int8)v38;
      if ( v39 )
        v33 = 1;
      v38 = v33;
      v14 = v40;
    }
    *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
    v43 = v14;
    if ( !v15 )
    {
      *v5 = 0LL;
      v29 = -1073676282;
LABEL_86:
      LOBYTE(MediumArray) = 9;
      ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, MediumArraySize, (__int64)MediumArray, v12);
LABEL_87:
      if ( v45 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
      goto LABEL_39;
    }
    OpenBlock = ndisAllocateOpenBlock(
                  (struct _NDIS_MINIPORT_BLOCK *)v15,
                  (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle,
                  1);
    if ( !OpenBlock )
      goto LABEL_52;
    v44 = (_DWORD *)(v15 + 124);
    if ( (*(_DWORD *)(v15 + 124) & 0x100) != 0
      || !*(_BYTE *)(v15 + 1995) && *(_DWORD *)(v15 + 2248) != 6 && *(_BYTE *)(v15 + 32) >= 6u )
    {
      v29 = -1073676282;
      goto LABEL_54;
    }
    if ( !*(_BYTE *)(v15 + 1994) )
      *(_BYTE *)(v15 + 1994) = 1;
    OpenBlock->RootDeviceName = v43;
    OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
    OpenBlock->BindDeviceName = v13;
    OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)v15;
    OpenBlock->ProtocolHandle = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
    *v5 = OpenBlock;
    MediumArraySize = OpenParameters->MediumArraySize;
    v16 = 0;
    if ( (*(_DWORD *)(v15 + 568) & 0x80000001) == 0x80000001 )
    {
      if ( (_DWORD)MediumArraySize )
      {
        MediumArray = OpenParameters->MediumArray;
        do
        {
          if ( MediumArray[v16] == NdisMediumWan )
            break;
          ++v16;
        }
        while ( v16 < (unsigned int)MediumArraySize );
      }
      v17 = OpenParameters->MediumArraySize;
    }
    else
    {
      v17 = OpenParameters->MediumArraySize;
      if ( (_DWORD)MediumArraySize )
      {
        MediumArray = OpenParameters->MediumArray;
        v12 = *(unsigned int *)(v15 + 464);
        while ( MediumArray[v16] != (_DWORD)v12 )
        {
          ++v16;
          v17 = OpenParameters->MediumArraySize;
          if ( v16 >= (unsigned int)MediumArraySize )
            goto LABEL_20;
        }
LABEL_21:
        *OpenParameters->SelectedMediumIndex = v16;
        FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
        if ( FrameTypeArraySize <= 4 )
        {
          OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
          for ( i = 0;
                i < OpenParameters->FrameTypeArraySize;
                OpenBlock->FrameTypeArray[v20] = __ROR2__(OpenParameters->FrameTypeArray[v20], 8) )
          {
            v20 = i++;
          }
          if ( ndisDatapathVerifierMode == 1 )
          {
            if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13))
              || !ndisDriverVerifierNdisFlagEnabled() )
            {
LABEL_26:
              v21 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              LOBYTE(NdisBindingHandle) = v21;
              ndisGlobalOpenList = OpenBlock;
              v45 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v21);
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v15, (unsigned __int8 *)&NdisBindingHandle);
              v22 = (int *)(v15 + 120);
              if ( (*(_DWORD *)(v15 + 120) & 0x40000) == 0 )
              {
                while ( *(_BYTE *)(v15 + 89) )
                {
                  *(_QWORD *)(v15 + 520) = 0LL;
                  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v15 + 96));
                  KeStallExecutionProcessor(1u);
                  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 96));
                  *(_QWORD *)(v15 + 520) = KeGetCurrentThread();
                }
                *(_BYTE *)(v15 + 89) = 1;
                v15 = v39;
                *(_QWORD *)(v39 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v37, OpenBlock, (struct _NDIS_MINIPORT_BLOCK *)v15);
              if ( !v37 )
              {
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    6u,
                    0x3Fu,
                    (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
                    (char)OpenBlock,
                    (char)NdisProtocolHandle,
                    v15);
                v23 = *v22;
                if ( (*v22 & 0x20000000) == 0 && (*v22 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v15, 2u);
                  v23 = *v22;
                }
                if ( (v23 & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
                {
                  Pool2 = ExAllocatePool2(64LL, 40LL, 1769423950);
                  if ( Pool2 )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    v34 = (_QWORD *)Pool2;
                    v15 = v39;
                    *(_QWORD *)(Pool2 + 8) = 0LL;
                    *v34 = OpenBlock;
                    v34[3] = ndisMFinishQueuedPendingOpen;
                    v34[4] = v34;
                  }
                  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      0x13u,
                      0x40u,
                      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
                      OpenBlock);
                  }
                }
              }
              if ( (*v22 & 0x40000) == 0 )
              {
                *(_BYTE *)(v15 + 89) = 0;
                *(_QWORD *)(v15 + 1864) = 0LL;
              }
              v24 = (unsigned __int8)NdisBindingHandle;
              *(_QWORD *)(v15 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 96), v24);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v15 + 5112));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v15 + 5112));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              v26 = Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) == 0;
              v28 = v37;
              if ( v26 )
                v28 = -1073741670;
              v29 = v28;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v15 + 5112), v27);
              if ( !v29 )
              {
                if ( (*v44 & 0x2000) != 0 )
                {
                  v35 = *(_QWORD *)(v15 + 3984);
                  if ( v35 )
                    (*(void (__fastcall **)(_QWORD))(v35 + 32))(*(_QWORD *)(v35 + 8));
                }
                ndisPktMonOpenRegister(OpenBlock);
                v30 = Pool2;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v30 )
                  goto LABEL_39;
                (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(
                  OpenBlock->ProtocolBindingContext,
                  0LL);
                ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)v15);
                ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v30 + 8));
                v29 = 259;
              }
              if ( v29 != 259 )
              {
LABEL_85:
                *v5 = 0LL;
                if ( !v9 )
                  goto LABEL_87;
                goto LABEL_86;
              }
LABEL_39:
              ndisDereferencePackage((PVOID *)&ndisPkgs);
              if ( (_BYTE)v38 )
                ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v15, 0x2Du);
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqqL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v31,
                  6u,
                  0x41u,
                  (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
                  (char)NdisProtocolHandle,
                  v15,
                  (char)OpenBlock,
                  v29);
              return v29;
            }
          }
          else if ( ndisDatapathVerifierMode != 2 )
          {
            goto LABEL_26;
          }
          v15 = v39;
          OpenBlock->OpenFlags |= 1u;
          goto LABEL_26;
        }
LABEL_52:
        v29 = -1073741670;
LABEL_54:
        *v5 = 0LL;
        goto LABEL_86;
      }
    }
LABEL_20:
    if ( v16 == v17 )
    {
      v29 = -1073676263;
      goto LABEL_54;
    }
    goto LABEL_21;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      6u,
      0x3Du,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids);
  return -1073741823;
}

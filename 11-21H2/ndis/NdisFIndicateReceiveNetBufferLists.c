/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C00066F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00037F0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0034FB8 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006D4FC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00AE8FC (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  ULONG v6; // r12d
  ULONG v7; // esi
  NDIS_PORT_NUMBER v8; // edi
  void (*v10)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  __int64 v11; // r15
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned int v14; // r8d
  char v15; // bl
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  char *v19; // r8
  PNET_BUFFER_LIST Alignment; // rsi
  unsigned int *v21; // r10
  unsigned __int64 v22; // rbx
  char *SourceHandle; // rcx
  int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  bool v27; // r10
  bool v28; // zf
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  KIRQL CurrentIrql; // al
  __int64 v35; // rdx
  PNET_BUFFER_LIST v36; // rcx
  ULONG v37; // r8d
  PNET_BUFFER_LIST *p_Next; // rax
  char v39[4]; // [rsp+40h] [rbp-68h] BYREF
  BOOL v40; // [rsp+44h] [rbp-64h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v41; // [rsp+48h] [rbp-60h]
  __int64 v42; // [rsp+50h] [rbp-58h]
  char *v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+60h] [rbp-48h]
  __int64 v45; // [rsp+68h] [rbp-40h]
  bool v46; // [rsp+B0h] [rbp+8h] BYREF
  NDIS_PORT_NUMBER v47; // [rsp+C0h] [rbp+18h]
  ULONG v48; // [rsp+C8h] [rbp+20h]

  v48 = NumberOfNetBufferLists;
  v47 = PortNumber;
  v6 = ReceiveFlags;
  v7 = NumberOfNetBufferLists;
  v8 = PortNumber;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferLists,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((enum _NDIS_MEDIUM *)NdisFilterHandle + 84));
    ndisNblPoisonScratchFields(NetBufferLists);
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, v7);
  if ( byte_1C00EC210 )
  {
    v33 = *((_QWORD *)NdisFilterHandle + 113);
    if ( v33 )
    {
      if ( (*(_DWORD *)(v33 + 52) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 880, NetBufferLists, *(_QWORD *)&PortNumber, 1LL);
    }
  }
  v10 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))*((_QWORD *)NdisFilterHandle
                                                                                               + 79);
  if ( v10 != ndisFilterIndicateReceiveNetBufferLists )
  {
    ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))v10)(
      NdisFilterHandle,
      NetBufferLists,
      v8,
      v7,
      v6);
    goto LABEL_43;
  }
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v11 = 96LL * (_QWORD)v10 + *((_QWORD *)NdisFilterHandle + 53) + 48LL;
  v45 = v11;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v12 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 81);
    v13 = *((_QWORD *)NdisFilterHandle + 64);
    v14 = 131;
    if ( (v6 & 2) == 0 )
      v14 = 130;
    v41 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 81);
    v15 = ndisNblTrackerEpoch;
    v40 = (v6 & 1) != 0;
    v16 = 0LL;
    v44 = 0LL;
    v17 = 0LL;
    v42 = 0LL;
    v46 = (v6 & 1) != 0;
    v39[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferLists, v12, v14, (void *)v13, (v6 & 1) != 0);
      v12 = v41;
      v16 = 0LL;
    }
    v18 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      v19 = *(char **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v18 |= 2LL * (v15 & 1);
    }
    else
    {
      v19 = (char *)v18;
    }
    v43 = v19;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      v21 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v22 )
        {
          if ( v22 )
          {
            if ( (v22 & 4) != 0 )
              goto LABEL_56;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v12,
                                                v19,
                                                v16);
          }
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v24 = (unsigned __int8)*SourceHandle;
            if ( (unsigned __int8)(v24 - 17) <= 1u || (_BYTE)v24 == 5 )
            {
              if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
              {
                v12 = v41;
                ++v17;
                v25 = v18;
              }
              else
              {
                v12 = v41;
                v42 = ++v16;
                ++v17;
                v25 = 24LL;
              }
              goto LABEL_24;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v21 )
            {
              LOBYTE(v24) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v24,
                27,
                12,
                (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
                (char)Alignment,
                *SourceHandle);
LABEL_54:
              v19 = v43;
              v21 = &WPP_RECORDER_INITIALIZED;
              v16 = v42;
            }
            v12 = v41;
            goto LABEL_56;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v21 )
          {
            LOBYTE(v12) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v12,
              27,
              11,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment);
            goto LABEL_54;
          }
LABEL_56:
          v25 = v18 | 4;
LABEL_24:
          Alignment->NetBufferListInfo[27] = (void *)v25;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v26 = v44 - v17;
        v44 -= v17;
        if ( (v22 & 1) != 0 && v26 )
        {
          v27 = v40;
          if ( !v40 && !v39[0] )
          {
            v39[0] = 1;
            CurrentIrql = KeGetCurrentIrql();
            v19 = v43;
            v26 = v44;
            v27 = CurrentIrql == 2;
            v46 = CurrentIrql == 2;
          }
          v28 = !v27;
          v21 = &WPP_RECORDER_INITIALIZED;
          v29 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( v28 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v26);
          }
          else
          {
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v26;
          }
          v40 = v46;
        }
        v12 = v41;
        v16 = v42;
        v44 = v17;
        if ( !Alignment )
        {
          v11 = v45;
          break;
        }
      }
    }
    if ( (v18 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v18, v17 - v16, &v46, v39);
    v7 = v48;
    v8 = v47;
  }
  if ( (v6 & 2) == 0 && ((v6 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v11 + 16) )
  {
    v31 = v6 | 1;
    if ( !*(_QWORD *)v11 )
    {
      *(_QWORD *)v11 = NetBufferLists;
      goto LABEL_41;
    }
    v35 = *(_QWORD *)(v11 + 8);
    if ( v8 != *(_DWORD *)(v35 + 140) || v31 != *(_DWORD *)(v35 + 132) || (v6 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v35 + 112) = NetBufferLists;
LABEL_41:
      *(_QWORD *)(v11 + 8) = NetBufferLists;
      v32 = NetBufferLists->Link.Alignment;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v31;
      NetBufferLists->Status = v8;
      if ( v32 )
        *(_QWORD *)(v32 + 112) = v7;
      goto LABEL_43;
    }
    v36 = *(PNET_BUFFER_LIST *)v35;
    if ( *(_QWORD *)v35 )
    {
      v37 = v7 + LODWORD(v36->Scratch);
      do
      {
        p_Next = &v36->Next;
        v36 = (PNET_BUFFER_LIST)v36->Link.Alignment;
      }
      while ( v36 );
    }
    else
    {
      v37 = v7 + 1;
      p_Next = *(PNET_BUFFER_LIST **)(v11 + 8);
    }
    *p_Next = NetBufferLists;
    if ( *(_QWORD *)v35 )
      *(_QWORD *)(*(_QWORD *)v35 + 112LL) = v37;
  }
  else
  {
    ndisInvokeNextReceiveHandler(
      NetBufferLists,
      v8,
      v7,
      v6,
      *((struct _NDIS_OBJECT_HEADER **)NdisFilterHandle + 65),
      *((void **)NdisFilterHandle + 63),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))NdisFilterHandle + 62));
    if ( (v6 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        *((_QWORD *)NdisFilterHandle + 64),
        *((_QWORD *)NdisFilterHandle + 81),
        0x8Cu,
        v6 & 1);
  }
LABEL_43:
  if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210) && (v6 & 2) != 0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
}

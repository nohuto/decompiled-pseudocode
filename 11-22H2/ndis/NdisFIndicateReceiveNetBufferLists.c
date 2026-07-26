/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C0004680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00130F4 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C0036F70 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C007289C (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00B47B8 (-ndisGenerateNetBufferListCorrelationIds@@YAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  ULONG v6; // ebp
  ULONG v7; // edi
  NDIS_PORT_NUMBER v8; // r13d
  void (*v10)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  __int64 v11; // r14
  unsigned int v12; // r8d
  struct NDIS_NBL_TRACKER_HANDLE__ *v13; // rdx
  unsigned __int64 v14; // rdi
  char v15; // bl
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // rdi
  char *v19; // r8
  PNET_BUFFER_LIST Alignment; // r12
  unsigned int *v21; // r9
  unsigned __int64 v22; // rbx
  char *SourceHandle; // rcx
  int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  bool v27; // r9
  bool v28; // zf
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // ebx
  int v32; // ebp
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  KIRQL CurrentIrql; // al
  __int64 v36; // rdx
  PNET_BUFFER_LIST v37; // rcx
  ULONG v38; // r8d
  PNET_BUFFER_LIST *p_Next; // rax
  char v40[4]; // [rsp+40h] [rbp-68h] BYREF
  BOOL v41; // [rsp+44h] [rbp-64h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v42; // [rsp+48h] [rbp-60h]
  __int64 v43; // [rsp+50h] [rbp-58h]
  __int64 v44; // [rsp+58h] [rbp-50h]
  char *v45; // [rsp+60h] [rbp-48h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]
  bool v47; // [rsp+B0h] [rbp+8h] BYREF
  NDIS_PORT_NUMBER v48; // [rsp+C0h] [rbp+18h]
  ULONG v49; // [rsp+C8h] [rbp+20h]

  v49 = NumberOfNetBufferLists;
  v48 = PortNumber;
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
  if ( byte_1C00F5390 )
  {
    v34 = *((_QWORD *)NdisFilterHandle + 114);
    if ( v34 )
    {
      if ( (*(_DWORD *)(v34 + 56) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 888, NetBufferLists, *(_QWORD *)&PortNumber, 1LL);
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
    v31 = v6 & 2;
    goto LABEL_43;
  }
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v11 = *((_QWORD *)NdisFilterHandle + 53) + 96LL * (_QWORD)v10;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    if ( (v6 & 2) != 0 )
      v12 = 131;
    else
      v12 = 130;
    v13 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 81);
    v14 = *((_QWORD *)NdisFilterHandle + 64);
    v42 = v13;
    v15 = ndisNblTrackerEpoch;
    v41 = (v6 & 1) != 0;
    v16 = 0LL;
    v46 = 0LL;
    v17 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v47 = (v6 & 1) != 0;
    v40[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferLists, v13, v12, (void *)v14, (v6 & 1) != 0);
      v16 = v43;
      v13 = v42;
      v17 = v43;
    }
    v18 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v18 & 1) != 0 )
    {
      v19 = *(char **)((v18 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v18 |= 2LL * (v15 & 1);
    }
    else
    {
      v19 = (char *)v18;
    }
    v45 = v19;
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
              goto LABEL_57;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v13,
                                                v19,
                                                v21);
          }
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v24 = (unsigned __int8)*SourceHandle;
            if ( (unsigned __int8)(v24 - 17) <= 1u || (_BYTE)v24 == 5 )
            {
              if ( SourceHandle != v19 || Alignment->ParentNetBufferList )
              {
                v13 = v42;
                v43 = ++v16;
                v25 = v18;
              }
              else
              {
                v13 = v42;
                ++v17;
                ++v16;
                v44 = v17;
                v43 = v16;
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
                (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
                (char)Alignment,
                *SourceHandle);
LABEL_55:
              v16 = v43;
              v21 = &WPP_RECORDER_INITIALIZED;
              v19 = v45;
              v17 = v44;
            }
            v13 = v42;
            goto LABEL_57;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v21 )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v13,
              27,
              11,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)Alignment);
            goto LABEL_55;
          }
LABEL_57:
          v25 = v18 | 4;
LABEL_24:
          Alignment->NetBufferListInfo[27] = (void *)v25;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v26 = v46 - v16;
        v46 -= v16;
        if ( (v22 & 1) != 0 && v26 )
        {
          v27 = v41;
          if ( !v41 && !v40[0] )
          {
            v40[0] = 1;
            CurrentIrql = KeGetCurrentIrql();
            v16 = v43;
            v19 = v45;
            v26 = v46;
            v27 = CurrentIrql == 2;
            v47 = CurrentIrql == 2;
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
          v41 = v47;
        }
        v13 = v42;
        v17 = v44;
        v46 = v16;
        if ( !Alignment )
        {
          v8 = v48;
          break;
        }
      }
    }
    if ( (v18 & 1) != 0 )
      ndisNblTrackerUpdateOwnershipCount(v18, v16 - v17, &v47, v40);
    v7 = v49;
  }
  v31 = v6 & 2;
  if ( (v6 & 2) == 0 && ((v6 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v11 + 64) )
  {
    v32 = v6 | 1;
    if ( !*(_QWORD *)(v11 + 48) )
    {
      *(_QWORD *)(v11 + 48) = NetBufferLists;
      goto LABEL_41;
    }
    v36 = *(_QWORD *)(v11 + 56);
    if ( v8 != *(_DWORD *)(v36 + 140) || v32 != *(_DWORD *)(v36 + 132) || (v32 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v36 + 112) = NetBufferLists;
LABEL_41:
      *(_QWORD *)(v11 + 56) = NetBufferLists;
      v33 = NetBufferLists->Link.Alignment;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v32;
      NetBufferLists->Status = v8;
      if ( v33 )
        *(_QWORD *)(v33 + 112) = v7;
      goto LABEL_43;
    }
    v37 = *(PNET_BUFFER_LIST *)v36;
    if ( *(_QWORD *)v36 )
    {
      v38 = v7 + LODWORD(v37->Scratch);
      do
      {
        p_Next = &v37->Next;
        v37 = (PNET_BUFFER_LIST)v37->Link.Alignment;
      }
      while ( v37 );
    }
    else
    {
      v38 = v7 + 1;
      p_Next = *(PNET_BUFFER_LIST **)(v11 + 56);
    }
    *p_Next = NetBufferLists;
    if ( *(_QWORD *)v36 )
      *(_QWORD *)(*(_QWORD *)v36 + 112LL) = v38;
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
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 64),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)NdisFilterHandle + 81),
        NdisNblTrackerEvent_ReturnedToFilterResources,
        v6 & 1);
  }
LABEL_43:
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
  {
    if ( v31 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  }
}

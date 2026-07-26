/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C0007F50
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0060468 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C003957C (-ndisInvokeNextSendCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D720 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  ULONG v3; // ebp
  PNET_BUFFER_LIST v4; // rsi
  NDIS_HANDLE v5; // r14
  unsigned __int64 updated; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char v10; // r12
  char v11; // di
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  char *v14; // r8
  _SLIST_HEADER *Alignment; // r15
  __int64 v16; // rbp
  unsigned int *v17; // r9
  struct NDIS_NBL_TRACKER_HANDLE__ *v18; // r14
  unsigned __int64 Region; // rdi
  char *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbx
  int v27; // ebp
  unsigned __int64 v28; // rcx
  bool v29; // zf
  PNET_BUFFER_LIST *v30; // rcx
  _QWORD *i; // rax
  char v32[8]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-70h]
  char *v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+58h] [rbp-60h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v36; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+D8h] [rbp+20h] BYREF

  v3 = SendCompleteFlags;
  v4 = NetBufferList;
  v5 = NdisFilterHandle;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(v4);
  }
  updated = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v7 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)v5 + 81);
    v8 = 0LL;
    v35 = 0LL;
    v9 = *((_QWORD *)v5 + 60);
    v10 = v3 & 1;
    v11 = ndisNblTrackerEpoch;
    v12 = 0LL;
    v36 = v7;
    v33 = 0LL;
    v40 = v3 & 1;
    v32[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
      ndisNblTrackerRecordEventInternal(v4, v7, 0x94u, (void *)v9, v3 & 1);
    v13 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v13 & 1) != 0 )
    {
      v28 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
      updated = 2LL * (v11 & 1);
      v13 |= updated;
      v14 = *(char **)(v28 + 24);
    }
    else
    {
      v14 = (char *)v13;
    }
    v34 = v14;
    Alignment = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      v16 = v35;
      v17 = &WPP_RECORDER_INITIALIZED;
      v18 = v36;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        while ( Alignment[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_42;
          }
          else if ( !Alignment[7].Region )
          {
            Alignment[7].Region = ndisSourceHandleFromOwner((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFDuLL, v8, v14, v17);
          }
          v20 = (char *)Alignment[7].Region;
          if ( v20 )
          {
            v8 = (unsigned __int8)*v20;
            if ( (unsigned __int8)(v8 - 17) <= 1u || (_BYTE)v8 == 5 )
            {
              if ( v20 != v14 || Alignment[1].Region )
              {
                ++v12;
                v21 = v13;
              }
              else
              {
                ++v16;
                v21 = 24LL;
                ++v12;
              }
              goto LABEL_18;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
            {
              LOBYTE(v8) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v8,
                27,
                12,
                (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
                (char)Alignment,
                *v20);
              goto LABEL_41;
            }
          }
          else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v8,
              27,
              11,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment);
LABEL_41:
            v17 = &WPP_RECORDER_INITIALIZED;
          }
LABEL_42:
          v14 = v34;
          v21 = v13 | 4;
LABEL_18:
          Alignment[22].Region = v21;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        updated = v33 - v12;
        v35 = v16;
        v33 -= v12;
        if ( (Region & 1) != 0 && updated )
        {
          if ( !v10 && !v32[0] )
          {
            v32[0] = 1;
            v29 = KeGetCurrentIrql() == 2;
            updated = v33;
            v10 = v29;
            v40 = v29;
          }
          v22 = Region;
          v23 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v8 = 2 * ((v22 >> 1) & 1);
          if ( v10 )
          {
            updated = KeGetPcr()->Prcb.Number << 12;
            v24 = (_QWORD *)(*(_QWORD *)(v23 + 8 * v8 + 40) + (unsigned int)updated);
            v8 = v33;
            *v24 += v33;
          }
          else
          {
            updated = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8 * v8 + 48), updated);
          }
          v10 = v40;
        }
        v14 = v34;
        v17 = &WPP_RECORDER_INITIALIZED;
        v33 = v12;
        if ( !Alignment )
        {
          v4 = NetBufferList;
          v3 = SendCompleteFlags;
          v5 = NdisFilterHandle;
          break;
        }
      }
    }
    if ( (v13 & 1) != 0 )
      updated = ndisNblTrackerUpdateOwnershipCount(v13, v12 - v35, &v40, v32);
  }
  if ( byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  LODWORD(updated) = KeGetPcr()->Prcb.Number;
  v25 = *((_QWORD *)v5 + 53);
  v26 = 96 * updated;
  if ( ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v26 + v25 + 40) )
  {
    v27 = v3 | 1;
    if ( !*(_QWORD *)(v26 + v25 + 24) )
    {
      *(_QWORD *)(v26 + v25 + 24) = v4;
LABEL_35:
      *(_QWORD *)(v26 + v25 + 32) = v4;
      v4->Scratch = 0LL;
      v4->ChildRefCount = v27;
      return;
    }
    v30 = *(PNET_BUFFER_LIST **)(v26 + v25 + 32);
    if ( v27 != *((_DWORD *)v30 + 33) || (v27 & 6) != 0 )
    {
      v30[14] = v4;
      goto LABEL_35;
    }
    for ( i = *v30; i; i = (_QWORD *)*i )
      v30 = (PNET_BUFFER_LIST *)i;
    *v30 = v4;
  }
  else
  {
    ndisInvokeNextSendCompleteHandler(
      v4,
      v3,
      (struct _NDIS_OBJECT_HEADER *)v5,
      *((struct _NDIS_OBJECT_HEADER **)v5 + 61),
      *((void **)v5 + 59),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))v5 + 58));
  }
}

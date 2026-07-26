/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0006A00
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0061AB0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0003350 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D410 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v3; // ebp
  __int64 v6; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  char v10; // cl
  char v11; // bl
  unsigned int v12; // r8d
  __int64 v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  char *v16; // r10
  PNET_BUFFER_LIST Alignment; // r14
  unsigned __int64 v18; // rbx
  unsigned int *v19; // r8
  char *SourceHandle; // rcx
  int v21; // edx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rdi
  int v27; // ebp
  unsigned __int64 v28; // rdx
  PNET_BUFFER_LIST *v29; // rcx
  _QWORD *v30; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v31; // [rsp+40h] [rbp-58h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  char *v33; // [rsp+50h] [rbp-48h]
  char v34; // [rsp+A0h] [rbp+8h]
  char v36; // [rsp+B8h] [rbp+20h]

  v3 = ReturnFlags;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(NetBufferLists);
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  v6 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v7 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 81);
    v8 = 0LL;
    v9 = *((_QWORD *)NdisFilterHandle + 68);
    v10 = 0;
    v11 = ndisNblTrackerEpoch;
    v12 = v3 & 1;
    v13 = 0LL;
    v14 = 0LL;
    v36 = v3 & 1;
    v31 = v7;
    v32 = 0LL;
    v34 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(NetBufferLists, v7, 0x8Au, (void *)v9, v12);
      LOBYTE(v12) = v3 & 1;
      v8 = 0LL;
      v7 = v31;
      v10 = 0;
    }
    v15 = v9 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 1) != 0 )
    {
      v16 = *(char **)((v15 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v6 = 2LL * (v11 & 1);
      v15 |= v6;
    }
    else
    {
      v16 = (char *)v15;
    }
    v33 = v16;
    Alignment = NetBufferLists;
    if ( NetBufferLists )
    {
      while ( 1 )
      {
        v18 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        v19 = &WPP_RECORDER_INITIALIZED;
        while ( Alignment->NetBufferListInfo[27] == (void *)v18 )
        {
          if ( v18 )
          {
            if ( (v18 & 4) != 0 )
              goto LABEL_47;
          }
          else if ( !Alignment->SourceHandle )
          {
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v7,
                                                v19,
                                                v8);
          }
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v21 = (unsigned __int8)*SourceHandle;
            if ( (unsigned __int8)(v21 - 17) <= 1u || (_BYTE)v21 == 5 )
            {
              if ( SourceHandle != v16 || Alignment->ParentNetBufferList )
              {
                v7 = v31;
                ++v14;
                v6 = v15;
              }
              else
              {
                v7 = v31;
                v32 = ++v8;
                ++v14;
                v6 = 24LL;
              }
              goto LABEL_20;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v19 )
            {
              LOBYTE(v21) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v21,
                27,
                12,
                (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
                (char)Alignment,
                *SourceHandle);
LABEL_45:
              v8 = v32;
              v19 = &WPP_RECORDER_INITIALIZED;
              v16 = v33;
            }
            v7 = v31;
            goto LABEL_47;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v19 )
          {
            LOBYTE(v7) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v7,
              27,
              11,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment);
            goto LABEL_45;
          }
LABEL_47:
          v6 = v15 | 4;
LABEL_20:
          Alignment->NetBufferListInfo[27] = (void *)v6;
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v22 = v13 - v14;
        LOBYTE(v12) = v36;
        if ( (v18 & 1) != 0 && v22 )
        {
          if ( v36 || v34 )
          {
            v6 = 16 * ((v18 >> 1) & 1);
            v23 = v6 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v36 )
              goto LABEL_53;
LABEL_28:
            v8 = v32;
            v16 = v33;
            v6 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)v23 + (unsigned int)v6) += v22;
          }
          else
          {
            v34 = 1;
            if ( KeGetCurrentIrql() == 2 )
            {
              LOBYTE(v12) = 1;
              v36 = 1;
              v23 = 16 * ((v18 >> 1) & 1) + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_28;
            }
            v8 = v32;
            v16 = v33;
            LOBYTE(v12) = 0;
            v36 = 0;
            v6 = 16 * ((v18 >> 1) & 1);
            v23 = v6 + (v18 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_53:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8), v22);
          }
        }
        v7 = v31;
        v13 = v14;
        if ( !Alignment )
        {
          v3 = ReturnFlags;
          v10 = v34;
          break;
        }
      }
    }
    v24 = v14 - v8;
    if ( (v15 & 1) != 0 )
    {
      if ( v24 )
      {
        if ( (_BYTE)v12 || v10 )
        {
          v6 = 16 * ((v15 >> 1) & 1);
          v28 = v6 + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
          if ( (_BYTE)v12 )
            goto LABEL_61;
        }
        else
        {
          if ( KeGetCurrentIrql() == 2 )
          {
            v28 = 16 * ((v15 >> 1) & 1) + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_61:
            v6 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)v28 + (unsigned int)v6) += v24;
            goto LABEL_33;
          }
          v6 = 16 * ((v15 >> 1) & 1);
          v28 = v6 + (v15 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8), v24);
      }
    }
  }
LABEL_33:
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  v25 = *((_QWORD *)NdisFilterHandle + 53);
  v26 = 96 * v6;
  if ( ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v26 + v25 + 88) )
  {
    v27 = v3 | 1;
    if ( !*(_QWORD *)(v26 + v25 + 72) )
    {
      *(_QWORD *)(v26 + v25 + 72) = NetBufferLists;
LABEL_38:
      *(_QWORD *)(v26 + v25 + 80) = NetBufferLists;
      NetBufferLists->Scratch = 0LL;
      NetBufferLists->ChildRefCount = v27;
      return;
    }
    v29 = *(PNET_BUFFER_LIST **)(v26 + v25 + 80);
    if ( v27 != *((_DWORD *)v29 + 33) || (v27 & 6) != 0 )
    {
      v29[14] = NetBufferLists;
      goto LABEL_38;
    }
    v30 = *v29;
    if ( *v29 )
    {
      do
      {
        v29 = (PNET_BUFFER_LIST *)v30;
        v30 = (_QWORD *)*v30;
      }
      while ( v30 );
    }
    *v29 = NetBufferLists;
  }
  else
  {
    ndisInvokeNextReceiveCompleteHandler(
      NetBufferLists,
      v3,
      (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
      *((struct _NDIS_FILTER_BLOCK **)NdisFilterHandle + 69),
      *((void **)NdisFilterHandle + 67),
      *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))NdisFilterHandle + 66));
  }
}

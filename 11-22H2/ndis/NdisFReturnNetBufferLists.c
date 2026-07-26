/*
 * XREFs of NdisFReturnNetBufferLists @ 0x1C0004390
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0066A20 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ??$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C0012F38 (--$ndisInvokeIterativeDatapath@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C0064668 (--$ndisExpandDataPathStack@$02$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006629C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00727B0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

void __stdcall NdisFReturnNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG ReturnFlags)
{
  ULONG v3; // ebp
  PNET_BUFFER_LIST v4; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  char v9; // cl
  char v10; // bl
  __int64 v11; // r12
  __int64 v12; // r13
  unsigned __int64 v13; // rdi
  char *v14; // r10
  _SLIST_HEADER *Alignment; // r14
  unsigned __int64 Region; // rbx
  unsigned int *v17; // r8
  char *v18; // rcx
  int v19; // edx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rdi
  int v25; // ebp
  struct _NDIS_FILTER_BLOCK *v26; // rbx
  void (__fastcall *v27)(__int64, PNET_BUFFER_LIST, _QWORD); // rdi
  __int64 v28; // r12
  PNET_BUFFER_LIST *v29; // rcx
  _QWORD *v30; // rax
  struct _NET_BUFFER_LIST *v31; // [rsp+40h] [rbp-58h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  char *v33; // [rsp+50h] [rbp-48h]
  char v34; // [rsp+A0h] [rbp+8h]
  ULONG v35; // [rsp+B0h] [rbp+18h]
  ULONG v36; // [rsp+B8h] [rbp+20h]

  v35 = ReturnFlags;
  v3 = ReturnFlags;
  v4 = NetBufferLists;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyRxCompletion((ULONG_PTR)NetBufferLists, ReturnFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(v4);
  }
  if ( Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  v6 = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NetBufferLists = (PNET_BUFFER_LIST)*((_QWORD *)NdisFilterHandle + 81);
    v7 = 0LL;
    v8 = *((_QWORD *)NdisFilterHandle + 68);
    v9 = 0;
    v10 = ndisNblTrackerEpoch;
    ReturnFlags = v3 & 1;
    v11 = 0LL;
    v36 = ReturnFlags;
    v12 = 0LL;
    v31 = NetBufferLists;
    v32 = 0LL;
    v34 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        v4,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferLists,
        0x8Au,
        (void *)v8,
        ReturnFlags);
      ReturnFlags = v3 & 1;
      v7 = 0LL;
      NetBufferLists = v31;
      v9 = 0;
    }
    v13 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v13 & 1) != 0 )
    {
      v14 = *(char **)((v13 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v6 = 2LL * (v10 & 1);
      v13 |= v6;
    }
    else
    {
      v14 = (char *)v13;
    }
    v33 = v14;
    Alignment = (_SLIST_HEADER *)v4;
    if ( v4 )
    {
      while ( 1 )
      {
        Region = Alignment[22].Region;
        v17 = &WPP_RECORDER_INITIALIZED;
        while ( Alignment[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_50;
          }
          else if ( !Alignment[7].Region )
          {
            Alignment[7].Region = ndisSourceHandleFromOwner(
                                    (unsigned __int64)NetBufferLists & 0xFFFFFFFFFFFFFFFDuLL,
                                    NetBufferLists,
                                    v17,
                                    v7);
          }
          v18 = (char *)Alignment[7].Region;
          if ( v18 )
          {
            v19 = (unsigned __int8)*v18;
            if ( (unsigned __int8)(v19 - 17) <= 1u || (_BYTE)v19 == 5 )
            {
              if ( v18 != v14 || Alignment[1].Region )
              {
                NetBufferLists = v31;
                ++v11;
                v6 = v13;
              }
              else
              {
                NetBufferLists = v31;
                v32 = ++v7;
                ++v11;
                v6 = 24LL;
              }
              goto LABEL_20;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
            {
              LOBYTE(v19) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v19,
                27,
                12,
                (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
                (char)Alignment,
                *v18);
LABEL_48:
              v7 = v32;
              v17 = &WPP_RECORDER_INITIALIZED;
              v14 = v33;
            }
            NetBufferLists = v31;
            goto LABEL_50;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
          {
            LOBYTE(NetBufferLists) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)NetBufferLists,
              27,
              11,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)Alignment);
            goto LABEL_48;
          }
LABEL_50:
          v6 = v13 | 4;
LABEL_20:
          Alignment[22].Region = v6;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v20 = v12 - v11;
        ReturnFlags = v36;
        if ( (Region & 1) != 0 && v20 )
        {
          if ( (_BYTE)v36 || v34 )
          {
            v6 = 16 * ((Region >> 1) & 1);
            v21 = v6 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !(_BYTE)v36 )
              goto LABEL_56;
LABEL_28:
            v7 = v32;
            v14 = v33;
            v6 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)v21 + (unsigned int)v6) += v20;
          }
          else
          {
            v34 = 1;
            if ( KeGetCurrentIrql() == 2 )
            {
              LOBYTE(ReturnFlags) = 1;
              v36 = ReturnFlags;
              v21 = 16 * ((Region >> 1) & 1) + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
              goto LABEL_28;
            }
            v7 = v32;
            v14 = v33;
            LOBYTE(ReturnFlags) = 0;
            v36 = ReturnFlags;
            v6 = 16 * ((Region >> 1) & 1);
            v21 = v6 + (Region & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_56:
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8), v20);
          }
        }
        NetBufferLists = v31;
        v12 = v11;
        if ( !Alignment )
        {
          v3 = v35;
          v9 = v34;
          break;
        }
      }
    }
    v22 = v11 - v7;
    if ( (v13 & 1) != 0 )
    {
      if ( v22 )
      {
        if ( (_BYTE)ReturnFlags || v9 )
        {
          v6 = 16 * ((v13 >> 1) & 1);
          NetBufferLists = (PNET_BUFFER_LIST)(v6 + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
          if ( (_BYTE)ReturnFlags )
            goto LABEL_64;
        }
        else
        {
          if ( KeGetCurrentIrql() == 2 )
          {
            NetBufferLists = (PNET_BUFFER_LIST)(16 * ((v13 >> 1) & 1) + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
LABEL_64:
            v6 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(NetBufferLists->Link.Alignment + (unsigned int)v6) += v22;
            goto LABEL_33;
          }
          v6 = 16 * ((v13 >> 1) & 1);
          NetBufferLists = (PNET_BUFFER_LIST)(v6 + (v13 & 0xFFFFFFFFFFFFFFF8uLL) + 40);
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)&NetBufferLists->FirstNetBuffer, v22);
      }
    }
  }
LABEL_33:
  LODWORD(v6) = KeGetPcr()->Prcb.Number;
  v23 = *((_QWORD *)NdisFilterHandle + 53);
  v24 = 96 * v6;
  if ( ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v24 + v23 + 88) )
  {
    v25 = v3 | 1;
    if ( !*(_QWORD *)(v24 + v23 + 72) )
    {
      *(_QWORD *)(v24 + v23 + 72) = v4;
LABEL_38:
      *(_QWORD *)(v24 + v23 + 80) = v4;
      v4->Scratch = 0LL;
      v4->ChildRefCount = v25;
      return;
    }
    v29 = *(PNET_BUFFER_LIST **)(v24 + v23 + 80);
    if ( v25 != *((_DWORD *)v29 + 33) || (v25 & 6) != 0 )
    {
      v29[14] = v4;
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
    *v29 = v4;
  }
  else
  {
    v26 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 69);
    v27 = (void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD))*((_QWORD *)NdisFilterHandle + 66);
    v28 = *((_QWORD *)NdisFilterHandle + 67);
    if ( v26->Header.Type == 17 )
      goto LABEL_41;
    if ( (v3 & 1) != 0 || KeGetCurrentIrql() == 2 )
    {
      ndisInvokeIterativeDatapath<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        (int)v4,
        (int)NetBufferLists,
        ReturnFlags,
        v3,
        v26,
        v28,
        (__int64)v27);
      return;
    }
    if ( *(_BYTE *)NdisFilterHandle != 5 )
    {
LABEL_41:
      v27(v28, v4, v3);
      return;
    }
    if ( (int)ndisExpandDataPathStack<3,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v4,
                (int)NetBufferLists,
                ReturnFlags,
                v3,
                v26,
                v28,
                (__int64)v27) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, v4, 0);
  }
}

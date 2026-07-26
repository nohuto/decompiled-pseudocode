/*
 * XREFs of NdisFSendNetBufferListsComplete @ 0x1C0004980
 * Callers:
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00653E0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0066A20 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKPEAX1P6AX10K@Z@Z @ 0x1C003D6AC (--$ndisExpandDataPathStack@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAJPEAU_NET_BUFFER_LIST@@KKKP.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ??$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20K@Z@Z @ 0x1C0064798 (--$ndisInvokeIterativeDatapath@$00$$A6AXPEAXPEAU_NET_BUFFER_LIST@@K@Z@@YAXPEAU_NET_BUFFER_LIST@@.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C006629C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AC0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferListsComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  ULONG v3; // ebp
  PNET_BUFFER_LIST v4; // rsi
  __int64 updated; // rax
  __int64 v7; // rbx
  int v8; // ebp
  struct _NDIS_FILTER_BLOCK *v9; // rbx
  void (__fastcall *v10)(__int64, PNET_BUFFER_LIST, _QWORD); // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  char v13; // di
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  _SLIST_HEADER *Alignment; // r15
  unsigned int *v18; // r11
  unsigned __int64 Region; // rdi
  char *v20; // rcx
  bool v21; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  _QWORD *v25; // rcx
  PNET_BUFFER_LIST *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+58h] [rbp-50h]
  PNET_BUFFER_LIST v32; // [rsp+60h] [rbp-48h]
  char v33; // [rsp+B0h] [rbp+8h] BYREF
  bool v34; // [rsp+C0h] [rbp+18h] BYREF
  BOOL v35; // [rsp+C8h] [rbp+20h]

  v3 = SendCompleteFlags;
  v4 = NetBufferList;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyTxCompletion((ULONG_PTR)NetBufferList, SendCompleteFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(v4);
  }
  updated = *(unsigned int *)ndisNblTrackerMode;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NetBufferList = (PNET_BUFFER_LIST)*((_QWORD *)NdisFilterHandle + 81);
    v12 = *((_QWORD *)NdisFilterHandle + 60);
    v13 = ndisNblTrackerEpoch;
    v32 = NetBufferList;
    v14 = 0LL;
    v35 = (v3 & 1) != 0;
    v15 = 0LL;
    v29 = 0LL;
    v28 = 0LL;
    v31 = 0LL;
    v34 = (v3 & 1) != 0;
    v33 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(
        v4,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)NetBufferList,
        0x94u,
        (void *)v12,
        (v3 & 1) != 0);
      v15 = 0LL;
      v14 = 0LL;
    }
    v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v16 & 1) != 0 )
    {
      *(_QWORD *)&SendCompleteFlags = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      updated = 2LL * (v13 & 1);
      v16 |= updated;
    }
    else
    {
      *(_QWORD *)&SendCompleteFlags = v16;
    }
    v30 = *(_QWORD *)&SendCompleteFlags;
    Alignment = (_SLIST_HEADER *)v4;
    if ( !v4 )
    {
LABEL_37:
      if ( (v16 & 1) != 0 )
        updated = ndisNblTrackerUpdateOwnershipCount(v16, v15 - v14, &v34, &v33);
      goto LABEL_4;
    }
    v18 = &WPP_RECORDER_INITIALIZED;
LABEL_21:
    Region = Alignment[22].Region;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_30:
        v21 = v35;
        v22 = v31 - v15;
        if ( (Region & 1) != 0 && v22 )
        {
          if ( !v35 && !v33 )
          {
            v33 = 1;
            LOBYTE(updated) = KeGetCurrentIrql();
            v15 = v28;
            v18 = &WPP_RECORDER_INITIALIZED;
            *(_QWORD *)&SendCompleteFlags = v30;
            v14 = v29;
            v21 = (_BYTE)updated == 2;
            v34 = (_BYTE)updated == 2;
          }
          v23 = Region;
          v24 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          NetBufferList = (PNET_BUFFER_LIST)(2 * ((v23 >> 1) & 1));
          if ( v21 )
          {
            updated = KeGetPcr()->Prcb.Number << 12;
            v25 = (_QWORD *)(*(_QWORD *)(v24 + 8LL * (_QWORD)NetBufferList + 40) + (unsigned int)updated);
            *v25 += v22;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8LL * (_QWORD)NetBufferList + 48), v22);
          }
          v35 = v34;
        }
        v31 = v15;
        if ( !Alignment )
          goto LABEL_37;
        goto LABEL_21;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_52;
      }
      else if ( !Alignment[7].Region )
      {
        Alignment[7].Region = ndisSourceHandleFromOwner(
                                (unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFDuLL,
                                NetBufferList,
                                *(_QWORD *)&SendCompleteFlags,
                                v14);
      }
      v20 = (char *)Alignment[7].Region;
      if ( v20 )
      {
        NetBufferList = (PNET_BUFFER_LIST)(unsigned __int8)*v20;
        if ( (unsigned __int8)((_BYTE)NetBufferList - 17) <= 1u || (_BYTE)NetBufferList == 5 )
        {
          if ( v20 != *(char **)&SendCompleteFlags || Alignment[1].Region )
          {
            ++v15;
            updated = v16;
            v28 = v15;
          }
          else
          {
            ++v14;
            updated = 24LL;
            ++v15;
            v29 = v14;
            v28 = v15;
          }
          goto LABEL_29;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v18 )
        {
          LOBYTE(NetBufferList) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NetBufferList,
            27,
            12,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)Alignment,
            *v20);
          goto LABEL_51;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v18 )
      {
        LOBYTE(NetBufferList) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)NetBufferList,
          27,
          11,
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
          (char)Alignment);
LABEL_51:
        v15 = v28;
        v18 = &WPP_RECORDER_INITIALIZED;
        *(_QWORD *)&SendCompleteFlags = v30;
        v14 = v29;
      }
LABEL_52:
      updated = v16 | 4;
LABEL_29:
      Alignment[22].Region = updated;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_30;
    }
  }
LABEL_4:
  if ( byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v4);
  LODWORD(updated) = KeGetPcr()->Prcb.Number;
  v7 = *((_QWORD *)NdisFilterHandle + 53) + 96 * updated;
  if ( ((v3 & 1) != 0 || KeGetCurrentIrql() == 2) && *(_BYTE *)(v7 + 40) )
  {
    v8 = v3 | 1;
    if ( !*(_QWORD *)(v7 + 24) )
    {
      *(_QWORD *)(v7 + 24) = v4;
LABEL_11:
      *(_QWORD *)(v7 + 32) = v4;
      v4->Scratch = 0LL;
      v4->ChildRefCount = v8;
      return;
    }
    v26 = *(PNET_BUFFER_LIST **)(v7 + 32);
    if ( v8 != *((_DWORD *)v26 + 33) || (v8 & 6) != 0 )
    {
      v26[14] = v4;
      goto LABEL_11;
    }
    v27 = *v26;
    if ( *v26 )
    {
      do
      {
        v26 = (PNET_BUFFER_LIST *)v27;
        v27 = (_QWORD *)*v27;
      }
      while ( v27 );
    }
    *v26 = v4;
  }
  else
  {
    v9 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)NdisFilterHandle + 61);
    v10 = (void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD))*((_QWORD *)NdisFilterHandle + 58);
    v11 = *((_QWORD *)NdisFilterHandle + 59);
    if ( v9->Header.Type == 17 )
      goto LABEL_14;
    if ( (v3 & 1) != 0 || KeGetCurrentIrql() == 2 )
    {
      ndisInvokeIterativeDatapath<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
        (int)v4,
        (int)NetBufferList,
        SendCompleteFlags,
        v3,
        v9,
        v11,
        (__int64)v10);
      return;
    }
    if ( *(_BYTE *)NdisFilterHandle != 5 )
    {
LABEL_14:
      v10(v11, v4, v3);
      return;
    }
    if ( (int)ndisExpandDataPathStack<1,void (void *,_NET_BUFFER_LIST *,unsigned long)>(
                (int)v4,
                (int)NetBufferList,
                SendCompleteFlags,
                v3,
                v9,
                v11,
                (__int64)v10) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle, v4, 1u);
  }
}

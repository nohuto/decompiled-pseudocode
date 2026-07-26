/*
 * XREFs of ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00052B0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00049F0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0005290 (-ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00A750C (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00A8234 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00AB478 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C00AB6D8 (ndisMSetTimestampOnNblChainTx.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // r13
  struct _NET_BUFFER_LIST *Alignment; // r15
  int PcwDatapathEventMask; // eax
  _NDIS_M_DRIVER_BLOCK *v10; // rcx
  KIRQL v11; // di
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int TimestampFlags; // eax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v15; // cl
  char v16; // si
  unsigned int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r11
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // r10
  unsigned __int64 v22; // rsi
  unsigned int *v23; // r9
  unsigned __int8 *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // r10
  _QWORD *v29; // rcx
  KIRQL CurrentIrql; // al
  _SLIST_HEADER *v31; // rax
  __int64 v32; // rdx
  KIRQL v33; // al
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  char v35; // [rsp+40h] [rbp-88h]
  __int64 v36; // [rsp+48h] [rbp-80h]
  struct _NET_BUFFER_LIST *v37; // [rsp+48h] [rbp-80h]
  __int64 v38; // [rsp+50h] [rbp-78h]
  __int64 v39; // [rsp+58h] [rbp-70h]
  unsigned __int64 v40; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v41; // [rsp+60h] [rbp-68h]
  wchar_t *Buffer; // [rsp+70h] [rbp-58h] BYREF
  __int64 v43; // [rsp+78h] [rbp-50h]
  int v44; // [rsp+80h] [rbp-48h]
  char v45; // [rsp+D0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v46; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v47; // [rsp+E0h] [rbp+18h]

  v47 = a3;
  v46 = (struct _NET_BUFFER_LIST *)a2;
  DriverHandle = a1->DriverHandle;
  Buffer = 0LL;
  v43 = 0LL;
  Alignment = (struct _NET_BUFFER_LIST *)a2;
  v44 = -1;
  PcwDatapathEventMask = a1->PcwDatapathEventMask;
  if ( PcwDatapathEventMask || (v10 = DriverHandle, a1->PcwDatapathCycleMask) )
  {
    LODWORD(v43) = PcwDatapathEventMask;
    v10 = DriverHandle;
    HIDWORD(v43) = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    if ( !Buffer )
    {
      v10 = a1->DriverHandle;
      Alignment = v46;
      Buffer = a1->Reserved4.Buffer;
    }
  }
  v11 = 2;
  SendNetBufferListsHandler = v10->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  if ( a1->MiniportMediaType == NdisMedium802_3
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisMLoopbackNetBufferLists(a1, Alignment, a3, a4, &v46);
    Alignment = v46;
    if ( !v46 )
      return;
    a3 = v47;
  }
  if ( a5 || !a1->SelectiveSuspend )
  {
LABEL_9:
    if ( !*(_DWORD *)ndisNblTrackerMode )
    {
LABEL_10:
      if ( byte_1C00EC210 )
      {
        CompContext = a1->PktMonEdge.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 13) & 1) != 0 )
          {
            PktMonClientNblLogNdis(&a1->PktMonEdge, Alignment, a3, 2LL);
            a3 = v47;
          }
        }
      }
      TimestampFlags = a1->TimestampFlags;
      if ( (TimestampFlags & 2) != 0 )
      {
        a2 = 0LL;
      }
      else
      {
        if ( (TimestampFlags & 4) == 0 )
        {
LABEL_13:
          if ( (v43 & 0x8000000000LL) != 0 )
          {
            if ( (a4 & 1) == 0 )
              v11 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 7u);
            a3 = v47;
          }
          if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
            (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, unsigned __int64, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 8))(
              a1->MiniportAdapterContext,
              Alignment,
              a3,
              a4,
              a1,
              a1->VerifierContext,
              SendNetBufferListsHandler);
          else
            SendNetBufferListsHandler(a1->MiniportAdapterContext, Alignment, a3, a4);
          if ( (v43 & 0x8000000000LL) != 0 )
          {
            ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&Buffer, 7u, 0x14uLL);
            if ( v11 != 2 )
              KeLowerIrql(v11);
          }
          return;
        }
        LOBYTE(a2) = 1;
      }
      ndisMSetTimestampOnNblChainTx(Alignment, a2);
      a3 = v47;
      goto LABEL_13;
    }
    NblTracker = a1->NblTracker;
    v15 = 0;
    v16 = ndisNblTrackerEpoch;
    v17 = a4 & 1;
    v35 = a4 & 1;
    v18 = 0LL;
    v36 = 0LL;
    v19 = 0LL;
    v39 = 0LL;
    v38 = 0LL;
    v45 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, 0x92u, NblTracker, v17);
      a3 = v47;
      v18 = 0LL;
      LOBYTE(v17) = a4 & 1;
      v19 = 0LL;
      v15 = 0;
    }
    v20 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 |= 2LL * (v16 & 1);
    }
    else
    {
      v21 = (unsigned __int8 *)v20;
    }
    v41 = v21;
    if ( Alignment )
    {
LABEL_25:
      v22 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      v23 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        if ( Alignment->NetBufferListInfo[27] != (void *)v22 )
        {
LABEL_34:
          v26 = v39 - v18;
          LOBYTE(v17) = v35;
          v40 = v39 - v18;
          if ( (v22 & 1) == 0 || !v26 )
            goto LABEL_39;
          if ( v35 || v45 )
          {
            a3 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v35 )
              goto LABEL_51;
            goto LABEL_38;
          }
          v45 = 1;
          CurrentIrql = KeGetCurrentIrql();
          v18 = v36;
          v19 = v38;
          if ( CurrentIrql == 2 )
          {
            LOBYTE(v17) = 1;
            v35 = 1;
            a3 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_38:
            v27 = (_QWORD *)(*(_QWORD *)a3 + (KeGetPcr()->Prcb.Number << 12));
            *v27 += v40;
            goto LABEL_39;
          }
          v26 = v40;
          LOBYTE(v17) = 0;
          v35 = 0;
          a3 = 16 * ((v22 >> 1) & 1) + (v22 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_51:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 8), v26);
LABEL_39:
          v21 = v41;
          v39 = v18;
          if ( !Alignment )
          {
            Alignment = v46;
            a3 = v47;
            v15 = v45;
            break;
          }
          goto LABEL_25;
        }
        if ( v22 )
        {
          if ( (v22 & 4) != 0 )
            goto LABEL_69;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, v18, a3, v23);
        }
        SourceHandle = (unsigned __int8 *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          a3 = *SourceHandle;
          if ( (unsigned __int8)(a3 - 17) <= 1u || (_BYTE)a3 == 5 )
          {
            if ( SourceHandle != v21 || Alignment->ParentNetBufferList )
            {
              ++v18;
              v25 = v20;
              v36 = v18;
            }
            else
            {
              ++v19;
              v25 = 24LL;
              ++v18;
              v38 = v19;
              v36 = v18;
            }
            goto LABEL_33;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v23 )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v18,
              27,
              12,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment,
              a3);
            goto LABEL_68;
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v23 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            11,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)Alignment);
LABEL_68:
          v18 = v36;
          v23 = &WPP_RECORDER_INITIALIZED;
          v19 = v38;
          v21 = v41;
        }
LABEL_69:
        v25 = v20 | 4;
LABEL_33:
        Alignment->NetBufferListInfo[27] = (void *)v25;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          goto LABEL_34;
      }
    }
    a2 = v18 - v19;
    v37 = (struct _NET_BUFFER_LIST *)a2;
    if ( (v20 & 1) == 0 || !a2 )
    {
LABEL_47:
      v11 = 2;
      goto LABEL_10;
    }
    if ( (_BYTE)v17 || v15 )
    {
      v28 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v17 )
      {
LABEL_45:
        v29 = (_QWORD *)(*(_QWORD *)v28 + (KeGetPcr()->Prcb.Number << 12));
        *v29 += a2;
LABEL_46:
        Alignment = v46;
        goto LABEL_47;
      }
    }
    else
    {
      v33 = KeGetCurrentIrql();
      a3 = v47;
      a2 = (unsigned __int64)v37;
      if ( v33 == 2 )
      {
        v28 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_45;
      }
      v28 = 16 * ((v20 >> 1) & 1) + (v20 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    a2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8), a2);
    goto LABEL_46;
  }
  v31 = (_SLIST_HEADER *)Alignment;
  v32 = 0LL;
  if ( Alignment )
  {
    do
    {
      v31 = (_SLIST_HEADER *)v31->Alignment;
      v32 = (unsigned int)(v32 + 1);
    }
    while ( v31 );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v32, 52LL, Alignment, a3) )
  {
    a3 = v47;
    goto LABEL_9;
  }
}

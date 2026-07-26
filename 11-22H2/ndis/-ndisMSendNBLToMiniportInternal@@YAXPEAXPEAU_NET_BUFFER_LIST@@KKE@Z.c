/*
 * XREFs of ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00034C0 (NdisSendNetBufferLists.c)
 *     ?ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0003AE0 (-ndisMSendNBLToMiniport@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C003F3E0 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F700 (-ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00B0EA8 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ndisMSetTimestampOnNblChainTx @ 0x1C00B1104 (ndisMSetTimestampOnNblChainTx.c)
 */

void __fastcall ndisMSendNBLToMiniportInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        signed __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct _NET_BUFFER_LIST *Alignment; // r15
  unsigned __int64 DriverHandle; // rdx
  int PcwDatapathEventMask; // ecx
  unsigned int v10; // r13d
  KIRQL v11; // di
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // r12
  unsigned int TimestampFlags; // eax
  wchar_t *Buffer; // rax
  NDIS_NBL_TRACKER_HANDLE__ *NblTracker; // rdi
  char v16; // cl
  char v17; // si
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // r11
  unsigned __int64 v21; // rdi
  char *v22; // r10
  unsigned __int64 v23; // rsi
  unsigned int *v24; // r9
  char *SourceHandle; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // r10
  _QWORD *v30; // rcx
  KIRQL CurrentIrql; // al
  _SLIST_HEADER *v32; // rax
  __int64 v33; // rdx
  KIRQL v34; // al
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax
  char v36; // [rsp+40h] [rbp-88h]
  _NDIS_M_DRIVER_BLOCK *v37; // [rsp+48h] [rbp-80h]
  __int64 v38; // [rsp+50h] [rbp-78h]
  signed __int64 v39; // [rsp+50h] [rbp-78h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  __int64 v41; // [rsp+60h] [rbp-68h]
  unsigned __int64 v42; // [rsp+60h] [rbp-68h]
  char *v43; // [rsp+68h] [rbp-60h]
  wchar_t *v44; // [rsp+70h] [rbp-58h] BYREF
  __int64 v45; // [rsp+78h] [rbp-50h]
  int v46; // [rsp+80h] [rbp-48h]
  void (__fastcall *v47)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // [rsp+88h] [rbp-40h]
  char v48; // [rsp+D0h] [rbp+8h]
  struct _NET_BUFFER_LIST *v49; // [rsp+D8h] [rbp+10h] BYREF

  v49 = a2;
  v46 = -1;
  Alignment = a2;
  v44 = 0LL;
  DriverHandle = (unsigned __int64)a1->DriverHandle;
  PcwDatapathEventMask = a1->PcwDatapathEventMask;
  v37 = (_NDIS_M_DRIVER_BLOCK *)DriverHandle;
  v10 = a3;
  v45 = 0LL;
  if ( PcwDatapathEventMask || a1->PcwDatapathCycleMask )
  {
    HIDWORD(v45) = a1->PcwDatapathCycleMask;
    Buffer = a1->Reserved4.Buffer;
    LODWORD(v45) = PcwDatapathEventMask;
    v44 = Buffer;
    if ( !Buffer )
    {
      Alignment = v49;
      v44 = a1->Reserved4.Buffer;
    }
  }
  v11 = 2;
  SendNetBufferListsHandler = a1->DriverHandle->MiniportDriverCharacteristics.SendNetBufferListsHandler;
  v47 = SendNetBufferListsHandler;
  if ( a1->MiniportMediaType == NdisMedium802_3
    && (a1->LoopbackOpens && (a1->NumOpens > 1u || a1->ReceiveFilters) || (a4 & 2) != 0 || (a1->Flags & 0x4000) != 0) )
  {
    ndisMLoopbackNetBufferLists(a1, Alignment, a3, a4, &v49);
    Alignment = v49;
    if ( !v49 )
      return;
    DriverHandle = (unsigned __int64)v37;
  }
  if ( a5 || !a1->SelectiveSuspend )
  {
LABEL_9:
    if ( !*(_DWORD *)ndisNblTrackerMode )
    {
LABEL_10:
      if ( byte_1C00F5390 )
      {
        CompContext = a1->PktMonEdge.CompContext;
        if ( CompContext )
        {
          if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
          {
            PktMonClientNblLogNdis(&a1->PktMonEdge, Alignment, a3, 2LL);
            DriverHandle = (unsigned __int64)v37;
          }
        }
      }
      TimestampFlags = a1->TimestampFlags;
      if ( (TimestampFlags & 2) != 0 )
      {
        DriverHandle = 0LL;
      }
      else
      {
        if ( (TimestampFlags & 4) == 0 )
        {
LABEL_13:
          if ( (v45 & 0x8000000000LL) != 0 )
          {
            if ( (a4 & 1) == 0 )
              v11 = KfRaiseIrql(2u);
            ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 7u);
            DriverHandle = (unsigned __int64)v37;
          }
          if ( ndisVerifierNdisDispatch && (*(_BYTE *)(DriverHandle + 26) & 2) != 0 )
            (*((void (__fastcall **)(void *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD, struct _NDIS_MINIPORT_BLOCK *, void *, void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int)))ndisVerifierNdisDispatch
             + 8))(
              a1->MiniportAdapterContext,
              Alignment,
              v10,
              a4,
              a1,
              a1->VerifierContext,
              SendNetBufferListsHandler);
          else
            SendNetBufferListsHandler(a1->MiniportAdapterContext, Alignment, v10, a4);
          if ( (v45 & 0x8000000000LL) != 0 )
          {
            ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 7u, 0x14uLL);
            if ( v11 != 2 )
              KeLowerIrql(v11);
          }
          return;
        }
        LOBYTE(DriverHandle) = 1;
      }
      ndisMSetTimestampOnNblChainTx(Alignment, DriverHandle);
      DriverHandle = (unsigned __int64)v37;
      goto LABEL_13;
    }
    NblTracker = a1->NblTracker;
    v16 = 0;
    v17 = ndisNblTrackerEpoch;
    v18 = a4 & 1;
    v36 = a4 & 1;
    v19 = 0LL;
    v38 = 0LL;
    v20 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
    v48 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, 0x92u, NblTracker, v18);
      DriverHandle = (unsigned __int64)v37;
      v19 = 0LL;
      LOBYTE(v18) = a4 & 1;
      v20 = 0LL;
      v16 = 0;
    }
    v21 = (unsigned __int64)NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
    {
      v22 = *(char **)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v21 |= 2LL * (v17 & 1);
    }
    else
    {
      v22 = (char *)v21;
    }
    v43 = v22;
    if ( Alignment )
    {
LABEL_25:
      v23 = (unsigned __int64)Alignment->NetBufferListInfo[27];
      v24 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        if ( Alignment->NetBufferListInfo[27] != (void *)v23 )
        {
LABEL_34:
          v27 = v41 - v19;
          LOBYTE(v18) = v36;
          v42 = v41 - v19;
          if ( (v23 & 1) == 0 || !v27 )
            goto LABEL_39;
          if ( v36 || v48 )
          {
            DriverHandle = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
            if ( !v36 )
              goto LABEL_51;
            goto LABEL_38;
          }
          v48 = 1;
          CurrentIrql = KeGetCurrentIrql();
          v19 = v38;
          v20 = v40;
          if ( CurrentIrql == 2 )
          {
            LOBYTE(v18) = 1;
            v36 = 1;
            DriverHandle = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_38:
            v28 = (_QWORD *)(*(_QWORD *)DriverHandle + (KeGetPcr()->Prcb.Number << 12));
            *v28 += v42;
            goto LABEL_39;
          }
          v27 = v42;
          LOBYTE(v18) = 0;
          v36 = 0;
          DriverHandle = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
LABEL_51:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DriverHandle + 8), v27);
LABEL_39:
          v22 = v43;
          v41 = v19;
          if ( !Alignment )
          {
            Alignment = v49;
            SendNetBufferListsHandler = v47;
            DriverHandle = (unsigned __int64)v37;
            v16 = v48;
            break;
          }
          goto LABEL_25;
        }
        if ( v23 )
        {
          if ( (v23 & 4) != 0 )
            goto LABEL_69;
        }
        else if ( !Alignment->SourceHandle )
        {
          Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(0LL, DriverHandle, v19, v24);
        }
        SourceHandle = (char *)Alignment->SourceHandle;
        if ( SourceHandle )
        {
          DriverHandle = (unsigned __int8)*SourceHandle;
          if ( (unsigned __int8)(DriverHandle - 17) <= 1u || (_BYTE)DriverHandle == 5 )
          {
            if ( SourceHandle != v22 || Alignment->ParentNetBufferList )
            {
              ++v19;
              v26 = v21;
              v38 = v19;
            }
            else
            {
              ++v20;
              v26 = 24LL;
              ++v19;
              v40 = v20;
              v38 = v19;
            }
            goto LABEL_33;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v24 )
          {
            LOBYTE(DriverHandle) = 3;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              DriverHandle,
              27,
              12,
              (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
              (char)Alignment,
              *SourceHandle);
            goto LABEL_68;
          }
        }
        else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v24 )
        {
          LOBYTE(DriverHandle) = 3;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            DriverHandle,
            27,
            11,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)Alignment);
LABEL_68:
          v19 = v38;
          v24 = &WPP_RECORDER_INITIALIZED;
          v20 = v40;
          v22 = v43;
        }
LABEL_69:
        v26 = v21 | 4;
LABEL_33:
        Alignment->NetBufferListInfo[27] = (void *)v26;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        if ( !Alignment )
          goto LABEL_34;
      }
    }
    a3 = v19 - v20;
    v39 = a3;
    if ( (v21 & 1) == 0 || !a3 )
    {
LABEL_47:
      v11 = 2;
      goto LABEL_10;
    }
    if ( (_BYTE)v18 || v16 )
    {
      v29 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      if ( (_BYTE)v18 )
      {
LABEL_45:
        v30 = (_QWORD *)(*(_QWORD *)v29 + (KeGetPcr()->Prcb.Number << 12));
        *v30 += a3;
LABEL_46:
        Alignment = v49;
        goto LABEL_47;
      }
    }
    else
    {
      v34 = KeGetCurrentIrql();
      DriverHandle = (unsigned __int64)v37;
      a3 = v39;
      if ( v34 == 2 )
      {
        v29 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
        goto LABEL_45;
      }
      v29 = 16 * ((v21 >> 1) & 1) + (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 40;
    }
    a3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8), a3);
    goto LABEL_46;
  }
  v32 = (_SLIST_HEADER *)Alignment;
  v33 = 0LL;
  if ( Alignment )
  {
    do
    {
      v32 = (_SLIST_HEADER *)v32->Alignment;
      v33 = (unsigned int)(v33 + 1);
    }
    while ( v32 );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v33, 52LL, Alignment, v10) )
  {
    DriverHandle = (unsigned __int64)v37;
    goto LABEL_9;
  }
}

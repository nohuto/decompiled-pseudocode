/*
 * XREFs of NdisSendNetBufferLists @ 0x1C00049F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0003A10 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00052B0 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025F38 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x1C003A2B2 (-NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0060468 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00663B0 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D80C (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C4FB0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  ULONG v6; // r12d
  KIRQL v7; // r9
  NDIS_PORT_NUMBER v8; // edi
  int v9; // eax
  PNET_BUFFER_LIST v10; // r15
  _QWORD *p_Alignment; // r13
  int v12; // ebx
  int v13; // ecx
  __int64 v14; // rcx
  char v15; // r14
  KIRQL v16; // r13
  char v17; // bl
  char v18; // r10
  unsigned __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // r11
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v25; // r12
  unsigned int *v26; // r9
  _SLIST_HEADER *Alignment; // rsi
  unsigned __int64 Region; // rdi
  char *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  KIRQL CurrentIrql; // al
  unsigned __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int Number; // r10d
  unsigned int v38; // r10d
  __int64 v39; // r11
  int v40; // ecx
  bool v41; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int8 v42; // [rsp+41h] [rbp-48h] BYREF
  KIRQL v43; // [rsp+42h] [rbp-47h]
  __int64 v44; // [rsp+48h] [rbp-41h] BYREF
  __int64 v45; // [rsp+50h] [rbp-39h]
  int v46; // [rsp+58h] [rbp-31h]
  __int64 v47; // [rsp+60h] [rbp-29h]
  __int64 v48; // [rsp+68h] [rbp-21h]
  unsigned int v49; // [rsp+70h] [rbp-19h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v50; // [rsp+78h] [rbp-11h]
  __int64 v51; // [rsp+80h] [rbp-9h]
  __int64 v52; // [rsp+88h] [rbp-1h]
  _BYTE v53[12]; // [rsp+90h] [rbp+7h] BYREF
  char v54; // [rsp+9Ch] [rbp+13h]
  struct _NET_BUFFER_LIST *v55; // [rsp+F0h] [rbp+67h] BYREF
  NDIS_PORT_NUMBER v56; // [rsp+100h] [rbp+77h]
  ULONG v57; // [rsp+108h] [rbp+7Fh]

  v57 = SendFlags;
  v56 = PortNumber;
  v55 = (struct _NET_BUFFER_LIST *)NdisBindingHandle;
  v4 = *((_QWORD *)NdisBindingHandle + 2);
  v5 = 0LL;
  v6 = SendFlags;
  v52 = v4;
  v7 = 2;
  v44 = 0LL;
  v8 = PortNumber;
  v43 = 2;
  v9 = *(_DWORD *)(v4 + 48);
  v10 = NetBufferLists;
  v45 = 0LL;
  p_Alignment = NdisBindingHandle;
  v46 = -1;
  if ( v9 || *(_DWORD *)(v4 + 80) )
  {
    LODWORD(v45) = v9;
    HIDWORD(v45) = *(_DWORD *)(v4 + 80);
    v44 = *(_QWORD *)(v4 + 40);
    if ( !v44 )
      v44 = *(_QWORD *)(v4 + 40);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferLists, PortNumber, v6, (ULONG_PTR)NdisBindingHandle);
    ndisNblPoisonScratchFields(v10);
    v7 = 2;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v18 = ndisNblTrackerEpoch;
    v19 = *(_QWORD *)(v4 + 2560);
    LODWORD(v47) = ndisNblTrackerEpoch;
    v20 = (v6 & 1) != 0;
    v51 = 0LL;
    v22 = p_Alignment[73];
    v21 = 0LL;
    v50 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v22;
    LOBYTE(v22) = 0;
    v49 = v20;
    v48 = 0LL;
    v41 = (v6 & 1) != 0;
    v42 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v10, v50, 0x8Fu, (void *)v19, v20);
      LOBYTE(v20) = v49;
      v7 = 2;
      v22 = v42;
      v21 = 0LL;
      v18 = v47;
    }
    v23 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_QWORD *)&PortNumber = v23;
    if ( (v23 & 1) != 0 )
    {
      v24 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
      v23 |= 2LL * (v18 & 1);
      *(_QWORD *)&PortNumber = *(_QWORD *)(v24 + 24);
    }
    v47 = *(_QWORD *)&PortNumber;
    if ( !v10 )
    {
LABEL_58:
      v31 = v5 - v21;
      if ( (v23 & 1) != 0 && v31 )
      {
        if ( !(_BYTE)v20 && !(_BYTE)v22 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v7 = 2;
          LOBYTE(v20) = CurrentIrql == 2;
          v41 = CurrentIrql == 2;
        }
        v33 = v23 & 0xFFFFFFFFFFFFFFF8uLL;
        v34 = 2 * ((v23 >> 1) & 1);
        if ( (_BYTE)v20 )
        {
          v35 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v35 + *(_QWORD *)(v33 + 8 * v34 + 40)) += v31;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v33 + 8 * v34 + 48), v31);
        }
      }
      goto LABEL_6;
    }
    v25 = v50;
    v26 = &WPP_RECORDER_INITIALIZED;
    Alignment = (_SLIST_HEADER *)v10;
LABEL_44:
    Region = Alignment[22].Region;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_54:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v51 - v5, &v41, &v42);
          *(_QWORD *)&PortNumber = v47;
          v26 = &WPP_RECORDER_INITIALIZED;
        }
        v21 = v48;
        v51 = v5;
        if ( !Alignment )
        {
          LOBYTE(v20) = v41;
          v7 = 2;
          v4 = v52;
          p_Alignment = &v55->Link.Alignment;
          v6 = v57;
          v8 = v56;
          LOBYTE(v22) = v42;
          goto LABEL_58;
        }
        goto LABEL_44;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_71;
      }
      else if ( !Alignment[7].Region )
      {
        Alignment[7].Region = ndisSourceHandleFromOwner(
                                (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFDuLL,
                                v22,
                                *(_QWORD *)&PortNumber,
                                v26);
      }
      v29 = (char *)Alignment[7].Region;
      if ( v29 )
      {
        v22 = (unsigned __int8)*v29;
        if ( (unsigned __int8)(v22 - 17) <= 1u || (_BYTE)v22 == 5 )
        {
          if ( v29 != *(char **)&PortNumber || Alignment[1].Region )
          {
            ++v5;
            v30 = v23;
          }
          else
          {
            ++v21;
            v30 = 24LL;
            v48 = v21;
            ++v5;
          }
          goto LABEL_53;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v26 )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v22,
            27,
            12,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)Alignment,
            *v29);
          goto LABEL_70;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v26 )
      {
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          27,
          11,
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
          (char)Alignment);
LABEL_70:
        *(_QWORD *)&PortNumber = v47;
        v26 = &WPP_RECORDER_INITIALIZED;
        v21 = v48;
      }
LABEL_71:
      v30 = v23 | 4;
LABEL_53:
      Alignment[22].Region = v30;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_54;
    }
  }
LABEL_6:
  if ( byte_1C00EC210 )
  {
    v36 = p_Alignment[125];
    if ( v36 )
    {
      if ( (*(_DWORD *)(v36 + 52) & 1) != 0 )
      {
        PktMonClientNblLogNdis(p_Alignment + 122, v10, *(_QWORD *)&PortNumber, 2LL);
        v7 = 2;
      }
    }
  }
  v12 = v45;
  if ( (v45 & 0x200140) != 0 || (v45 & 0x4000000000LL) != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v43 = v7;
    }
    if ( (v12 & 0x40) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = v45;
      v46 = Number;
      ++*(_QWORD *)(Number * ndisPcwPerCpuDataStride + v44 + ndisPcwOffsetToPerCpuData + 48);
    }
    else
    {
      Number = v46;
    }
    if ( !v7 && (v12 & 0x200000) != 0 )
    {
      if ( Number == -1 )
      {
        Number = KeGetPcr()->Prcb.Number;
        v12 = v45;
        v46 = Number;
      }
      ++*(_QWORD *)(Number * ndisPcwPerCpuDataStride + v44 + ndisPcwOffsetToPerCpuData + 200);
    }
    if ( (v12 & 0x400100) != 0 )
    {
      v39 = NdisNumNbsInNblChain(v10);
      if ( (v12 & 0x100) != 0 )
      {
        if ( v38 == -1 )
        {
          v38 = KeGetPcr()->Prcb.Number;
          v12 = v45;
          v46 = v38;
        }
        *(_QWORD *)(v38 * ndisPcwPerCpuDataStride + v44 + ndisPcwOffsetToPerCpuData + 64) += v39;
      }
      if ( !v7 && (v12 & 0x400000) != 0 )
      {
        if ( v38 == -1 )
        {
          v38 = KeGetPcr()->Prcb.Number;
          v46 = v38;
        }
        *(_QWORD *)(v38 * ndisPcwPerCpuDataStride + v44 + ndisPcwOffsetToPerCpuData + 208) += v39;
      }
    }
    if ( (v45 & 0x4000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 6u);
    }
    else if ( v7 != 2 )
    {
      KeLowerIrql(v7);
    }
  }
  v13 = *(_DWORD *)(v4 + 2668);
  if ( v13 )
  {
    v40 = v13 - 1;
    if ( v40 )
    {
      if ( v40 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, v10, v8, v6);
      else
        ndisMFakeSendNetBufferLists((void *)v4, v10, v8, v6);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, v10, v8, v6, 0);
    }
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 2568);
    v55 = v10;
    if ( *(_BYTE *)v14 == 5
      && (*(_DWORD *)(v14 + 56) & 0x8000) != 0
      && !*(_DWORD *)(v14 + 336)
      && (*(_BYTE *)(v4 + 91) && (*(_WORD *)(v4 + 1820) > 1u || *(_BYTE *)(v4 + 1999))
       || (v6 & 2) != 0
       || (*(_DWORD *)(v4 + 120) & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v14, v10, v8, v6, &v55);
      v10 = v55;
    }
    if ( v10 )
    {
      v15 = 0;
      v16 = 2;
      if ( *(_QWORD *)(v4 + 2552) == v4 )
      {
        v17 = 1;
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v53, (struct _NDIS_MINIPORT_BLOCK *)v4);
        if ( v54 < 0 )
        {
          if ( (v6 & 1) == 0 )
          {
            v16 = KfRaiseIrql(2u);
            v15 = 1;
          }
          ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v53, 7u);
        }
      }
      else
      {
        v17 = 0;
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v53, (struct _NDIS_MINIPORT_BLOCK *)v4);
      }
      ndisInvokeNextSendHandler(
        v10,
        v8,
        v6,
        *(struct _NDIS_OBJECT_HEADER **)(v4 + 2568),
        *(void **)(v4 + 2552),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(v4 + 2648));
      if ( v17 )
      {
        if ( v54 < 0 )
          ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v53, 7u, 0x14uLL);
        if ( v15 && v16 != 2 )
          KeLowerIrql(v16);
      }
    }
  }
  if ( (v45 & 0x4000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v44, 6u, 0x13uLL);
    if ( v43 != 2 )
      KeLowerIrql(v43);
  }
}

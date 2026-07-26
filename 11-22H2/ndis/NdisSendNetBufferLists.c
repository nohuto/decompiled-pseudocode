/*
 * XREFs of NdisSendNetBufferLists @ 0x1C00034C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0003B00 (-ndisMSendNBLToMiniportInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKE@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012E94 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0024FC0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x1C003FE76 (-NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C00653E0 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C006B670 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0072708 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072BAC (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C9BF0 (-ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisSendNetBufferLists(
        NDIS_HANDLE NdisBindingHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  struct _NET_BUFFER_LIST *v4; // rdi
  __int64 v5; // rsi
  KIRQL v7; // r10
  ULONG v8; // r12d
  int v9; // ecx
  NDIS_PORT_NUMBER v10; // r13d
  PNET_BUFFER_LIST v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // ebx
  int v14; // ecx
  struct _NDIS_FILTER_BLOCK *v15; // rcx
  char v16; // si
  KIRQL v17; // r15
  char v18; // bl
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // r11
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v26; // r9
  struct NDIS_NBL_TRACKER_HANDLE__ *v27; // rdi
  _SLIST_HEADER *Alignment; // r13
  unsigned __int64 Region; // rbx
  char v30; // al
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  KIRQL CurrentIrql; // al
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edx
  unsigned int v40; // eax
  unsigned __int64 v41; // r11
  int v42; // ecx
  char v43; // [rsp+30h] [rbp-59h]
  unsigned __int8 v44; // [rsp+40h] [rbp-49h] BYREF
  KIRQL v45; // [rsp+41h] [rbp-48h]
  __int64 v46; // [rsp+48h] [rbp-41h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v47; // [rsp+50h] [rbp-39h]
  __int64 v48; // [rsp+58h] [rbp-31h]
  __int64 v49; // [rsp+60h] [rbp-29h] BYREF
  __int64 v50; // [rsp+68h] [rbp-21h]
  int v51; // [rsp+70h] [rbp-19h]
  struct _NET_BUFFER_LIST *v52; // [rsp+78h] [rbp-11h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v53; // [rsp+80h] [rbp-9h]
  __int64 v54; // [rsp+88h] [rbp-1h]
  _BYTE v55[12]; // [rsp+90h] [rbp+7h] BYREF
  char v56; // [rsp+9Ch] [rbp+13h]
  bool v57; // [rsp+F0h] [rbp+67h] BYREF
  NDIS_PORT_NUMBER v58; // [rsp+100h] [rbp+77h]
  ULONG v59; // [rsp+108h] [rbp+7Fh]

  v59 = SendFlags;
  v58 = PortNumber;
  v4 = (struct _NET_BUFFER_LIST *)*((_QWORD *)NdisBindingHandle + 2);
  v5 = 0LL;
  v52 = v4;
  v7 = 2;
  v49 = 0LL;
  v8 = SendFlags;
  v45 = 2;
  v9 = (int)v4->NdisReserved[0];
  v10 = PortNumber;
  v50 = 0LL;
  v11 = NetBufferLists;
  v51 = -1;
  if ( v9 || LODWORD(v4->ProtocolReserved[2]) )
  {
    HIDWORD(v50) = v4->ProtocolReserved[2];
    v19 = *((_QWORD *)&v4->NdisPoolHandle + 1);
    LODWORD(v50) = v9;
    v49 = v19;
    if ( !v19 )
      v49 = *((_QWORD *)&v4->NdisPoolHandle + 1);
  }
  if ( (*((_DWORD *)NdisBindingHandle + 56) & 1) != 0 )
  {
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferLists, PortNumber, SendFlags, (ULONG_PTR)NdisBindingHandle);
    ndisNblPoisonScratchFields(v11);
    v7 = 2;
  }
  v12 = 1LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v22 = *((_QWORD *)NdisBindingHandle + 73);
    *(_QWORD *)&PortNumber = ndisNblTrackerEpoch;
    v20 = (v8 & 1) != 0;
    v53 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v22;
    v21 = (unsigned __int64)v4[6].NetBufferListInfo[14];
    LOBYTE(v22) = 0;
    v46 = v21;
    v23 = 0LL;
    LODWORD(v47) = ndisNblTrackerEpoch;
    v54 = 0LL;
    v48 = 0LL;
    v57 = (v8 & 1) != 0;
    v44 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v11, v53, 0x8Fu, (void *)v21, v20);
      v21 = v46;
      v7 = 2;
      v22 = v44;
      v23 = 0LL;
      *(_QWORD *)&PortNumber = (unsigned int)v47;
    }
    v24 = v21 & 0xFFFFFFFFFFFFFFFDuLL;
    v46 = v24;
    v25 = v24;
    if ( (v24 & 1) != 0 )
    {
      v26 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)((v24 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v24 |= 2LL * (PortNumber & 1);
      v46 = v25 | (2LL * (PortNumber & 1));
    }
    else
    {
      v26 = (struct NDIS_NBL_TRACKER_HANDLE__ *)v24;
    }
    v47 = v26;
    if ( !v11 )
    {
LABEL_58:
      v32 = v5 - v23;
      if ( (v24 & 1) != 0 && v32 )
      {
        if ( !(_BYTE)v20 && !(_BYTE)v22 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v24 = v46;
          v7 = 2;
          LOBYTE(v20) = CurrentIrql == 2;
          v57 = CurrentIrql == 2;
        }
        v34 = v24 & 0xFFFFFFFFFFFFFFF8uLL;
        v35 = 2 * ((v24 >> 1) & 1);
        if ( (_BYTE)v20 )
        {
          v36 = KeGetPcr()->Prcb.Number << 12;
          *(_QWORD *)(v36 + *(_QWORD *)(v34 + 8 * v35 + 40)) += v32;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 8 * v35 + 48), v32);
        }
      }
      v12 = 1LL;
      goto LABEL_6;
    }
    v27 = v53;
    *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
    Alignment = (_SLIST_HEADER *)v11;
LABEL_44:
    Region = Alignment[22].Region;
    while ( 1 )
    {
      if ( Alignment[22].Region != Region )
      {
LABEL_54:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v54 - v5, &v57, &v44);
          v24 = v46;
          *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
          v26 = v47;
        }
        v23 = v48;
        v54 = v5;
        if ( !Alignment )
        {
          LOBYTE(v20) = v57;
          v7 = 2;
          v4 = v52;
          v8 = v59;
          v10 = v58;
          LOBYTE(v22) = v44;
          goto LABEL_58;
        }
        goto LABEL_44;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_73;
      }
      else if ( !Alignment[7].Region )
      {
        v37 = ndisSourceHandleFromOwner((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFDuLL, v22, *(_QWORD *)&PortNumber, v26);
        v24 = v46;
        Alignment[7].Region = v37;
      }
      v22 = Alignment[7].Region;
      if ( v22 )
      {
        v30 = *(_BYTE *)v22;
        if ( *(_BYTE *)v22 == 18 || v30 == 17 || v30 == 5 )
        {
          if ( (struct NDIS_NBL_TRACKER_HANDLE__ *)v22 != v26 || Alignment[1].Region )
          {
            ++v5;
            v31 = v24;
          }
          else
          {
            ++v23;
            v31 = 24LL;
            v48 = v23;
            ++v5;
          }
          goto LABEL_53;
        }
        if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != *(_QWORD *)&PortNumber )
        {
          v43 = *(_BYTE *)v22;
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v22,
            27,
            12,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)Alignment,
            v43);
          goto LABEL_72;
        }
      }
      else if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != *(_QWORD *)&PortNumber )
      {
        LOBYTE(v22) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          27,
          11,
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
          (char)Alignment);
LABEL_72:
        v24 = v46;
        *(_QWORD *)&PortNumber = &WPP_RECORDER_INITIALIZED;
        v26 = v47;
        v23 = v48;
      }
LABEL_73:
      v31 = v24 | 4;
LABEL_53:
      Alignment[22].Region = v31;
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      if ( !Alignment )
        goto LABEL_54;
    }
  }
LABEL_6:
  if ( byte_1C00F5390 )
  {
    v38 = *((_QWORD *)NdisBindingHandle + 126);
    if ( v38 )
    {
      if ( (*(_DWORD *)(v38 + 56) & 1) != 0 )
      {
        PktMonClientNblLogNdis((char *)NdisBindingHandle + 984, v11, *(_QWORD *)&PortNumber, 2LL);
        v7 = 2;
        v12 = 1LL;
      }
    }
  }
  v13 = v50;
  if ( (v50 & 0x200140) != 0 || (v50 & 0x4000000000LL) != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v45 = v7;
      v12 = 1LL;
    }
    if ( (v13 & 0x40) != 0 )
    {
      ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v49, 6uLL, 1uLL);
      v13 = v50;
      v12 = (unsigned int)(v39 - 5);
    }
    if ( !v7 && (v13 & 0x200000) != 0 )
    {
      ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v49, 0x19uLL, v12);
      v13 = v50;
    }
    if ( (v13 & 0x400100) != 0 )
    {
      v40 = NdisNumNbsInNblChain(v11);
      v41 = v40;
      if ( (v13 & 0x100) != 0 )
      {
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v49, 8uLL, v40);
        v13 = v50;
      }
      if ( !v7 && (v13 & 0x400000) != 0 )
        ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v49, 0x1AuLL, v41);
    }
    if ( (v50 & 0x4000000000LL) != 0 )
    {
      ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v49, 6u);
    }
    else if ( v7 != 2 )
    {
      KeLowerIrql(v7);
    }
  }
  v14 = HIDWORD(v4[6].NetBufferListInfo[27]);
  if ( v14 )
  {
    v42 = v14 - 1;
    if ( v42 )
    {
      if ( v42 == 1 )
        ndisMSendNetBufferListsToPackets((struct _NDIS_MINIPORT_BLOCK *)v4, v11, v10, v8);
      else
        ndisMFakeSendNetBufferLists(v4, v11, v10, v8);
    }
    else
    {
      ndisMSendNBLToMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)v4, v11, v10, v8, 0);
    }
  }
  else
  {
    v15 = (struct _NDIS_FILTER_BLOCK *)v4[6].NetBufferListInfo[15];
    v52 = v11;
    if ( v15->Header.Type == 5
      && (v15->Flags & 0x8000) != 0
      && v15->MediaType == NdisMedium802_3
      && (BYTE3(v4->ProtocolReserved[3])
       && (WORD2(v4[4].NetBufferListInfo[17]) > 1u || HIBYTE(v4[5].ProtocolReserved[1]))
       || (v8 & 2) != 0
       || ((__int64)v4->SourceHandle & 0x4000) != 0) )
    {
      ndisFLoopbackNetBufferLists(v15, v11, v10, v8, &v52);
      v11 = v52;
    }
    if ( v11 )
    {
      v16 = 0;
      v17 = 2;
      if ( v4[6].NetBufferListInfo[13] == v4 )
      {
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v55, (struct _NDIS_MINIPORT_BLOCK *)v4);
        v18 = 1;
        if ( v56 < 0 )
        {
          if ( (v8 & 1) == 0 )
          {
            v17 = KfRaiseIrql(2u);
            v16 = 1;
          }
          ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v55, 7u);
        }
      }
      else
      {
        v18 = 0;
        NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v55, (struct _NDIS_MINIPORT_BLOCK *)v4);
      }
      ndisInvokeNextSendHandler(
        v11,
        v10,
        v8,
        (struct _NDIS_OBJECT_HEADER *)v4[6].NetBufferListInfo[15],
        v4[6].NetBufferListInfo[13],
        (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v4[6].NetBufferListInfo[25]);
      if ( v18 )
      {
        if ( v56 < 0 )
          ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v55, 7u, 0x14uLL);
        if ( v16 && v17 != 2 )
          KeLowerIrql(v17);
      }
    }
  }
  if ( (v50 & 0x4000000000LL) != 0 )
  {
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v49, 6u, 0x13uLL);
    if ( v45 != 2 )
      KeLowerIrql(v45);
  }
}

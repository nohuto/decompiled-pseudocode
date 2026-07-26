/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0003EC0
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C006B670 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0008318 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C001320C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00136A4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0029EB0 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C003DB54 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C003DBAA (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x1C003FE76 (-NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C00402D8 (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0071D48 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0092358 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v5; // edx
  struct _NDIS_OPEN_BLOCK *v6; // r12
  struct _NET_BUFFER_LIST *v7; // r13
  struct _NDIS_OPEN_BLOCK *v8; // r14
  struct _NET_BUFFER_LIST *v9; // r15
  struct _NET_BUFFER_LIST *v10; // r8
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  __int64 v13; // rax
  unsigned __int64 NblTracker; // rdi
  char v15; // r15
  unsigned int v16; // esi
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int8 *v21; // r11
  _SLIST_HEADER *v22; // r15
  unsigned int *v23; // r10
  unsigned __int64 Region; // rsi
  unsigned __int8 *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdi
  __int64 v30; // r8
  _QWORD *v31; // rcx
  KIRQL v32; // al
  unsigned int v33; // eax
  KIRQL CurrentIrql; // al
  __int64 v35; // [rsp+48h] [rbp-39h]
  unsigned __int64 v36; // [rsp+48h] [rbp-39h]
  __int64 v37; // [rsp+50h] [rbp-31h]
  unsigned __int8 *v38; // [rsp+58h] [rbp-29h]
  __int64 v39; // [rsp+60h] [rbp-21h]
  struct _NDIS_OPEN_BLOCK *v40; // [rsp+68h] [rbp-19h]
  struct _NET_BUFFER_LIST *v41; // [rsp+70h] [rbp-11h]
  __int64 v42; // [rsp+78h] [rbp-9h] BYREF
  __int64 v43; // [rsp+80h] [rbp-1h]
  int v44; // [rsp+88h] [rbp+7h]
  struct _NET_BUFFER_LIST *v45; // [rsp+E8h] [rbp+67h] BYREF
  bool v46; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v47; // [rsp+F8h] [rbp+77h]
  KIRQL v48; // [rsp+100h] [rbp+7Fh]

  v47 = a3;
  v3 = a3;
  v5 = a1[12];
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  v10 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = -1;
  if ( v5 || a1[20] )
  {
    HIDWORD(v43) = a1[20];
    v13 = *((_QWORD *)a1 + 5);
    LODWORD(v43) = v5;
    v42 = v13;
    if ( !v13 )
      v42 = *((_QWORD *)a1 + 5);
  }
  v48 = 2;
  if ( (v43 & 0x280) != 0 || (v43 & 0x20000000000LL) != 0 )
  {
    if ( (v3 & 1) == 0 )
    {
      v32 = KfRaiseIrql(2u);
      v3 = v47;
      v10 = 0LL;
      v48 = v32;
    }
    if ( (v43 & 0x200) != 0 )
    {
      v33 = NdisNumNbsInNblChain(a2);
      ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v42, 9uLL, v33);
      v10 = 0LL;
    }
  }
  if ( a2 )
  {
    do
    {
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)a2->SourceHandle;
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      a2->Link.Alignment = 0LL;
      if ( SourceHandle == v8 )
      {
        v9->Link.Alignment = (unsigned __int64)a2;
        v9 = a2;
      }
      else if ( SourceHandle == v6 )
      {
        v10->Link.Alignment = (unsigned __int64)a2;
        v10 = a2;
        v45 = a2;
      }
      else if ( v8 )
      {
        if ( v6 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, a2, v3, (struct NDIS_PCW_CONTEXT *)&v42);
          v3 = v47;
          v10 = v45;
        }
        else
        {
          v6 = SourceHandle;
          v41 = a2;
          v10 = a2;
          v45 = a2;
        }
      }
      else
      {
        v8 = SourceHandle;
        v7 = a2;
        v9 = a2;
      }
      a2 = Alignment;
    }
    while ( Alignment );
    v40 = v6;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v8->NblTracker;
    v15 = ndisNblTrackerEpoch;
    v16 = (v3 & 1) != 0;
    v35 = 0LL;
    v17 = 0;
    v39 = 0LL;
    v37 = 0LL;
    v18 = 0LL;
    v46 = (v3 & 1) != 0;
    v19 = 0LL;
    LOBYTE(v45) = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v7, 0LL, 0x95u, (void *)NblTracker, v16);
      v3 = v47;
      v18 = 0LL;
      v17 = (char)v45;
      v19 = 0LL;
    }
    v20 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
    {
      v21 = *(unsigned __int8 **)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v20 |= 2LL * (v15 & 1);
    }
    else
    {
      v21 = (unsigned __int8 *)v20;
    }
    v38 = v21;
    v22 = (_SLIST_HEADER *)v7;
    if ( !v7 )
    {
LABEL_48:
      v27 = v18 - v19;
      v36 = v27;
      if ( (v20 & 1) != 0 && v27 )
      {
        if ( !(_BYTE)v16 && !v17 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v3 = v47;
          v27 = v36;
          LOBYTE(v16) = CurrentIrql == 2;
          v46 = CurrentIrql == 2;
        }
        v28 = v20;
        v29 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
        v30 = 2 * ((v28 >> 1) & 1);
        if ( (_BYTE)v16 )
        {
          v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v31 += v27;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v27);
        }
      }
      goto LABEL_11;
    }
    v23 = &WPP_RECORDER_INITIALIZED;
LABEL_34:
    Region = v22[22].Region;
    while ( 1 )
    {
      if ( v22[22].Region != Region )
      {
LABEL_44:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v39 - v18, &v46, &v45);
          v18 = v35;
          v23 = &WPP_RECORDER_INITIALIZED;
          v19 = v37;
          v21 = v38;
        }
        v39 = v18;
        if ( !v22 )
        {
          LOBYTE(v16) = v46;
          v6 = v40;
          v3 = v47;
          v17 = (char)v45;
          goto LABEL_48;
        }
        goto LABEL_34;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_72;
      }
      else if ( !v22[7].Region )
      {
        v22[7].Region = ndisSourceHandleFromOwner(0LL, v18, v10, v19);
      }
      v25 = (unsigned __int8 *)v22[7].Region;
      if ( v25 )
      {
        v10 = (struct _NET_BUFFER_LIST *)*v25;
        if ( (unsigned __int8)((_BYTE)v10 - 17) <= 1u || (_BYTE)v10 == 5 )
        {
          if ( v25 != v21 || v22[1].Region )
          {
            ++v18;
            v26 = v20;
            v35 = v18;
          }
          else
          {
            ++v19;
            v26 = 24LL;
            ++v18;
            v37 = v19;
            v35 = v18;
          }
          goto LABEL_43;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v23 )
        {
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v18,
            27,
            12,
            (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
            (char)v22,
            (char)v10);
          goto LABEL_69;
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
          (struct _GUID *)&WPP_1f4f9304c13d30d166c4c68f5fb6e586_Traceguids,
          (char)v22);
LABEL_69:
        v18 = v35;
        v23 = &WPP_RECORDER_INITIALIZED;
        v19 = v37;
        v21 = v38;
      }
LABEL_72:
      v26 = v20 | 4;
LABEL_43:
      v22[22].Region = v26;
      v22 = (_SLIST_HEADER *)v22->Alignment;
      if ( !v22 )
        goto LABEL_44;
    }
  }
LABEL_11:
  if ( byte_1C00F5390 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
  if ( (v43 & 0x80u) != 0LL )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)&v42, 7uLL, 1uLL);
  if ( (v43 & 0x20000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v42, 9u);
  v8->ProtSendNetBufferListsComplete(v8->SendCompleteNetBufferListsContext, v7, v3);
  if ( (v43 & 0x20000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v42, 9u, 0x16uLL);
  if ( v6 )
    ndisMSendCompleteNetBufferListsToOpen(v6, v41, v47, (struct NDIS_PCW_CONTEXT *)&v42);
  if ( v48 != 2 )
    KeLowerIrql(v48);
}

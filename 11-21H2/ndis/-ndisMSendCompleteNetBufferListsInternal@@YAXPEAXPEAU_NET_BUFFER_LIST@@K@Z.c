/*
 * XREFs of ?ndisMSendCompleteNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0002170
 * Callers:
 *     ?ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00663B0 (-ndisMFakeSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C00024F4 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0013A8C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z @ 0x1C003A2B2 (-NdisNumNbsInNblChain@@YAKPEBU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C003AC7C (-ndisMarkNetBufferListCorrelationIdsAsUsed@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C008C874 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C008C8CC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(_DWORD *a1, struct _NET_BUFFER_LIST *a2, __int64 a3)
{
  unsigned int v3; // r10d
  struct _NDIS_OPEN_BLOCK *v5; // r12
  struct _NET_BUFFER_LIST *v6; // r13
  struct _NDIS_OPEN_BLOCK *v7; // r14
  int v8; // eax
  struct _NET_BUFFER_LIST *v9; // r15
  struct _NET_BUFFER_LIST *v10; // rdx
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned __int64 NblTracker; // rdi
  char v14; // r15
  unsigned int v15; // esi
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  unsigned __int8 *v20; // r11
  _SLIST_HEADER *v21; // r15
  unsigned int *v22; // r10
  unsigned __int64 Region; // rsi
  unsigned __int8 *v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdi
  __int64 v29; // r8
  _QWORD *v30; // rcx
  KIRQL v31; // al
  unsigned int v32; // eax
  KIRQL CurrentIrql; // al
  __int64 v34; // [rsp+48h] [rbp-39h]
  unsigned __int64 v35; // [rsp+48h] [rbp-39h]
  __int64 v36; // [rsp+50h] [rbp-31h]
  unsigned __int8 *v37; // [rsp+58h] [rbp-29h]
  __int64 v38; // [rsp+60h] [rbp-21h]
  struct _NDIS_OPEN_BLOCK *v39; // [rsp+68h] [rbp-19h]
  struct _NET_BUFFER_LIST *v40; // [rsp+70h] [rbp-11h]
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  __int64 v42; // [rsp+80h] [rbp-1h]
  unsigned int Number; // [rsp+88h] [rbp+7h]
  struct _NET_BUFFER_LIST *v44; // [rsp+E8h] [rbp+67h] BYREF
  bool v45; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v46; // [rsp+F8h] [rbp+77h]
  KIRQL v47; // [rsp+100h] [rbp+7Fh]

  v46 = a3;
  v3 = a3;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a1[12];
  v9 = 0LL;
  v39 = 0LL;
  v10 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  Number = -1;
  if ( v8 || a1[20] )
  {
    LODWORD(v42) = v8;
    HIDWORD(v42) = a1[20];
    v41 = *((_QWORD *)a1 + 5);
    if ( !v41 )
      v41 = *((_QWORD *)a1 + 5);
  }
  v47 = 2;
  if ( (v42 & 0x280) != 0 || (v42 & 0x20000000000LL) != 0 )
  {
    if ( (a3 & 1) == 0 )
    {
      v31 = KfRaiseIrql(2u);
      v3 = v46;
      v10 = 0LL;
      v47 = v31;
    }
    if ( (v42 & 0x200) != 0 )
    {
      v32 = NdisNumNbsInNblChain(a2);
      a3 = ndisPcwOffsetToPerCpuData;
      Number = KeGetPcr()->Prcb.Number;
      *(_QWORD *)(ndisPcwOffsetToPerCpuData + v41 + ndisPcwPerCpuDataStride * Number + 72) += v32;
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
      if ( SourceHandle == v7 )
      {
        v9->Link.Alignment = (unsigned __int64)a2;
        v9 = a2;
      }
      else if ( SourceHandle == v5 )
      {
        v10->Link.Alignment = (unsigned __int64)a2;
        v10 = a2;
        v44 = a2;
      }
      else if ( v7 )
      {
        v10 = a2;
        if ( v5 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, a2, v3, (struct NDIS_PCW_CONTEXT *)&v41);
          v3 = v46;
          v10 = v44;
        }
        else
        {
          v5 = SourceHandle;
          v40 = a2;
          v44 = a2;
        }
      }
      else
      {
        v7 = SourceHandle;
        v6 = a2;
        v9 = a2;
      }
      a2 = Alignment;
    }
    while ( Alignment );
    v39 = v5;
  }
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v7->NblTracker;
    v14 = ndisNblTrackerEpoch;
    v34 = 0LL;
    v15 = (v3 & 1) != 0;
    v38 = 0LL;
    v16 = 0;
    v36 = 0LL;
    v45 = (v3 & 1) != 0;
    v17 = 0LL;
    LOBYTE(v44) = 0;
    v18 = 0LL;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v6, 0LL, 0x95u, (void *)NblTracker, v15);
      v3 = v46;
      v17 = 0LL;
      v16 = (char)v44;
      v18 = 0LL;
    }
    v19 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      v20 = *(unsigned __int8 **)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v19 |= 2LL * (v14 & 1);
    }
    else
    {
      v20 = (unsigned __int8 *)v19;
    }
    v37 = v20;
    v21 = (_SLIST_HEADER *)v6;
    if ( !v6 )
    {
LABEL_47:
      v26 = v17 - v18;
      v35 = v26;
      if ( (v19 & 1) != 0 && v26 )
      {
        if ( !(_BYTE)v15 && !v16 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v3 = v46;
          v26 = v35;
          LOBYTE(v15) = CurrentIrql == 2;
          v45 = CurrentIrql == 2;
        }
        v27 = v19;
        v28 = v19 & 0xFFFFFFFFFFFFFFF8uLL;
        v29 = 2 * ((v27 >> 1) & 1);
        if ( (_BYTE)v15 )
        {
          v30 = (_QWORD *)(*(_QWORD *)(v28 + 8 * v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
          *v30 += v26;
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8 * v29 + 48), v26);
        }
      }
      goto LABEL_11;
    }
    v22 = &WPP_RECORDER_INITIALIZED;
LABEL_33:
    Region = v21[22].Region;
    while ( 1 )
    {
      if ( v21[22].Region != Region )
      {
LABEL_43:
        if ( (Region & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(Region, v38 - v17, &v45, &v44);
          v17 = v34;
          v22 = &WPP_RECORDER_INITIALIZED;
          v18 = v36;
          v20 = v37;
        }
        v38 = v17;
        if ( !v21 )
        {
          LOBYTE(v15) = v45;
          v5 = v39;
          v3 = v46;
          v16 = (char)v44;
          goto LABEL_47;
        }
        goto LABEL_33;
      }
      if ( Region )
      {
        if ( (Region & 4) != 0 )
          goto LABEL_70;
      }
      else if ( !v21[7].Region )
      {
        v21[7].Region = ndisSourceHandleFromOwner(0LL, v17, a3, v18);
      }
      v24 = (unsigned __int8 *)v21[7].Region;
      if ( v24 )
      {
        a3 = *v24;
        if ( (unsigned __int8)(a3 - 17) <= 1u || (_BYTE)a3 == 5 )
        {
          if ( v24 != v20 || v21[1].Region )
          {
            ++v17;
            v25 = v19;
            v34 = v17;
          }
          else
          {
            ++v18;
            v25 = 24LL;
            ++v17;
            v36 = v18;
            v34 = v17;
          }
          goto LABEL_42;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v22 )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            27,
            12,
            (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
            (char)v21,
            a3);
          goto LABEL_67;
        }
      }
      else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v22 )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          27,
          11,
          (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
          (char)v21);
LABEL_67:
        v17 = v34;
        v22 = &WPP_RECORDER_INITIALIZED;
        v18 = v36;
        v20 = v37;
      }
LABEL_70:
      v25 = v19 | 4;
LABEL_42:
      v21[22].Region = v25;
      v21 = (_SLIST_HEADER *)v21->Alignment;
      if ( !v21 )
        goto LABEL_43;
    }
  }
LABEL_11:
  if ( byte_1C00EC210 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(v6);
  if ( (v42 & 0x80u) != 0LL )
  {
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v41 + Number * ndisPcwPerCpuDataStride + 56);
  }
  if ( (v42 & 0x20000000000LL) != 0 )
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)&v41, 9u);
  v7->ProtSendNetBufferListsComplete(v7->SendCompleteNetBufferListsContext, v6, v3);
  if ( (v42 & 0x20000000000LL) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)&v41, 9u, 0x16uLL);
  if ( v5 )
    ndisMSendCompleteNetBufferListsToOpen(v5, v40, v46, (struct NDIS_PCW_CONTEXT *)&v41);
  if ( v47 != 2 )
    KeLowerIrql(v47);
}

/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C0007AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0013B1C (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0025F38 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C003ADD4 (PktMonClientNblLogNdis.c)
 *     ?ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0060468 (-ndisFLoopbackNetBufferLists@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C006C9A0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x1C006D368 (-ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D80C (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  ULONG v4; // ebp
  NDIS_PORT_NUMBER v5; // edi
  struct _NET_BUFFER_LIST *v6; // r14
  char *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char v11; // r13
  char v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  _SLIST_HEADER *Alignment; // r12
  unsigned int *v17; // r10
  unsigned __int64 Region; // rdi
  __int64 v19; // rbp
  char *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  void (*v32)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rbx
  int v36; // ebp
  struct _NET_BUFFER_LIST *v37; // rax
  KIRQL CurrentIrql; // al
  __int64 v39; // rax
  struct _NET_BUFFER_LIST **p_Next; // rcx
  struct _NET_BUFFER_LIST *i; // rax
  char v42; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  unsigned __int64 v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  struct _NET_BUFFER_LIST *v48; // [rsp+C0h] [rbp+8h] BYREF
  PNET_BUFFER_LIST v49; // [rsp+C8h] [rbp+10h]
  NDIS_PORT_NUMBER v50; // [rsp+D0h] [rbp+18h]
  ULONG v51; // [rsp+D8h] [rbp+20h]

  v51 = SendFlags;
  v50 = PortNumber;
  v49 = NetBufferList;
  v48 = (struct _NET_BUFFER_LIST *)NdisFilterHandle;
  v4 = SendFlags;
  v5 = PortNumber;
  v6 = NetBufferList;
  v7 = (char *)NdisFilterHandle;
  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
  {
    ndisNblVerifyTxIndication((ULONG_PTR)NetBufferList, PortNumber, SendFlags, (ULONG_PTR)NdisFilterHandle);
    ndisNblPoisonScratchFields(v6);
  }
  v8 = 1LL;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v9 = 0LL;
    v46 = 0LL;
    v10 = *((_QWORD *)v7 + 56);
    v11 = v4 & 1;
    v12 = ndisNblTrackerEpoch;
    v13 = 0LL;
    v47 = *((_QWORD *)v7 + 81);
    v43 = 0LL;
    v42 = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(v6, *((struct NDIS_NBL_TRACKER_HANDLE__ **)v7 + 81), 0x90u, (void *)v10, v4 & 1);
      v8 = 1LL;
    }
    v14 = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 1) != 0 )
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
      v14 |= 2LL * (v12 & 1);
      *(_QWORD *)&PortNumber = *(_QWORD *)(v15 + 24);
    }
    else
    {
      *(_QWORD *)&PortNumber = v14;
    }
    v45 = *(_QWORD *)&PortNumber;
    Alignment = (_SLIST_HEADER *)v6;
    if ( v6 )
    {
      v17 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        Region = Alignment[22].Region;
        v19 = v46;
        while ( Alignment[22].Region == Region )
        {
          if ( Region )
          {
            if ( (Region & 4) != 0 )
              goto LABEL_55;
          }
          else if ( !Alignment[7].Region )
          {
            Alignment[7].Region = ndisSourceHandleFromOwner(v47 & 0xFFFFFFFFFFFFFFFDuLL, v9, *(_QWORD *)&PortNumber, v8);
          }
          v20 = (char *)Alignment[7].Region;
          if ( v20 )
          {
            v9 = (unsigned __int8)*v20;
            if ( (unsigned __int8)(v9 - 17) <= (unsigned __int8)v8 || (_BYTE)v9 == 5 )
            {
              if ( v20 != *(char **)&PortNumber || Alignment[1].Region )
              {
                v13 += v8;
                v21 = v14;
              }
              else
              {
                v19 += v8;
                v21 = 24LL;
                v13 += v8;
              }
              goto LABEL_18;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
            {
              LOBYTE(v9) = 3;
              WPP_RECORDER_SF_qD(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v9,
                27,
                12,
                (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
                (char)Alignment,
                *v20);
              goto LABEL_54;
            }
          }
          else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != v17 )
          {
            LOBYTE(v9) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v9,
              27,
              11,
              (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
              (char)Alignment);
LABEL_54:
            v8 = 1LL;
            v17 = &WPP_RECORDER_INITIALIZED;
          }
LABEL_55:
          *(_QWORD *)&PortNumber = v45;
          v21 = v14 | 4;
LABEL_18:
          Alignment[22].Region = v21;
          Alignment = (_SLIST_HEADER *)Alignment->Alignment;
          if ( !Alignment )
            break;
        }
        v22 = v43 - v13;
        v46 = v19;
        v44 = v43 - v13;
        if ( ((unsigned __int8)Region & (unsigned __int8)v8) != 0 && v22 )
        {
          if ( !v11 && !v42 )
          {
            v42 = v8;
            v23 = KeGetCurrentIrql() == 2;
            v8 = 1LL;
            v22 = v44;
            v11 = v23;
          }
          v24 = Region;
          v25 = Region & 0xFFFFFFFFFFFFFFF8uLL;
          v9 = 2 * (v8 & (v24 >> 1));
          if ( v11 )
          {
            v26 = (_QWORD *)(*(_QWORD *)(v25 + 8 * v9 + 40) + (KeGetPcr()->Prcb.Number << 12));
            v9 = v44;
            *v26 += v44;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8 * v9 + 48), v22);
          }
        }
        *(_QWORD *)&PortNumber = v45;
        v17 = &WPP_RECORDER_INITIALIZED;
        v43 = v13;
        if ( !Alignment )
        {
          v7 = (char *)v48;
          v4 = v51;
          v6 = v49;
          v5 = v50;
          break;
        }
      }
    }
    v27 = v13 - v46;
    if ( ((unsigned __int8)v14 & (unsigned __int8)v8) != 0 && v27 )
    {
      if ( !v11 && !v42 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v8 = 1LL;
        v11 = CurrentIrql == 2;
      }
      v28 = v14;
      v29 = v14 & 0xFFFFFFFFFFFFFFF8uLL;
      v30 = 2 * (v8 & (v28 >> 1));
      if ( v11 )
      {
        v31 = (_QWORD *)(*(_QWORD *)(v29 + 8 * v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v27;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 8 * v30 + 48), v27);
      }
    }
  }
  if ( byte_1C00EC210 )
  {
    v39 = *((_QWORD *)v7 + 108);
    if ( v39 )
    {
      if ( ((unsigned __int8)*(_DWORD *)(v39 + 52) & (unsigned __int8)v8) != 0 )
      {
        PktMonClientNblLogNdis(v7 + 840, v6, *(_QWORD *)&PortNumber, 2LL);
        LOWORD(v8) = 1;
      }
    }
  }
  v32 = (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))*((_QWORD *)v7 + 78);
  if ( v32 != ndisFilterSendNetBufferLists )
  {
    ((void (__fastcall *)(char *, struct _NET_BUFFER_LIST *, _QWORD, _QWORD))v32)(v7, v6, v5, v4);
    return;
  }
  v33 = *((_QWORD *)v7 + 57);
  v34 = *((_QWORD *)v7 + 4);
  v48 = v6;
  if ( *(_BYTE *)v33 == 5
    && (*(_DWORD *)(v33 + 56) & 0x8000) != 0
    && !*(_DWORD *)(v33 + 336)
    && (*(_BYTE *)(v34 + 91) && (*(_WORD *)(v34 + 1820) > (unsigned __int16)v8 || *(_BYTE *)(v34 + 1999))
     || (v4 & 2) != 0
     || (*(_DWORD *)(v34 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists((struct _NDIS_FILTER_BLOCK *)v33, v6, v5, v4, &v48);
    v6 = v48;
  }
  if ( v6 )
  {
    LODWORD(v32) = KeGetPcr()->Prcb.Number;
    v35 = *((_QWORD *)v7 + 53) + 96LL * (_QWORD)v32;
    if ( (v4 & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v35 + 16) )
    {
      ndisInvokeNextSendHandler(
        v48,
        v5,
        v4,
        *((struct _NDIS_OBJECT_HEADER **)v7 + 57),
        *((void **)v7 + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v7 + 54));
      return;
    }
    v36 = v4 | 1;
    if ( !*(_QWORD *)v35 )
    {
      v37 = v48;
      *(_QWORD *)v35 = v48;
LABEL_42:
      *(_QWORD *)(v35 + 8) = v37;
      v37->Scratch = 0LL;
      v37->ChildRefCount = v36;
      v37->Status = v5;
      return;
    }
    p_Next = *(struct _NET_BUFFER_LIST ***)(v35 + 8);
    if ( v5 != *((_DWORD *)p_Next + 35) || v36 != *((_DWORD *)p_Next + 33) || (v36 & 0x34) != 0 )
    {
      v37 = v48;
      p_Next[14] = v48;
      goto LABEL_42;
    }
    for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      p_Next = &i->Next;
    *p_Next = v48;
  }
}

/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000CA50
 * Callers:
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0009B00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisFOidRequest @ 0x1C000AFE0 (NdisFOidRequest.c)
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0026610 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C0099C30 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C009E9D0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0009598 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0009AD4 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000FF4C (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00613E8 (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C00835FC (WPP_RECORDER_SF_Dq_ea_1C00835FC.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisQueueOidRequest(
        struct _NDIS_OID_REQUEST *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v8; // r13
  int v9; // r8d
  NDIS_OID Oid; // ecx
  unsigned int *v11; // rdx
  unsigned __int64 *p_Lock; // r14
  KIRQL v13; // al
  struct _NDIS_MINIPORT_BLOCK *NextRequestHandle; // rdi
  KIRQL v15; // r15
  unsigned __int16 v16; // cx
  KIRQL v17; // al
  struct _NDIS_REFCOUNT_BLOCK *v18; // rcx
  KIRQL v19; // bl
  KIRQL v20; // bl
  UCHAR *v21; // rdx
  unsigned int *p_RequestBuffer; // rax
  UCHAR *v23; // rcx
  UCHAR **Reserved26; // rcx
  unsigned int v25; // ebx
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // si
  __int64 v29; // r10
  unsigned __int8 v30; // r9
  unsigned __int8 v31; // al
  _BYTE *v32; // rdx
  bool v33; // zf
  char v35; // cl
  char v36; // bl
  KIRQL v37; // r15
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v40; // al
  _LIST_ENTRY *NdisReserved; // rdx
  KIRQL v42; // r8
  _LIST_ENTRY *p_OidRequestList; // rax
  struct _NDIS_MINIPORT_BLOCK *Flink; // rcx
  _LIST_ENTRY *Blink; // rcx
  char v46; // r14
  KIRQL v47; // al
  NDIS_REFCOUNT_HANDLE__ *v48; // r8
  KIRQL v49; // r15
  int v50; // ecx
  __int64 v51; // r10
  unsigned __int8 v52; // r9
  _BYTE *v53; // rdx
  _REFERENCE_EX *p_DeferredContext; // r15
  KIRQL v55; // al
  unsigned __int16 SystemArgument1; // cx
  KIRQL v57; // al
  NDIS_REFCOUNT_HANDLE__ *SystemArgument2; // r8
  KIRQL v59; // bl
  int v60; // ecx
  __int64 v61; // r10
  unsigned __int8 v62; // r9
  _BYTE *v63; // rdx
  KIRQL v64; // dl
  char v65; // al
  NDIS_REFCOUNT_HANDLE__ *v66; // rbx
  unsigned int v67; // edx
  int v68; // ecx
  char v69; // al
  KIRQL v70; // dl
  ULONG_PTR v71; // r14
  unsigned int v72; // edx
  int v73; // ecx
  NDIS_REFCOUNT_HANDLE__ *v74; // r12
  unsigned int v75; // edx
  int v76; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v78[8]; // [rsp+30h] [rbp-D0h]
  KIRQL v79; // [rsp+40h] [rbp-C0h]
  KIRQL v80; // [rsp+40h] [rbp-C0h]
  KIRQL v81; // [rsp+41h] [rbp-BFh]
  KIRQL v82; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v83[2]; // [rsp+42h] [rbp-BEh] BYREF
  _DWORD v84[3]; // [rsp+44h] [rbp-BCh] BYREF
  struct _NDIS_OID_REQUEST v85; // [rsp+50h] [rbp-B0h] BYREF

  v8 = 0LL;
  memset(&v85, 0, 0xF8uLL);
  Oid = a1->DATA.QUERY_INFORMATION.Oid;
  v11 = &WPP_RECORDER_INITIALIZED;
  v84[0] = 0;
  if ( Oid > 0x10207 || Oid < 0x10106 )
    goto LABEL_2;
  if ( Oid <= 0x10107 || Oid == 65812 )
    goto LABEL_100;
  if ( Oid != 66055 )
  {
LABEL_2:
    if ( (*(_DWORD *)&a1->NdisReserved[16] & 0x100000) == 0 )
      goto LABEL_3;
LABEL_100:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        v9,
        203,
        (struct _GUID *)&WPP_1914ea0fddb73983daf9dda2a115606b_Traceguids,
        Oid,
        (char)a1);
    }
    NextRequestHandle = a2;
    p_Lock = &a2->Lock;
    goto LABEL_11;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(&v85, 0, 0xF8uLL);
    *(_DWORD *)&v85.NdisReserved[16] |= 8u;
    v85.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_QWORD *)&v85.NdisReserved[32] = &ndisIntReqNsi;
    v85.DATA.QUERY_INFORMATION.Oid = 65799;
    *(_QWORD *)&v85.RequestType = 2LL;
    v85.DATA.QUERY_INFORMATION.InformationBuffer = v84;
    v85.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a2, 0LL, &v85, 0, 0LL);
    memset(&v85, 0, 0xF8uLL);
    *(_DWORD *)&v85.NdisReserved[16] |= 8u;
    *(_QWORD *)&v85.NdisReserved[32] = &ndisIntReqNsi;
    v85.Header = (NDIS_OBJECT_HEADER)15466902;
    v85.DATA.QUERY_INFORMATION.Oid = 65812;
    *(_QWORD *)&v85.RequestType = 2LL;
    v85.DATA.QUERY_INFORMATION.InformationBuffer = v84;
    v85.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a2, 0LL, &v85, 0, 0LL);
  }
LABEL_3:
  p_Lock = &a2->Lock;
  v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v81 = v13;
  if ( a3 )
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a3->NextRequestHandle;
  else
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a2->Next.RequestHandle;
  if ( a4 )
  {
    p_DeferredContext = (_REFERENCE_EX *)&a4->WakeUpDpcTimer.Dpc.DeferredContext;
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
    v79 = v55;
    if ( !BYTE2(a4->WakeUpDpcTimer.Dpc.SystemArgument1) )
    {
      SystemArgument1 = (unsigned __int16)a4->WakeUpDpcTimer.Dpc.SystemArgument1;
      if ( SystemArgument1 < 0xFFEBu )
      {
        LOWORD(a4->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a4->WakeUpDpcTimer.Dpc.SystemArgument2);
        KeReleaseSpinLock((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext, v79);
        if ( a4->BaseMiniport->WakeUpDpcTimer.Timer.TimerListEntry.Flink )
        {
          NextRequestHandle = a4;
        }
        else if ( a4->Unused2 )
        {
          NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a4->Unused2;
        }
        v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
        SystemArgument2 = (NDIS_REFCOUNT_HANDLE__ *)a4->WakeUpDpcTimer.Dpc.SystemArgument2;
        v59 = v57;
        v80 = v57;
        if ( (unsigned __int64)SystemArgument2 - 2 <= 1 )
          goto LABEL_83;
        if ( (unsigned __int64)SystemArgument2 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)SystemArgument2, 0LL);
        if ( *((_BYTE *)SystemArgument2 + 2) <= 0x11u )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)SystemArgument2, 0x11uLL);
        v60 = *((unsigned __int8 *)SystemArgument2 + 1);
        if ( !*((_BYTE *)SystemArgument2 + 1) )
        {
          v61 = *((_QWORD *)SystemArgument2 + 1);
          if ( v61 )
          {
            v62 = *((_BYTE *)SystemArgument2 + 3);
            if ( v62 )
            {
              while ( 1 )
              {
                v63 = (_BYTE *)(v61 + 2LL * (unsigned __int8)v60);
                if ( *v63 == 17 )
                {
                  v69 = v63[1];
                  if ( v69 )
                    break;
                }
                LOBYTE(v60) = v60 + 1;
                if ( (unsigned __int8)v60 >= v62 )
                  goto LABEL_82;
              }
              v63[1] = v69 - 1;
              goto LABEL_83;
            }
          }
LABEL_82:
          if ( _bittestandreset((signed __int32 *)SystemArgument2 + 4, 0x11u) )
          {
LABEL_83:
            v33 = p_DeferredContext->ReferenceCount-- == 1;
            if ( v33 && !p_DeferredContext->ZeroBased )
            {
              NdisFreeRefCount((ULONG_PTR)p_DeferredContext->RefCountTracker);
              p_DeferredContext->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
            v64 = v59;
            goto LABEL_85;
          }
LABEL_113:
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)SystemArgument2, 0x11uLL);
        }
        if ( v60 != 1 )
          goto LABEL_83;
        v66 = SystemArgument2 + 274;
        v67 = *((_DWORD *)SystemArgument2 + 288);
        v68 = (unsigned __int16)v67 >> 1;
        if ( v67 >> 17 < 0x3FFE && v68 == (v67 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(SystemArgument2 + 274));
          *((_DWORD *)v66 + 14) &= 0x10001u;
        }
        else
        {
          if ( v68 == 0 && (v67 & 1) == 0 )
            goto LABEL_113;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(SystemArgument2 + 274), 0);
        }
        v59 = v80;
        goto LABEL_83;
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    v64 = v55;
LABEL_85:
    KeReleaseSpinLock(&p_DeferredContext->SpinLock, v64);
  }
  if ( NextRequestHandle->Header.Type != 5 )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = NextRequestHandle;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext);
    if ( !BYTE2(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) )
      break;
LABEL_120:
    KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v15);
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)NextRequestHandle->Unused2;
    v8 = 0LL;
    if ( NextRequestHandle->Header.Type != 5 )
      goto LABEL_10;
  }
  v16 = (unsigned __int16)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1;
  if ( v16 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_120;
  }
  LOWORD(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) = v16 + 1;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument2);
  KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v15);
LABEL_10:
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v81);
LABEL_11:
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(a2, (unsigned __int8)v11, a1);
  if ( KeGetCurrentIrql() )
  {
    v25 = ndisQueueRequestWorkItem(NextRequestHandle, a1, NextRequestHandle->Header.Type);
    goto LABEL_34;
  }
  if ( !v8 )
  {
    v36 = 1;
    v37 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      RefCountTracker = a2->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
      ReferenceCount = a2->Ref.ReferenceCount;
      a2->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
      {
LABEL_43:
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v78 = a2->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xCu,
            (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
            (char)a2,
            *(_QWORD *)v78);
        }
        KeReleaseSpinLock(&a2->Ref.SpinLock, v37);
        if ( !v36 )
          return (unsigned int)-1073741823;
        v40 = KeAcquireSpinLockRaiseToDpc(p_Lock);
        NdisReserved = (_LIST_ENTRY *)a1->NdisReserved;
        a2->MiniportThread = KeGetCurrentThread();
        *(_QWORD *)a1->NdisReserved = 0LL;
        v42 = v40;
        *(_QWORD *)&a1->NdisReserved[8] = 0LL;
        if ( (a2->PnPFlags & 0x100) != 0 )
        {
          a2->MiniportThread = 0LL;
          v25 = -1073741823;
          KeReleaseSpinLock(p_Lock, v40);
        }
        else
        {
          p_OidRequestList = &a2->OidRequestList;
          Flink = (struct _NDIS_MINIPORT_BLOCK *)a2->OidRequestList.Flink;
          if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a2->OidRequestList )
          {
LABEL_48:
            Blink = a2->OidRequestList.Blink;
            if ( Blink->Flink != p_OidRequestList )
              goto LABEL_140;
            *(_QWORD *)&a1->NdisReserved[8] = Blink;
            NdisReserved->Flink = p_OidRequestList;
            Blink->Flink = NdisReserved;
            a2->OidRequestList.Blink = NdisReserved;
            a2->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v42);
            ndisMDoOidRequest(a2);
            v25 = 259;
          }
          else
          {
            while ( Flink != (struct _NDIS_MINIPORT_BLOCK *)NdisReserved )
            {
              Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
              if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)p_OidRequestList )
                goto LABEL_48;
            }
            a2->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v42);
            v25 = -1073741823;
          }
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0x19u,
            (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
            a2);
        v46 = 0;
        v47 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
        v48 = a2->RefCountTracker;
        v49 = v47;
        if ( !v48 || (unsigned __int64)v48 - 2 <= 1 )
          goto LABEL_62;
        if ( v48 == (NDIS_REFCOUNT_HANDLE__ *)1 )
          ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
        if ( *((_BYTE *)v48 + 2) <= 0x48u )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v48, 0x48uLL);
        v50 = *((unsigned __int8 *)v48 + 1);
        if ( *((_BYTE *)v48 + 1) )
        {
          if ( v50 != 1 )
            goto LABEL_62;
          v74 = v48 + 1154;
          v75 = *((_DWORD *)v48 + 1168);
          v76 = (unsigned __int16)v75 >> 1;
          if ( v75 >> 17 < 0x3FFE && v76 == (v75 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v48 + 1154));
            *((_DWORD *)v74 + 14) &= 0x10001u;
            goto LABEL_62;
          }
          if ( v76 != 0 || (v75 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v48 + 1154), 0);
            goto LABEL_62;
          }
        }
        else
        {
          v51 = *((_QWORD *)v48 + 1);
          if ( v51 )
          {
            v52 = *((_BYTE *)v48 + 3);
            if ( v52 )
            {
              while ( 1 )
              {
                v53 = (_BYTE *)(v51 + 2LL * (unsigned __int8)v50);
                if ( *v53 == 72 )
                {
                  v65 = v53[1];
                  if ( v65 )
                    break;
                }
                LOBYTE(v50) = v50 + 1;
                if ( (unsigned __int8)v50 >= v52 )
                  goto LABEL_61;
              }
              v53[1] = v65 - 1;
              goto LABEL_62;
            }
          }
LABEL_61:
          if ( _bittestandreset((signed __int32 *)v48 + 6, 8u) )
          {
LABEL_62:
            v33 = a2->Ref.ReferenceCount-- == 1;
            if ( v33 )
              v46 = 1;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              *(_DWORD *)v78 = a2->Ref.ReferenceCount;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0xEu,
                (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
                (char)a2,
                *(_QWORD *)v78);
            }
            KeReleaseSpinLock(&a2->Ref.SpinLock, v49);
            if ( v46 )
            {
              RemoveReadyEvent = a2->RemoveReadyEvent;
              if ( RemoveReadyEvent )
                KeSetEvent(RemoveReadyEvent, 0, 0);
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                4u,
                0x14u,
                0x1Au,
                (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
                a2);
            goto LABEL_34;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v48, 0x48uLL);
      }
      a2->Ref.ReferenceCount = -1;
    }
    v36 = 0;
    goto LABEL_43;
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext);
  v18 = (struct _NDIS_REFCOUNT_BLOCK *)v8->WakeUpDpcTimer.Dpc.SystemArgument2;
  ++LOWORD(v8->WakeUpDpcTimer.Dpc.SystemArgument1);
  v19 = v17;
  NdisReferenceWithTag(v18);
  KeReleaseSpinLock((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, v19);
  v20 = KeAcquireSpinLockRaiseToDpc(p_Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v82 = v20;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
  v21 = a1->NdisReserved;
  v8->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
  *(_QWORD *)a1->NdisReserved = 0LL;
  *(_QWORD *)&a1->NdisReserved[8] = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)&v8->Reserved4.Length + 124LL) & 0x100) != 0 )
  {
    v8->ReturnPacketsQueue = 0LL;
    v25 = -1073741823;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v82);
    goto LABEL_21;
  }
  p_RequestBuffer = &v8->RequestBuffer;
  v23 = *(UCHAR **)&v8->RequestBuffer;
  if ( v23 == (UCHAR *)&v8->RequestBuffer )
  {
LABEL_17:
    Reserved26 = (UCHAR **)v8->Reserved26;
    if ( *Reserved26 == (UCHAR *)p_RequestBuffer )
    {
      *(_QWORD *)&a1->NdisReserved[8] = Reserved26;
      *(_QWORD *)v21 = p_RequestBuffer;
      *Reserved26 = v21;
      v8->Reserved26 = v21;
      v8->ReturnPacketsQueue = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v20);
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal,
             v8,
             (unsigned int)Size,
             0,
             0LL) < 0 )
      {
        v83[0] = 0;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v8, v83);
        LOBYTE(v8->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v8);
        v70 = v83[0];
        v8->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&v8->FirstPendingPacket, v70);
      }
      v25 = 259;
      goto LABEL_21;
    }
LABEL_140:
    __fastfail(3u);
  }
  while ( v23 != v21 )
  {
    v23 = *(UCHAR **)v23;
    if ( v23 == (UCHAR *)p_RequestBuffer )
      goto LABEL_17;
  }
  v8->ReturnPacketsQueue = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v20);
  v25 = -1073741823;
LABEL_21:
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext);
  v27 = (ULONG_PTR)v8->WakeUpDpcTimer.Dpc.SystemArgument2;
  v28 = v26;
  if ( v27 - 2 > 1 )
  {
    if ( v27 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
    if ( *(_BYTE *)(v27 + 2) <= 0xDu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v27, 0xDuLL);
    if ( *(_BYTE *)(v27 + 1) )
    {
      if ( *(_BYTE *)(v27 + 1) != 1 )
        goto LABEL_30;
      v71 = v27 + 840;
      v72 = *(_DWORD *)(v27 + 896);
      v73 = (unsigned __int16)v72 >> 1;
      if ( v72 >> 17 < 0x3FFE && v73 == (v72 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 840));
        *(_DWORD *)(v71 + 56) &= 0x10001u;
        goto LABEL_30;
      }
      if ( v73 != 0 || (v72 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 840), 0);
        goto LABEL_30;
      }
    }
    else
    {
      v29 = *(_QWORD *)(v27 + 8);
      if ( v29 )
      {
        v30 = *(_BYTE *)(v27 + 3);
        v31 = 0;
        if ( v30 )
        {
          while ( 1 )
          {
            v32 = (_BYTE *)(v29 + 2LL * v31);
            if ( *v32 == 13 )
            {
              v35 = v32[1];
              if ( v35 )
                break;
            }
            if ( ++v31 >= v30 )
              goto LABEL_29;
          }
          v32[1] = v35 - 1;
          goto LABEL_30;
        }
      }
LABEL_29:
      if ( _bittestandreset((signed __int32 *)(v27 + 16), 0xDu) )
        goto LABEL_30;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xDuLL);
  }
LABEL_30:
  v33 = LOWORD(v8->WakeUpDpcTimer.Dpc.SystemArgument1)-- == 1;
  if ( v33 && !BYTE3(v8->WakeUpDpcTimer.Dpc.SystemArgument1) )
  {
    NdisFreeRefCount((ULONG_PTR)v8->WakeUpDpcTimer.Dpc.SystemArgument2);
    v8->WakeUpDpcTimer.Dpc.SystemArgument2 = (void *)1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, v28);
LABEL_34:
  if ( v25 != 259 && v8 )
    ndisDereferenceRef((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, 0xFu);
  return v25;
}

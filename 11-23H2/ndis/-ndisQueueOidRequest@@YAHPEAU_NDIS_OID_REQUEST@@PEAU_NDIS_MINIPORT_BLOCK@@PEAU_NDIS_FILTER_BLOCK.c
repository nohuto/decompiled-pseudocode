/*
 * XREFs of ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C000C3D0
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0008860 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C0008E00 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     NdisFOidRequest @ 0x1C000A650 (NdisFOidRequest.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009FBF0 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisProcessRequestAsync@@YAXPEAX@Z @ 0x1C00A4DD0 (-ndisProcessRequestAsync@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DCC (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C2F0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     ?ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C000F5C0 (-ndisOidTranslateBetweenOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0015420 (NdisFreeRefCount.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001E0DC (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F3B0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0025AB8 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C003DC08 (WPP_RECORDER_SF_Dq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C006637C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0368 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D06A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D07A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$00U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_B.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D08A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOC.c)
 *     ??$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D09A4 (--$TraceLoggingWriteOidRequestQueuedActivity@$0A@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_.c)
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
  unsigned __int64 *p_Lock; // r15
  KIRQL v13; // al
  struct _NDIS_MINIPORT_BLOCK *NextRequestHandle; // rdi
  KIRQL v15; // r14
  unsigned __int16 v16; // cx
  KIRQL v17; // dl
  KIRQL v18; // al
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  KIRQL v20; // bl
  KIRQL v21; // al
  UCHAR *v22; // r14
  unsigned int *p_RequestBuffer; // rbx
  UCHAR *v24; // rax
  UCHAR **Reserved26; // rax
  KIRQL v26; // dl
  unsigned int v27; // ebx
  KIRQL v28; // al
  ULONG_PTR v29; // r8
  KIRQL v30; // si
  __int64 v31; // r10
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // al
  _BYTE *v34; // rdx
  bool v35; // zf
  char v37; // cl
  char v38; // bl
  KIRQL v39; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v42; // al
  _LIST_ENTRY *NdisReserved; // r14
  KIRQL v44; // dl
  _LIST_ENTRY *p_OidRequestList; // rbx
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  char v48; // r14
  KIRQL v49; // al
  NDIS_REFCOUNT_HANDLE__ *v50; // r8
  KIRQL v51; // r15
  int v52; // ecx
  __int64 v53; // r10
  unsigned __int8 v54; // r9
  _BYTE *v55; // rdx
  _REFERENCE_EX *p_DeferredContext; // rbx
  KIRQL v57; // al
  unsigned __int16 SystemArgument1; // cx
  KIRQL v59; // al
  NDIS_REFCOUNT_HANDLE__ *SystemArgument2; // r8
  KIRQL v61; // r14
  int v62; // ecx
  __int64 v63; // r10
  unsigned __int8 v64; // r9
  _BYTE *v65; // rdx
  KIRQL v66; // dl
  char v67; // al
  unsigned int v68; // edx
  int v69; // ecx
  char v70; // al
  KIRQL v71; // dl
  KIRQL v72; // dl
  KIRQL v73; // dl
  ULONG_PTR v74; // r14
  unsigned int v75; // edx
  int v76; // ecx
  NDIS_REFCOUNT_HANDLE__ *v77; // r12
  unsigned int v78; // edx
  int v79; // ecx
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v81[8]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v82; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v83; // [rsp+41h] [rbp-BFh]
  KIRQL v84; // [rsp+42h] [rbp-BEh]
  int v85; // [rsp+44h] [rbp-BCh] BYREF
  NDIS_REFCOUNT_HANDLE__ *v86; // [rsp+48h] [rbp-B8h]
  struct _NDIS_OID_REQUEST v87; // [rsp+50h] [rbp-B0h] BYREF

  v8 = 0LL;
  memset(&v87, 0, 0xF8uLL);
  Oid = a1->DATA.QUERY_INFORMATION.Oid;
  v11 = &WPP_RECORDER_INITIALIZED;
  v85 = 0;
  if ( Oid > 0x10207 )
    goto LABEL_2;
  if ( Oid == 65798 || Oid == 65799 || Oid == 65812 )
    goto LABEL_102;
  if ( Oid != 66055 )
  {
LABEL_2:
    if ( (*(_DWORD *)&a1->NdisReserved[16] & 0x100000) == 0 )
      goto LABEL_3;
LABEL_102:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_Dq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v11,
        v9,
        203,
        (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
        Oid,
        (char)a1);
    }
    NextRequestHandle = a2;
    p_Lock = &a2->Lock;
    goto LABEL_11;
  }
  if ( a2->MajorNdisVersion < 6u )
  {
    memset(&v87, 0, 0x68uLL);
    memset(&v87.NdisReserved[40], 0, 0x88uLL);
    *(_DWORD *)&v87.NdisReserved[16] |= 8u;
    *(_QWORD *)&v87.NdisReserved[32] = &ndisIntReqNsi;
    EtwActivityIdControl(3u, (LPGUID)&v87.NdisReserved[96]);
    v87.Header = (NDIS_OBJECT_HEADER)15466902;
    v87.DATA.QUERY_INFORMATION.Oid = 65799;
    *(_QWORD *)&v87.RequestType = 2LL;
    v87.DATA.QUERY_INFORMATION.InformationBuffer = &v85;
    v87.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a2, 0LL, &v87, 0, 0LL);
    memset(&v87, 0, 0x68uLL);
    memset(&v87.NdisReserved[40], 0, 0x88uLL);
    *(_DWORD *)&v87.NdisReserved[16] |= 8u;
    *(_QWORD *)&v87.NdisReserved[32] = &ndisIntReqNsi;
    EtwActivityIdControl(3u, (LPGUID)&v87.NdisReserved[96]);
    v87.Header = (NDIS_OBJECT_HEADER)15466902;
    v87.DATA.QUERY_INFORMATION.Oid = 65812;
    *(_QWORD *)&v87.RequestType = 2LL;
    v87.DATA.QUERY_INFORMATION.InformationBuffer = &v85;
    v87.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a2, 0LL, &v87, 0, 0LL);
  }
LABEL_3:
  p_Lock = &a2->Lock;
  v13 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v84 = v13;
  if ( a3 )
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a3->NextRequestHandle;
  else
    NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a2->Next.RequestHandle;
  if ( a4 )
  {
    p_DeferredContext = (_REFERENCE_EX *)&a4->WakeUpDpcTimer.Dpc.DeferredContext;
    v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
    v83 = v57;
    if ( !BYTE2(a4->WakeUpDpcTimer.Dpc.SystemArgument1) )
    {
      SystemArgument1 = (unsigned __int16)a4->WakeUpDpcTimer.Dpc.SystemArgument1;
      if ( SystemArgument1 < 0xFFEBu )
      {
        LOWORD(a4->WakeUpDpcTimer.Dpc.SystemArgument1) = SystemArgument1 + 1;
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)a4->WakeUpDpcTimer.Dpc.SystemArgument2);
        KeReleaseSpinLock((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext, v83);
        if ( a4->BaseMiniport->WakeUpDpcTimer.Timer.TimerListEntry.Flink )
        {
          NextRequestHandle = a4;
        }
        else if ( a4->Unused2 )
        {
          NextRequestHandle = (struct _NDIS_MINIPORT_BLOCK *)a4->Unused2;
        }
        v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a4->WakeUpDpcTimer.Dpc.DeferredContext);
        SystemArgument2 = (NDIS_REFCOUNT_HANDLE__ *)a4->WakeUpDpcTimer.Dpc.SystemArgument2;
        v61 = v59;
        if ( (unsigned __int64)SystemArgument2 - 2 <= 1 )
          goto LABEL_85;
        if ( (unsigned __int64)SystemArgument2 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)SystemArgument2, 0LL);
        if ( *((_BYTE *)SystemArgument2 + 2) <= 0x11u )
          ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)SystemArgument2, 0x11uLL);
        v62 = *((unsigned __int8 *)SystemArgument2 + 1);
        if ( *((_BYTE *)SystemArgument2 + 1) )
        {
          if ( v62 != 1 )
            goto LABEL_85;
          v68 = *((_DWORD *)SystemArgument2 + 288);
          v69 = (unsigned __int16)v68 >> 1;
          v86 = SystemArgument2 + 274;
          if ( v68 >> 17 < 0x3FFE && v69 == (v68 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(SystemArgument2 + 274));
            *((_DWORD *)v86 + 14) &= 0x10001u;
            goto LABEL_85;
          }
          if ( v69 != 0 || (v68 & 1) != 0 )
          {
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(SystemArgument2 + 274), 0);
            goto LABEL_85;
          }
        }
        else
        {
          v63 = *((_QWORD *)SystemArgument2 + 1);
          if ( v63 )
          {
            v64 = *((_BYTE *)SystemArgument2 + 3);
            if ( v64 )
            {
              while ( 1 )
              {
                v65 = (_BYTE *)(v63 + 2LL * (unsigned __int8)v62);
                if ( *v65 == 17 )
                {
                  v70 = v65[1];
                  if ( v70 )
                    break;
                }
                LOBYTE(v62) = v62 + 1;
                if ( (unsigned __int8)v62 >= v64 )
                  goto LABEL_84;
              }
              v65[1] = v70 - 1;
              goto LABEL_85;
            }
          }
LABEL_84:
          if ( _bittestandreset((signed __int32 *)SystemArgument2 + 4, 0x11u) )
          {
LABEL_85:
            v35 = p_DeferredContext->ReferenceCount-- == 1;
            if ( v35 && !p_DeferredContext->ZeroBased )
            {
              NdisFreeRefCount((ULONG_PTR)p_DeferredContext->RefCountTracker);
              p_DeferredContext->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
            v66 = v61;
            goto LABEL_87;
          }
        }
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)SystemArgument2, 0x11uLL);
      }
      ndisRefCountReferenceCountOverflow = 1;
    }
    v66 = v57;
LABEL_87:
    KeReleaseSpinLock(&p_DeferredContext->SpinLock, v66);
  }
  if ( NextRequestHandle->Header.Type != 5 )
    goto LABEL_10;
  while ( 1 )
  {
    v8 = NextRequestHandle;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext);
    if ( !BYTE2(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) )
      break;
LABEL_121:
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
    goto LABEL_121;
  }
  LOWORD(NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument1) = v16 + 1;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)NextRequestHandle->WakeUpDpcTimer.Dpc.SystemArgument2);
  KeReleaseSpinLock((PKSPIN_LOCK)&NextRequestHandle->WakeUpDpcTimer.Dpc.DeferredContext, v15);
LABEL_10:
  v17 = v84;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v17);
LABEL_11:
  if ( NextRequestHandle->Header.Type == 17 )
    ndisOidTranslateBetweenOids(a2, (unsigned __int8)v11, a1);
  if ( KeGetCurrentIrql() )
  {
    v27 = ndisQueueRequestWorkItem((struct _NDIS_FILTER_BLOCK *)NextRequestHandle, a1, NextRequestHandle->Header.Type);
    goto LABEL_35;
  }
  if ( !v8 )
  {
    v38 = 1;
    v39 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
    if ( !a2->Ref.Closing )
    {
      RefCountTracker = a2->RefCountTracker;
      if ( RefCountTracker )
        NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
      ReferenceCount = a2->Ref.ReferenceCount;
      a2->Ref.ReferenceCount = ReferenceCount + 1;
      if ( ReferenceCount != -1 )
      {
LABEL_44:
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v81 = a2->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xCu,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)a2,
            *(_QWORD *)v81);
        }
        KeReleaseSpinLock(&a2->Ref.SpinLock, v39);
        if ( !v38 )
          return (unsigned int)-1073741823;
        v42 = KeAcquireSpinLockRaiseToDpc(p_Lock);
        NdisReserved = (_LIST_ENTRY *)a1->NdisReserved;
        a2->MiniportThread = KeGetCurrentThread();
        *(_QWORD *)a1->NdisReserved = 0LL;
        v44 = v42;
        *(_QWORD *)&a1->NdisReserved[8] = 0LL;
        v35 = (a2->PnPFlags & 0x100) == 0;
        v82 = v42;
        if ( !v35 )
        {
          a2->MiniportThread = 0LL;
          v27 = -1073741823;
          KeReleaseSpinLock(p_Lock, v42);
          goto LABEL_52;
        }
        p_OidRequestList = &a2->OidRequestList;
        Flink = (struct _NDIS_MINIPORT_BLOCK *)a2->OidRequestList.Flink;
        if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&a2->OidRequestList )
        {
          while ( Flink != (struct _NDIS_MINIPORT_BLOCK *)NdisReserved )
          {
            Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
            if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)p_OidRequestList )
              goto LABEL_49;
          }
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v44);
          v27 = -1073741823;
          goto LABEL_52;
        }
LABEL_49:
        if ( (unsigned int)dword_1C00F41D8 <= 4 )
        {
LABEL_50:
          Blink = a2->OidRequestList.Blink;
          if ( Blink->Flink != p_OidRequestList )
            goto LABEL_159;
          NdisReserved->Flink = p_OidRequestList;
          *(_QWORD *)&a1->NdisReserved[8] = Blink;
          Blink->Flink = NdisReserved;
          a2->OidRequestList.Blink = NdisReserved;
          a2->MiniportThread = 0LL;
          KeReleaseSpinLock(p_Lock, v44);
          ndisMDoOidRequest(a2);
          v27 = 259;
LABEL_52:
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x19u,
              (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
              a2);
          v48 = 0;
          v49 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
          v50 = a2->RefCountTracker;
          v51 = v49;
          if ( !v50 || (unsigned __int64)v50 - 2 <= 1 )
            goto LABEL_64;
          if ( v50 == (NDIS_REFCOUNT_HANDLE__ *)1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
          if ( *((_BYTE *)v50 + 2) <= 0x48u )
            ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)v50, 0x48uLL);
          v52 = *((unsigned __int8 *)v50 + 1);
          if ( *((_BYTE *)v50 + 1) )
          {
            if ( v52 != 1 )
              goto LABEL_64;
            v77 = v50 + 1154;
            v78 = *((_DWORD *)v50 + 1168);
            v79 = (unsigned __int16)v78 >> 1;
            if ( v78 >> 17 < 0x3FFE && v79 == (v78 >> 17) + 1 )
            {
              ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v50 + 1154));
              *((_DWORD *)v77 + 14) &= 0x10001u;
              goto LABEL_64;
            }
            if ( v79 != 0 || (v78 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v50 + 1154), 0);
              goto LABEL_64;
            }
          }
          else
          {
            v53 = *((_QWORD *)v50 + 1);
            if ( v53 )
            {
              v54 = *((_BYTE *)v50 + 3);
              if ( v54 )
              {
                while ( 1 )
                {
                  v55 = (_BYTE *)(v53 + 2LL * (unsigned __int8)v52);
                  if ( *v55 == 72 )
                  {
                    v67 = v55[1];
                    if ( v67 )
                      break;
                  }
                  LOBYTE(v52) = v52 + 1;
                  if ( (unsigned __int8)v52 >= v54 )
                    goto LABEL_63;
                }
                v55[1] = v67 - 1;
                goto LABEL_64;
              }
            }
LABEL_63:
            if ( _bittestandreset((signed __int32 *)v50 + 6, 8u) )
            {
LABEL_64:
              v35 = a2->Ref.ReferenceCount-- == 1;
              if ( v35 )
                v48 = 1;
              if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v81 = a2->Ref.ReferenceCount;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  4u,
                  0x14u,
                  0xEu,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)a2,
                  *(_QWORD *)v81);
              }
              KeReleaseSpinLock(&a2->Ref.SpinLock, v51);
              if ( v48 )
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
                  (struct _GUID *)&WPP_57ccdd0fd6ee3fd78554414e6337e6e9_Traceguids,
                  a2);
              goto LABEL_35;
            }
          }
          ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v50, 0x48uLL);
        }
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
        {
          if ( ((*(_DWORD *)&a1->NdisReserved[16] >> 28) & 3) != 0 )
          {
            if ( ((*(_DWORD *)&a1->NdisReserved[16] >> 28) & 3) == 2 )
            {
LABEL_155:
              if ( *(_QWORD *)&a1->NdisReserved[24] )
                TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_MINIPORT_BLOCK>(a2, a1);
              else
                TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_MINIPORT_BLOCK>(a2, a1);
            }
          }
          else if ( IsOidTelemetryFilterEnabled(
                      a1->DATA.QUERY_INFORMATION.Oid,
                      (struct _NDIS_OID_REQUEST_RESERVED *)a1->NdisReserved) )
          {
            goto LABEL_155;
          }
        }
        v44 = v82;
        goto LABEL_50;
      }
      a2->Ref.ReferenceCount = -1;
    }
    v38 = 0;
    goto LABEL_44;
  }
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext);
  v19 = (struct _NDIS_REFCOUNT_BLOCK *)v8->WakeUpDpcTimer.Dpc.SystemArgument2;
  ++LOWORD(v8->WakeUpDpcTimer.Dpc.SystemArgument1);
  v20 = v18;
  NdisReferenceWithTag(v19);
  KeReleaseSpinLock((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, v20);
  v21 = KeAcquireSpinLockRaiseToDpc(p_Lock);
  a2->MiniportThread = KeGetCurrentThread();
  v82 = v21;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
  v22 = a1->NdisReserved;
  v8->ReturnPacketsQueue = (_NDIS_PACKET *)KeGetCurrentThread();
  *(_QWORD *)a1->NdisReserved = 0LL;
  *(_QWORD *)&a1->NdisReserved[8] = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)&v8->Reserved4.Length + 124LL) & 0x100) != 0 )
  {
    v8->ReturnPacketsQueue = 0LL;
    v27 = -1073741823;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
    v73 = v82;
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(p_Lock, v73);
    goto LABEL_22;
  }
  p_RequestBuffer = &v8->RequestBuffer;
  v24 = *(UCHAR **)&v8->RequestBuffer;
  if ( v24 == (UCHAR *)&v8->RequestBuffer )
  {
LABEL_17:
    if ( (unsigned int)dword_1C00F41D8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
    {
      if ( ((*(_DWORD *)&a1->NdisReserved[16] >> 28) & 3) != 0 )
      {
        if ( ((*(_DWORD *)&a1->NdisReserved[16] >> 28) & 3) == 2 )
          goto LABEL_129;
      }
      else if ( IsOidTelemetryFilterEnabled(
                  a1->DATA.QUERY_INFORMATION.Oid,
                  (struct _NDIS_OID_REQUEST_RESERVED *)a1->NdisReserved) )
      {
LABEL_129:
        if ( *(_QWORD *)&a1->NdisReserved[24] )
          TraceLoggingWriteOidRequestQueuedActivity<0,_NDIS_FILTER_BLOCK>(v8, a1);
        else
          TraceLoggingWriteOidRequestQueuedActivity<1,_NDIS_FILTER_BLOCK>(v8, a1);
      }
    }
    Reserved26 = (UCHAR **)v8->Reserved26;
    if ( *Reserved26 == (UCHAR *)p_RequestBuffer )
    {
      *(_QWORD *)v22 = p_RequestBuffer;
      *(_QWORD *)&a1->NdisReserved[8] = Reserved26;
      *Reserved26 = v22;
      v8->Reserved26 = v22;
      v8->ReturnPacketsQueue = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
      v26 = v82;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v26);
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisFDoOidRequestInternal,
             v8,
             (unsigned int)Size,
             0,
             0LL) < 0 )
      {
        v82 = 0;
        NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v8, &v82);
        LOBYTE(v8->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink) = 1;
        ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v8);
        v72 = v82;
        v8->ReturnPacketsQueue = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&v8->FirstPendingPacket, v72);
      }
      v27 = 259;
      goto LABEL_22;
    }
LABEL_159:
    __fastfail(3u);
  }
  while ( v24 != v22 )
  {
    v24 = *(UCHAR **)v24;
    if ( v24 == (UCHAR *)p_RequestBuffer )
      goto LABEL_17;
  }
  v8->ReturnPacketsQueue = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v8->FirstPendingPacket);
  v71 = v82;
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(p_Lock, v71);
  v27 = -1073741823;
LABEL_22:
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext);
  v29 = (ULONG_PTR)v8->WakeUpDpcTimer.Dpc.SystemArgument2;
  v30 = v28;
  if ( v29 - 2 > 1 )
  {
    if ( v29 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v29, 0LL);
    if ( *(_BYTE *)(v29 + 2) <= 0xDu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v29, 0xDuLL);
    if ( *(_BYTE *)(v29 + 1) )
    {
      if ( *(_BYTE *)(v29 + 1) != 1 )
        goto LABEL_31;
      v74 = v29 + 840;
      v75 = *(_DWORD *)(v29 + 896);
      v76 = (unsigned __int16)v75 >> 1;
      if ( v75 >> 17 < 0x3FFE && v76 == (v75 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v29 + 840));
        *(_DWORD *)(v74 + 56) &= 0x10001u;
        goto LABEL_31;
      }
      if ( v76 != 0 || (v75 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v29 + 840), 0);
        goto LABEL_31;
      }
    }
    else
    {
      v31 = *(_QWORD *)(v29 + 8);
      if ( v31 )
      {
        v32 = *(_BYTE *)(v29 + 3);
        v33 = 0;
        if ( v32 )
        {
          while ( 1 )
          {
            v34 = (_BYTE *)(v31 + 2LL * v33);
            if ( *v34 == 13 )
            {
              v37 = v34[1];
              if ( v37 )
                break;
            }
            if ( ++v33 >= v32 )
              goto LABEL_30;
          }
          v34[1] = v37 - 1;
          goto LABEL_31;
        }
      }
LABEL_30:
      if ( _bittestandreset((signed __int32 *)(v29 + 16), 0xDu) )
        goto LABEL_31;
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v29, 0xDuLL);
  }
LABEL_31:
  v35 = LOWORD(v8->WakeUpDpcTimer.Dpc.SystemArgument1)-- == 1;
  if ( v35 && !BYTE3(v8->WakeUpDpcTimer.Dpc.SystemArgument1) )
  {
    NdisFreeRefCount((ULONG_PTR)v8->WakeUpDpcTimer.Dpc.SystemArgument2);
    v8->WakeUpDpcTimer.Dpc.SystemArgument2 = (void *)1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, v30);
LABEL_35:
  if ( v27 != 259 && v8 )
    ndisDereferenceRef((PKSPIN_LOCK)&v8->WakeUpDpcTimer.Dpc.DeferredContext, 0xFu);
  return v27;
}

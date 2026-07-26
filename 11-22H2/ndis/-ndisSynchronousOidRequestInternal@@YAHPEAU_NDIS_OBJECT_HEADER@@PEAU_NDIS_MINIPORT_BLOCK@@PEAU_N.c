/*
 * XREFs of ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B633C
 * Callers:
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C0086430 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C008651C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     NdisFSynchronousOidRequest @ 0x1C00B6750 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C00B6860 (NdisSynchronousOidRequest.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F220 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C0022764 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0087968 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_ @ 0x1C00B5F18 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--_KSta.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop @ 0x1C00B5F58 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Pop.c)
 *     KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push @ 0x1C00B5FC8 (KStackStorage__ndisSynchronousOidRequestInternal_--_2_--NDIS_SYNCHRONOUS_OID_CALLFRAME_7_--Push.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C00B6060 (ndisFInvokeSynchronousOidRequest.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00B6138 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C00B6240 (ndisMInvokeSynchronousOidRequest.c)
 *     ndisVerifySynchronousOidAfterCompletion @ 0x1C00B66D4 (ndisVerifySynchronousOidAfterCompletion.c)
 */

__int64 __fastcall ndisSynchronousOidRequestInternal(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_FILTER_BLOCK *HighestFilter,
        struct _NDIS_OID_REQUEST *a4)
{
  bool v4; // zf
  NDIS_REQUEST_TYPE RequestType; // ecx
  __int32 v10; // ecx
  _LIST_ENTRY *Flink; // rcx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  KIRQL v13; // dl
  int v14; // r8d
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  unsigned int v17; // eax
  KIRQL v18; // dl
  __int64 v19; // rax
  ULONG_PTR v20; // rsi
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  _LIST_ENTRY *v22; // rdx
  _LIST_ENTRY *v23; // rax
  KIRQL v24; // dl
  unsigned int v25; // ebx
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-B9h] BYREF
  unsigned int v28; // [rsp+24h] [rbp-B5h] BYREF
  int v29; // [rsp+28h] [rbp-B1h] BYREF
  _LIST_ENTRY *v30; // [rsp+30h] [rbp-A9h] BYREF
  _LIST_ENTRY *p_SynchronousOidCalls; // [rsp+38h] [rbp-A1h]
  struct _NDIS_OID_REQUEST *v32; // [rsp+40h] [rbp-99h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-91h]
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-89h]
  _QWORD v35[18]; // [rsp+60h] [rbp-79h] BYREF

  v4 = a4->Header.Type == 0x96;
  v35[0] = 0LL;
  v35[15] = v35;
  v35[16] = 0LL;
  NewIrql[0] = 0;
  if ( !v4
    || a4->Header.Revision < 2u
    || a4->Header.Size < 0xF8u
    || a4->Timeout
    || a4->RequestId
    || (RequestType = a4->RequestType) != NdisRequestQueryInformation && (v10 = RequestType - 1) != 0 && v10 != 11 )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, (ULONG_PTR)a4, 0LL);
  }
  v32 = a4;
  CurrentThread = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    goto LABEL_46;
  v30 = a2->SynchronousOidCalls.Flink;
  p_SynchronousOidCalls = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)&v30;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)&v30;
  ++a2->DirectOidRequestCount;
  while ( 1 )
  {
    if ( !HighestFilter )
    {
      HighestFilter = a2->HighestFilter;
      goto LABEL_17;
    }
    while ( 1 )
    {
      HighestFilter = HighestFilter->LowerFilter;
LABEL_17:
      if ( !HighestFilter )
        break;
      FilterDriver = HighestFilter->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler
        || FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestCompleteHandler )
      {
        v29 = 0;
        if ( ndisReferenceRefEx(&HighestFilter->PnPRef.SpinLock, 0x17u, (enum _NDIS_REFERENCE_STATUS *)&v29) )
          break;
      }
    }
    v13 = NewIrql[0];
    a2->MiniportThread = 0LL;
    KeReleaseSpinLock(&a2->Lock, v13);
    if ( !HighestFilter )
      break;
    v15 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Push((__int64)v35);
    v16 = v15;
    if ( !v15 )
    {
      v28 = -1073741670;
LABEL_28:
      KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop((__int64)v35);
      goto LABEL_36;
    }
    if ( HighestFilter->FilterDriver->DefaultFilterCharacteristics.SynchronousOidRequestHandler )
    {
      v15[1] = 0LL;
      v28 = ndisFInvokeSynchronousOidRequest((__int64)HighestFilter, (__int64)a4, (__int64)(v15 + 1));
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
      v17 = v28;
    }
    else
    {
      v17 = 0;
      v28 = 0;
    }
    if ( v17 )
    {
      if ( v17 == 255 )
        v28 = 0;
      goto LABEL_28;
    }
    *v16 = HighestFilter;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  }
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v28 = ndisMInvokeSynchronousOidRequest((ULONG_PTR)a2, (ULONG_PTR)a4, v14);
    ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    if ( a4->RequestType == NdisRequestMethod
      && a4->DATA.QUERY_INFORMATION.Oid == 66240
      && (*(_DWORD *)&a4->NdisReserved[16] & 0x1000000) == 0
      && !v28 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
      ndisRssV2UpdateIndirectionTable(a2, a4);
      v18 = NewIrql[0];
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v18);
    }
  }
  else
  {
    v28 = -1073741637;
  }
LABEL_36:
  while ( 1 )
  {
    v19 = KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::Pop((__int64)v35);
    if ( !v19 )
      break;
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 16LL) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*(_QWORD *)v19, (ULONG_PTR)a4, &v28, *(_QWORD *)(v19 + 8));
      ndisVerifySynchronousOidAfterCompletion((ULONG_PTR)a4);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v20 + 312), 0x17u);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, NewIrql);
  v4 = a2->DirectOidRequestCount-- == 1;
  if ( v4 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v22 = v30;
  v23 = p_SynchronousOidCalls;
  if ( (_LIST_ENTRY **)v30->Blink != &v30 || (_LIST_ENTRY **)p_SynchronousOidCalls->Flink != &v30 )
LABEL_46:
    __fastfail(3u);
  p_SynchronousOidCalls->Flink = v30;
  v22->Blink = v23;
  v24 = NewIrql[0];
  a2->MiniportThread = 0LL;
  KeReleaseSpinLock(&a2->Lock, v24);
  v25 = v28;
  KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_::_KStackStorage__ndisSynchronousOidRequestInternal_::_2_::NDIS_SYNCHRONOUS_OID_CALLFRAME_7_((__int64)v35);
  return v25;
}

/*
 * XREFs of ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C0126470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0016E68 (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddS @ 0x1C00781D4 (WPP_RECORDER_SF_qddS.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C01247E0 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z @ 0x1C0124A58 (--_GNDIS_PD_QUEUE_TRACKER@@QEAAPEAXI@Z.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C0129474 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAllocateQueue(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3)
{
  const wchar_t *v6; // r10
  int v7; // ebx
  NDIS_PD_QUEUE_TYPE QueueType; // eax
  NDIS_PD_COUNTER_HANDLE__ *CounterHandle; // rsi
  NDIS_PD_QUEUE_TRACKER *PoolWithTag; // rax
  char *v12; // r15
  int v13; // eax
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  struct _NDIS_PD_QUEUE *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v6 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      0x22u,
      v14,
      (char)a1,
      a2->QueueType,
      a2->QueueSize,
      v6);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
           *((_QWORD *)a1 + 9),
           a2,
           a3);
    if ( v7 >= 0 )
      *((_QWORD *)(*a3)->PDPlatformReserved[1] + 5) = a1;
    goto LABEL_16;
  }
  *a3 = 0LL;
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x38u || (a2->Flags & 0xFFFFFFFE) != 0 )
  {
LABEL_15:
    v7 = -1073741811;
    goto LABEL_16;
  }
  QueueType = a2->QueueType;
  CounterHandle = a2->CounterHandle;
  if ( QueueType == PDQueueTypeReceive )
  {
    if ( CounterHandle && *((_DWORD *)CounterHandle + 14) != 1 )
      goto LABEL_15;
  }
  else if ( QueueType != PDQueueTypeTransmit || CounterHandle && *((_DWORD *)CounterHandle + 14) != 2 )
  {
    goto LABEL_15;
  }
  PoolWithTag = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
  if ( PoolWithTag && (v12 = (char *)NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(PoolWithTag)) != 0LL )
  {
    if ( CounterHandle )
      a2->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)*((_QWORD *)CounterHandle + 6);
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_QUEUE_PARAMETERS *, struct _NDIS_PD_QUEUE **))(*((_QWORD *)a1 + 10) + 8LL))(
            *((_QWORD *)a1 + 9),
            a2,
            &v16);
    v7 = v13;
    if ( CounterHandle )
      a2->CounterHandle = CounterHandle;
    if ( v13 < 0 )
    {
      NDIS_PD_QUEUE_TRACKER::`scalar deleting destructor'(v12);
    }
    else
    {
      ndisSetupPDQTracker(
        v12,
        v16,
        a2,
        (struct NDIS_PD_ASSOCIATION *)a1,
        (struct NDIS_PD_COUNTER *)CounterHandle,
        0,
        a2->Flags & 1);
      *a3 = v16;
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v7;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x23u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)*a3,
      v15);
  }
  return (unsigned int)v7;
}

/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C0125D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C0076278 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qddS @ 0x1C00781D4 (WPP_RECORDER_SF_qddS.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C0078364 (WPP_RECORDER_SF_qddd_ea_1C0078364.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C01247E0 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C0124944 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C0127A3C (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C0127BE4 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C012918C (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C01293C4 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C0129474 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 */

__int64 __fastcall NdisPDPIAcquireReceiveQueues(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *a2,
        struct _NDIS_PD_QUEUE **a3,
        unsigned int *a4,
        struct _NDIS_PD_QUEUE_PARAMETERS *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  _LIST_ENTRY **v8; // r12
  unsigned int v11; // edi
  const wchar_t *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _LIST_ENTRY *v19; // rax
  NDIS_PD_COUNTER_HANDLE__ *v20; // r12
  const struct _NDIS_PD_QUEUE_PARAMETERS *v21; // r15
  NDIS_PD_COUNTER_HANDLE__ *PoolWithTag; // rax
  _QWORD *v23; // rax
  NDIS_PD_QUEUE_TRACKER *v24; // rax
  NDIS_PD_QUEUE_TRACKER *v25; // rax
  int v27; // [rsp+20h] [rbp-61h]
  unsigned int v28; // [rsp+50h] [rbp-31h]
  int v29; // [rsp+54h] [rbp-2Dh]
  struct _LIST_ENTRY v30; // [rsp+60h] [rbp-21h] BYREF
  KLockHolder v31; // [rsp+70h] [rbp-11h] BYREF
  int v32; // [rsp+D0h] [rbp+4Fh]
  int v33; // [rsp+D0h] [rbp+4Fh]
  struct _NDIS_PD_QUEUE **v34; // [rsp+E0h] [rbp+5Fh]

  v34 = a3;
  v8 = (_LIST_ENTRY **)a3;
  v11 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)v12,
      0x26u,
      v27,
      (char)a1,
      *a4,
      *a6,
      v12);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v32 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, _LIST_ENTRY **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
            *((_QWORD *)a1 + 9),
            a2,
            v8,
            a4,
            a5,
            a6,
            a7);
    v16 = v32;
    if ( v32 >= 0 && *a4 )
    {
      do
      {
        (*(_QWORD **)((char *)&a5->CounterHandle + v11 * *a7))[5] = a1;
        v17 = v11++;
        v8[v17][1].Blink[2].Blink = (_LIST_ENTRY *)a1;
      }
      while ( v11 < *a4 );
      v16 = v32;
    }
  }
  else
  {
    v31.m_Lock = (KPushLockBase *)qword_1C00EC710;
    v31.m_State = Unlocked;
    v31.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v31);
    if ( *((_BYTE *)a1 + 89) )
    {
      v16 = -1073741808;
    }
    else
    {
      *((_BYTE *)a1 + 89) = 1;
      KLockHolder::~KLockHolder(&v31);
      if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 8u && (a2->Flags & 0xFFFFFFFE) == 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, _LIST_ENTRY **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
                *((_QWORD *)a1 + 9),
                a2,
                v8,
                a4,
                a5,
                a6,
                a7);
        if ( v16 >= 0 )
        {
          v15 = *a4;
          v28 = *a4;
          v14 = *a7;
          v29 = v14;
          if ( (unsigned int)v14 >= 0x38 && (v14 & 0xFFFFFFF8) == v14 )
          {
            v18 = (unsigned int)v14 * (unsigned __int64)(unsigned int)v15;
            if ( v18 <= 0xFFFFFFFF && (unsigned int)v18 <= *a6 )
            {
              v13 = 0LL;
              v16 = 0;
              v33 = 0;
              if ( !(_DWORD)v15 )
                goto LABEL_43;
              while ( 1 )
              {
                v19 = *v8;
                v20 = 0LL;
                v30.Flink = v19;
                v21 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + (unsigned int)(v13 * v14));
                if ( v21->Header.Type != 0x80
                  || v21->Header.Revision != 1
                  || v21->Header.Size < 0x38u
                  || (v21->Flags & 0xFFFFFFFE) != 0
                  || v21->QueueType != PDQueueTypeReceive )
                {
                  break;
                }
                if ( v21->CounterHandle )
                {
                  PoolWithTag = (NDIS_PD_COUNTER_HANDLE__ *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
                  v20 = PoolWithTag;
                  if ( !PoolWithTag )
                    goto LABEL_36;
                  *((_QWORD *)PoolWithTag + 4) = 0LL;
                  *((_QWORD *)PoolWithTag + 5) = 0LL;
                  *((_QWORD *)PoolWithTag + 6) = 0LL;
                  *((_DWORD *)PoolWithTag + 14) = 0;
                  *((_BYTE *)PoolWithTag + 60) = 0;
                  *((_QWORD *)PoolWithTag + 8) = 0LL;
                  *((_DWORD *)PoolWithTag + 22) = 0;
                  *((_QWORD *)PoolWithTag + 1) = 0LL;
                  *(_QWORD *)PoolWithTag = 0LL;
                  *((_QWORD *)PoolWithTag + 3) = 0LL;
                  *((_QWORD *)PoolWithTag + 2) = 0LL;
                  v23 = PoolWithTag + 18;
                  v23[1] = v23;
                  *v23 = v23;
                  *((_OWORD *)v20 + 6) = 0LL;
                  *((_WORD *)v20 + 49) = 0;
                  *((_QWORD *)v20 + 13) = 0LL;
                  *((_OWORD *)v20 + 7) = 0LL;
                  *((_WORD *)v20 + 57) = 0;
                  *((_QWORD *)v20 + 15) = 0LL;
                  *((_DWORD *)v20 + 16) = v33;
                  *((_DWORD *)v20 + 17) = ndisGetNextPDCounterId();
                  v16 = ndisPcwSetRssInstanceSuffix((struct NDIS_PD_COUNTER *)v20);
                  if ( v16 < 0 )
                  {
                    NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)v20);
                    goto LABEL_39;
                  }
                  ndisSetupPDCounter(
                    (struct NDIS_PD_COUNTER *)v20,
                    v21->CounterHandle,
                    PDCounterTypeReceiveQueue,
                    (struct NDIS_PD_ASSOCIATION *)a1,
                    1);
                  v21->CounterHandle = v20;
                }
                v24 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
                if ( !v24 || (v25 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v24)) == 0LL )
                {
LABEL_36:
                  v16 = -1073741670;
                  goto LABEL_39;
                }
                ndisSetupPDQTracker(
                  v25,
                  (struct _NDIS_PD_QUEUE *)v30.Flink,
                  v21,
                  (struct NDIS_PD_ASSOCIATION *)a1,
                  (struct NDIS_PD_COUNTER *)v20,
                  1u,
                  a2->Flags & 1);
                v13 = (unsigned int)(v33 + 1);
                v8 = (_LIST_ENTRY **)(v34 + 1);
                v33 = v13;
                ++v34;
                if ( (unsigned int)v13 >= v28 )
                  goto LABEL_43;
                LODWORD(v14) = v29;
              }
            }
          }
          v16 = -1073741776;
LABEL_39:
          v31.m_Lock = (KPushLockBase *)&v31;
          *(_QWORD *)&v31.m_State = &v31;
          v30.Blink = &v30;
          v30.Flink = &v30;
          ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, (struct _LIST_ENTRY *)&v31, &v30);
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
          ndisFreePDRSSObjects((struct _LIST_ENTRY *)&v31, &v30);
        }
      }
      else
      {
        v16 = -1073741811;
      }
      v31.m_Lock = (KPushLockBase *)qword_1C00EC710;
      v31.m_State = Unlocked;
      v31.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v31);
      *((_BYTE *)a1 + 89) = 0;
    }
    KLockHolder::~KLockHolder(&v31);
  }
LABEL_43:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddd(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15, v27);
  return (unsigned int)v16;
}

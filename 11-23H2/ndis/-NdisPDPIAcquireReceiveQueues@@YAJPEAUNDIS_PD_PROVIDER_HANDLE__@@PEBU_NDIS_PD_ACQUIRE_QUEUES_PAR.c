/*
 * XREFs of ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C01318F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisGetNextPDCounterId@@YAKXZ @ 0x1C007B758 (-ndisGetNextPDCounterId@@YAKXZ.c)
 *     WPP_RECORDER_SF_qddS @ 0x1C007D6B8 (WPP_RECORDER_SF_qddS.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C007D848 (WPP_RECORDER_SF_qddd_ea_1C007D848.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ @ 0x1C0130360 (--0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ.c)
 *     ??_GNDIS_PD_COUNTER@@QEAAPEAXI@Z @ 0x1C01304C4 (--_GNDIS_PD_COUNTER@@QEAAPEAXI@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C01335E4 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C013378C (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0134DE4 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYPE@@PEAUNDIS_PD_ASSOCIATION@@E@Z @ 0x1C0135024 (-ndisSetupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@PEAUNDIS_PD_COUNTER_HANDLE__@@W4NDIS_PD_COUNTER_TYP.c)
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C01350D4 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
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
  unsigned int v11; // ebx
  const wchar_t *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // r10d
  unsigned __int64 v18; // rax
  unsigned int *v19; // rdx
  const struct _NDIS_PD_QUEUE_PARAMETERS *v20; // r13
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v22; // rdx
  _LIST_ENTRY **p_Blink; // rax
  int NextPDCounterId; // eax
  struct NDIS_PD_COUNTER *v25; // rdx
  NDIS_PD_QUEUE_TRACKER *v26; // rax
  NDIS_PD_QUEUE_TRACKER *v27; // r10
  int v29; // [rsp+28h] [rbp-71h]
  unsigned int v30; // [rsp+58h] [rbp-41h]
  int v31; // [rsp+5Ch] [rbp-3Dh]
  struct _LIST_ENTRY P; // [rsp+68h] [rbp-31h] BYREF
  KLockHolder v33; // [rsp+78h] [rbp-21h] BYREF
  int v34; // [rsp+E8h] [rbp+4Fh]
  int v35; // [rsp+E8h] [rbp+4Fh]
  struct _NDIS_PD_QUEUE **v37; // [rsp+F8h] [rbp+5Fh]

  v37 = a3;
  v11 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_RECORDER_SF_qddS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)v12,
      (__int64)a3,
      0x26u,
      v29,
      (char)a1,
      *a4,
      *a6,
      v12);
  }
  if ( *((_BYTE *)a1 + 88) )
  {
    v34 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
            *((_QWORD *)a1 + 9),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    v15 = v34;
    if ( v34 >= 0 && *a4 )
    {
      do
      {
        (*(_QWORD **)((char *)&a5->CounterHandle + *a7 * v11))[5] = a1;
        v16 = v11++;
        *((_QWORD *)a3[v16]->PDPlatformReserved[1] + 5) = a1;
      }
      while ( v11 < *a4 );
      v15 = v34;
    }
  }
  else
  {
    v33.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
    v33.m_State = Unlocked;
    v33.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v33);
    if ( *((_BYTE *)a1 + 89) )
    {
      v15 = -1073741808;
    }
    else
    {
      *((_BYTE *)a1 + 89) = 1;
      KLockHolder::~KLockHolder(&v33);
      if ( a2->Header.Type == 0x80 && a2->Header.Revision == 1 && a2->Header.Size >= 8u && (a2->Flags & 0xFFFFFFFE) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, const struct _NDIS_PD_ACQUIRE_QUEUES_PARAMETERS *, struct _NDIS_PD_QUEUE **, unsigned int *, struct _NDIS_PD_QUEUE_PARAMETERS *, unsigned int *, unsigned int *))(*((_QWORD *)a1 + 10) + 24LL))(
                *((_QWORD *)a1 + 9),
                a2,
                v37,
                a4,
                a5,
                a6,
                a7);
        if ( v15 >= 0 )
        {
          v14 = *a7;
          v17 = *a4;
          v30 = *a4;
          v31 = v14;
          if ( (unsigned int)v14 >= 0x38 && (v14 & 0xFFFFFFF8) == v14 )
          {
            v18 = (unsigned int)v14 * (unsigned __int64)v17;
            if ( v18 <= 0xFFFFFFFF )
            {
              v19 = a6;
              if ( (unsigned int)v18 <= *a6 )
              {
                v35 = 0;
                v15 = 0;
                v13 = 0LL;
                if ( !v17 )
                  goto LABEL_44;
                while ( 1 )
                {
                  P.Flink = 0LL;
                  *(_QWORD *)&v33.m_State = *v37;
                  v20 = (struct _NDIS_PD_QUEUE_PARAMETERS *)((char *)a5 + (unsigned int)(v13 * v14));
                  if ( v20->Header.Type != 0x80
                    || v20->Header.Revision != 1
                    || v20->Header.Size < 0x38u
                    || (v20->Flags & 0xFFFFFFFE) != 0
                    || v20->QueueType != PDQueueTypeReceive )
                  {
                    break;
                  }
                  if ( v20->CounterHandle )
                  {
                    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x6E41444Eu);
                    P.Flink = PoolWithTag;
                    v22 = PoolWithTag;
                    if ( !PoolWithTag )
                      goto LABEL_36;
                    PoolWithTag[2].Flink = 0LL;
                    PoolWithTag[2].Blink = 0LL;
                    PoolWithTag[3].Flink = 0LL;
                    LODWORD(PoolWithTag[3].Blink) = 0;
                    BYTE4(PoolWithTag[3].Blink) = 0;
                    PoolWithTag[4].Flink = 0LL;
                    LODWORD(PoolWithTag[5].Blink) = 0;
                    PoolWithTag->Blink = 0LL;
                    PoolWithTag->Flink = 0LL;
                    PoolWithTag[1].Blink = 0LL;
                    PoolWithTag[1].Flink = 0LL;
                    p_Blink = &PoolWithTag[4].Blink;
                    p_Blink[1] = (_LIST_ENTRY *)p_Blink;
                    *p_Blink = (_LIST_ENTRY *)p_Blink;
                    v22[6] = 0LL;
                    WORD1(v22[6].Flink) = 0;
                    v22[6].Blink = 0LL;
                    v22[7] = 0LL;
                    WORD1(v22[7].Flink) = 0;
                    v22[7].Blink = 0LL;
                    LODWORD(v22[4].Flink) = v35;
                    NextPDCounterId = ndisGetNextPDCounterId();
                    *((_DWORD *)v25 + 17) = NextPDCounterId;
                    v15 = ndisPcwSetRssInstanceSuffix(v25);
                    if ( v15 < 0 )
                    {
                      NDIS_PD_COUNTER::`scalar deleting destructor'((_UNICODE_STRING *)P.Flink);
                      goto LABEL_39;
                    }
                    ndisSetupPDCounter(
                      (struct NDIS_PD_COUNTER *)P.Flink,
                      v20->CounterHandle,
                      PDCounterTypeReceiveQueue,
                      (struct NDIS_PD_ASSOCIATION *)a1,
                      1);
                    v20->CounterHandle = (NDIS_PD_COUNTER_HANDLE__ *)P.Flink;
                  }
                  v26 = (NDIS_PD_QUEUE_TRACKER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x7441444Eu);
                  if ( !v26 || (v27 = NDIS_PD_QUEUE_TRACKER::NDIS_PD_QUEUE_TRACKER(v26)) == 0LL )
                  {
LABEL_36:
                    v15 = -1073741670;
                    goto LABEL_39;
                  }
                  ndisSetupPDQTracker(
                    v27,
                    *(struct _NDIS_PD_QUEUE **)&v33.m_State,
                    v20,
                    (struct NDIS_PD_ASSOCIATION *)a1,
                    (struct NDIS_PD_COUNTER *)P.Flink,
                    1u,
                    a2->Flags & 1);
                  ++v37;
                  v13 = (unsigned int)(v35 + 1);
                  v35 = v13;
                  if ( (unsigned int)v13 >= v30 )
                    goto LABEL_43;
                  LODWORD(v14) = v31;
                }
              }
            }
          }
          v15 = -1073741776;
LABEL_39:
          P.Blink = &P;
          P.Flink = &P;
          v33.m_Lock = (KPushLockBase *)&v33;
          *(_QWORD *)&v33.m_State = &v33;
          ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)a1, &P, (struct _LIST_ENTRY *)&v33);
          (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 10) + 32LL))(*((_QWORD *)a1 + 9));
          ndisFreePDRSSObjects(&P, (struct _LIST_ENTRY *)&v33);
        }
      }
      else
      {
        v15 = -1073741811;
      }
      v33.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
      v33.m_State = Unlocked;
      v33.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v33);
      *((_BYTE *)a1 + 89) = 0;
    }
    KLockHolder::~KLockHolder(&v33);
  }
LABEL_43:
  v19 = a6;
LABEL_44:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddd(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v19, v13, v14, v29);
  return (unsigned int)v15;
}

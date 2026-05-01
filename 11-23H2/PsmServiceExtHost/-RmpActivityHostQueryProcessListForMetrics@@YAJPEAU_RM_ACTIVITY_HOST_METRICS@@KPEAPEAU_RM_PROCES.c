/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x18000D734
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000D5B8 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x18008228C (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  __int64 v5; // r14
  PVOID Heap; // rsi
  unsigned int v7; // ebx
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v8; // r8
  unsigned int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  int v22; // [rsp+60h] [rbp-49h]
  int v23; // [rsp+64h] [rbp-45h] BYREF
  int v24; // [rsp+68h] [rbp-41h] BYREF
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR **v25; // [rsp+70h] [rbp-39h]
  unsigned int *v26; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-29h] BYREF
  int *v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+ACh] [rbp+3h]

  v5 = a2;
  v25 = a3;
  v26 = a4;
  v22 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v23 = v5;
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16 * v5);
    v8 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
    if ( P )
    {
      v9 = 0;
      v10 = 0;
      if ( (_DWORD)v5 )
      {
        while ( 2 )
        {
          v11 = *((_QWORD *)a1 + 6);
          v12 = v22;
          while ( 1 )
          {
            v20 = v12;
            v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 40LL) + 72LL))(
                    v11 + 552,
                    *(unsigned int *)(v11 + 620),
                    v11 + 88,
                    *(unsigned int *)(v11 + 624),
                    *(_QWORD *)(v11 + 32),
                    *(_BYTE *)(v11 + 656) != 0 ? 4 : 0,
                    Heap,
                    &v20);
            if ( v13 >= 0 )
              break;
            if ( v13 != -2147483643 )
            {
              if ( (unsigned int)dword_1800DB1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB1E0, 1LL) )
              {
                v30 = 0;
                v28 = &v24;
                v24 = v14;
                v29 = 4;
                tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB1E0, (int)&dword_1800C432D, 0, 0, 3u, &v27);
              }
LABEL_14:
              v8 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
              goto LABEL_15;
            }
            Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v20);
            if ( !Heap )
            {
              v7 = -1073741801;
              goto LABEL_18;
            }
            v12 = v20;
            v22 = v20;
          }
          v16 = v20;
          if ( !v20 )
            goto LABEL_14;
          if ( v23 - v9 < v20 )
          {
            v7 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&P, &v23, v20 + v9);
            if ( v7 )
              goto LABEL_17;
            v16 = v20;
          }
          v17 = 0LL;
          if ( !v16 )
            goto LABEL_14;
          v8 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
          do
          {
            v18 = *((_DWORD *)Heap + 2 * v17);
            v17 = (unsigned int)(v17 + 1);
            v19 = v9++;
            v19 *= 2LL;
            *((_DWORD *)v8 + 2 * v19 + 2) = v18;
            *((_QWORD *)v8 + v19) = a1;
          }
          while ( (unsigned int)v17 < v20 );
LABEL_15:
          ++v10;
          a1 = (struct _RM_ACTIVITY_HOST_METRICS *)((char *)a1 + 64);
          if ( v10 < (unsigned int)v5 )
            continue;
          break;
        }
      }
      P = 0LL;
      v7 = 0;
      *v25 = v8;
      *v26 = v9;
    }
    else
    {
      v7 = -1073741801;
    }
LABEL_17:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_18:
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}

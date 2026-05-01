/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180039038
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180038B68 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x180083A4C (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  PVOID Heap; // rsi
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rbx
  unsigned int v11; // eax
  char v12; // cl
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v21; // r9d
  unsigned int v22; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  int v24; // [rsp+60h] [rbp-49h]
  unsigned int v25; // [rsp+64h] [rbp-45h] BYREF
  int v26; // [rsp+68h] [rbp-41h] BYREF
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR **v27; // [rsp+70h] [rbp-39h]
  unsigned int *v28; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+80h] [rbp-29h] BYREF
  int *v30; // [rsp+A0h] [rbp-9h]
  int v31; // [rsp+A8h] [rbp-1h]
  int v32; // [rsp+ACh] [rbp+3h]

  v27 = a3;
  v28 = a4;
  v24 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v25 = a2;
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
    v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
    if ( P )
    {
      v8 = 0;
      v9 = 0;
      if ( a2 )
      {
        while ( 2 )
        {
          v10 = *((_QWORD *)a1 + 6);
          v11 = v24;
          while ( 1 )
          {
            v22 = v11;
            v12 = *(_BYTE *)(v10 + 656);
            if ( v12 )
            {
              v13 = 8;
              if ( v12 == 1 )
                v13 = 4;
            }
            else
            {
              v13 = 0;
            }
            v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 40LL) + 72LL))(
                    v10 + 552,
                    *(unsigned int *)(v10 + 620),
                    v10 + 88,
                    *(unsigned int *)(v10 + 624),
                    *(_QWORD *)(v10 + 32),
                    v13,
                    Heap,
                    &v22);
            if ( v14 >= 0 )
              break;
            if ( v14 != -2147483643 )
            {
              if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
              {
                v32 = 0;
                v30 = &v26;
                v26 = v21;
                v31 = 4;
                tlgWriteTransfer_EventWriteTransfer(
                  (__int64)&dword_1800DC1E0,
                  (unsigned __int8 *)dword_1800C3A10,
                  0LL,
                  0LL,
                  3u,
                  &v29);
              }
LABEL_30:
              v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
              goto LABEL_13;
            }
            Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v22);
            if ( !Heap )
            {
              v19 = -1073741801;
              goto LABEL_16;
            }
            v11 = v22;
            v24 = v22;
          }
          v15 = v22;
          if ( !v22 )
            goto LABEL_30;
          if ( v25 - v8 < v22 )
          {
            v19 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&P, &v25, v22 + v8, (unsigned int)v14);
            if ( v19 )
              goto LABEL_15;
            v15 = v22;
          }
          v16 = 0LL;
          if ( !v15 )
            goto LABEL_30;
          v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
          do
          {
            v17 = *((_DWORD *)Heap + 2 * v16);
            v16 = (unsigned int)(v16 + 1);
            v18 = v8++;
            v18 *= 2LL;
            *((_DWORD *)v7 + 2 * v18 + 2) = v17;
            *((_QWORD *)v7 + v18) = a1;
          }
          while ( (unsigned int)v16 < v22 );
LABEL_13:
          ++v9;
          a1 = (struct _RM_ACTIVITY_HOST_METRICS *)((char *)a1 + 64);
          if ( v9 < a2 )
            continue;
          break;
        }
      }
      P = 0LL;
      v19 = 0;
      *v27 = v7;
      *v28 = v8;
    }
    else
    {
      v19 = -1073741801;
    }
LABEL_15:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_16:
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v19;
}

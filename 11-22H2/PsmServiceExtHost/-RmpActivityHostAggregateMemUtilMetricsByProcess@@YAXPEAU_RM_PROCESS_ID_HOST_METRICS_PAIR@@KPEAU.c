/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x18000D2C0
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000D5B8 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18000DA04 (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // r15
  int v8; // r12d
  __int64 v9; // rbx
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int16 v13; // cx
  __int16 v14; // [rsp+30h] [rbp-D0h]
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  unsigned int v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int16 v30; // [rsp+CEh] [rbp-32h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  __int64 *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  __int64 *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]

  v4 = a2;
  memset_0(v26, 0, 0x40uLL);
  v8 = 0;
  if ( (a4 & 4) != 0 )
    v8 = 8;
  if ( (a4 & 8) != 0 )
    v8 |= 1u;
  if ( (a4 & 0x20) != 0 )
    v8 |= 0x40u;
  v9 = 0LL;
  if ( (_DWORD)v4 )
  {
    v16 = a4 & 4;
    v19 = v4;
    LOWORD(v15) = a4 & 0x20;
    v10 = (char *)a3 + 4;
    v14 = v30;
    do
    {
      if ( *(_QWORD *)a1 != v9 )
      {
        if ( v9 )
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v26);
        memset_0(v26, 0, 0x40uLL);
        v9 = *(_QWORD *)a1;
        v14 = a4;
        v30 = a4;
      }
      if ( (unsigned int)dword_1800DB1E0 > 5 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
      {
        v21 = *(_QWORD *)(v10 + 44);
        v22 = *(_QWORD *)(v10 + 20);
        v23 = *(_QWORD *)(v10 + 12);
        v15 = *(_DWORD *)v10;
        v18 = *((_DWORD *)v10 - 1);
        v11 = *(_QWORD *)(v9 + 48);
        v17 = v8;
        v48 = 8LL;
        v46 = 8LL;
        v12 = *(_QWORD *)(v11 + 32);
        v47 = &v21;
        v45 = &v22;
        v43 = &v23;
        v41 = &v15;
        v39 = &v17;
        v37 = &v18;
        v35 = &v24;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800DB1E8;
        v24 = v12;
        v44 = 8LL;
        v42 = 4LL;
        v40 = 4LL;
        v38 = 4LL;
        v36 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
        v32 = &unk_1800C42D0;
        UserData.Reserved = 2;
        v33 = 124;
        v34 = 1;
        v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
      v13 = v14;
      if ( v16 )
      {
        if ( (*v10 & 8) != 0 )
        {
          v27 += *(_QWORD *)(v10 + 20);
        }
        else
        {
          v13 = v14 & 0xFFFB;
          v14 = v13;
          v30 = v13;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v10 & 1) != 0 )
        {
          v28 += *(_QWORD *)(v10 + 12);
        }
        else
        {
          v13 &= ~8u;
          v14 = v13;
          v30 = v13;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v10 & 0x40) != 0 )
        {
          v29 += *(_QWORD *)(v10 + 44);
        }
        else
        {
          v14 = v13 & 0xFFDF;
          v30 = v13 & 0xFFDF;
        }
      }
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v10 += 64;
      --v19;
    }
    while ( v19 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v26);
}

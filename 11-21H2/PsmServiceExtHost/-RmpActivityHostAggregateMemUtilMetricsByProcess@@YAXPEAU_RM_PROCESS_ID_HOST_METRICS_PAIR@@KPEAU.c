/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180038CE8
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180038B68 (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x180038FD4 (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rbx
  int v8; // ecx
  __int64 v9; // rsi
  int v10; // edx
  __int16 v11; // bx
  char *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // [rsp+34h] [rbp-CCh]
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  unsigned int v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int16 v31; // [rsp+CEh] [rbp-32h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  int v35; // [rsp+ECh] [rbp-14h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  int *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  int *v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 *v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]
  __int64 *v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  __int64 *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]

  v4 = a2;
  memset_0(v27, 0, 0x40uLL);
  v8 = (2 * (a4 & 4)) | 1;
  v9 = 0LL;
  if ( (a4 & 8) == 0 )
    v8 = 2 * (a4 & 4);
  v10 = v8 | 0x40;
  if ( (a4 & 0x20) == 0 )
    v10 = v8;
  v16 = v10;
  if ( (_DWORD)v4 )
  {
    v20 = v4;
    v11 = v31;
    v12 = (char *)a3 + 4;
    do
    {
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 != v9 )
      {
        if ( v9 )
        {
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v27);
          v13 = *(_QWORD *)a1;
        }
        memset_0(v27, 0, 0x40uLL);
        v10 = v16;
        v11 = a4;
        v31 = a4;
        v9 = v13;
      }
      if ( (unsigned int)dword_1800DC1E0 > 5 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
      {
        v22 = *(_QWORD *)(v12 + 44);
        v23 = *(_QWORD *)(v12 + 20);
        v24 = *(_QWORD *)(v12 + 12);
        v17 = *(_DWORD *)v12;
        v19 = *((_DWORD *)v12 - 1);
        v14 = *(_QWORD *)(v9 + 48);
        v18 = v10;
        v49 = 8LL;
        v47 = 8LL;
        v15 = *(_QWORD *)(v14 + 32);
        v48 = &v22;
        v46 = &v23;
        v44 = &v24;
        v42 = &v17;
        v40 = &v18;
        v38 = &v19;
        v36 = &v25;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800DC1E8;
        v25 = v15;
        v45 = 8LL;
        v43 = 4LL;
        v41 = 4LL;
        v39 = 4LL;
        v37 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
        v33 = &unk_1800C3993;
        UserData.Reserved = 2;
        v34 = 124;
        v35 = 1;
        v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v12 & 8) != 0 )
        {
          v28 += *(_QWORD *)(v12 + 20);
        }
        else
        {
          v11 &= ~4u;
          v31 = v11;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v12 & 1) != 0 )
        {
          v29 += *(_QWORD *)(v12 + 12);
        }
        else
        {
          v11 &= ~8u;
          v31 = v11;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v12 & 0x40) != 0 )
        {
          v30 += *(_QWORD *)(v12 + 44);
        }
        else
        {
          v11 &= ~0x20u;
          v31 = v11;
        }
      }
      v10 = v16;
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v12 += 64;
      --v20;
    }
    while ( v20 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v9, (struct _RM_ACTIVITY_HOST_METRICS *)v27);
}

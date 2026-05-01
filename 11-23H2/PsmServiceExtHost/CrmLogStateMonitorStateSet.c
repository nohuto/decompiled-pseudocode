/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x18000A2A0
 * Callers:
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180008FB0 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180009100 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x180009220 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x180009C70 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180009DF0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18000A100 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18003F540 (CrmStateMonitorPostResumeUsageCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorStateSet(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  unsigned __int16 v6; // r14
  SIZE_T v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-B8h]
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  UUID *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h] BYREF
  int v28; // [rsp+CCh] [rbp-34h]
  __int64 *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h] BYREF
  int v35; // [rsp+FCh] [rbp-4h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]

  v2 = (int)*a1;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  v5 = v4;
  v6 = v4;
  v7 = RtlCompareMemory((const void *)(a2 + 40), (const void *)a2, v4);
  if ( (unsigned int)v2 > 0x27 || (v8 = 0xC50001FFF8LL, !_bittest64(&v8, v2)) || *(_DWORD *)(a2 + 96) || v7 == v5 )
  {
    if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 8) != 0 )
    {
      v7 = qword_1800DB268 & 8;
      if ( v7 == qword_1800DB268 )
      {
        v20 = &Uuid;
        v27 = v6;
        v22 = &v10;
        v34 = v6;
        v24 = &v27;
        v12 = *(_QWORD *)(a2 + 88);
        v29 = &v12;
        v31 = &v34;
        v11 = *(_QWORD *)(a2 + 80);
        v36 = &v11;
        v21 = 16LL;
        v10 = v2;
        v23 = 4LL;
        v25 = 2LL;
        v26 = a2 + 40;
        v28 = 0;
        v30 = 8LL;
        v32 = 2LL;
        v33 = a2;
        v35 = 0;
        v37 = 8LL;
        LODWORD(v7) = tlgWriteTransfer_EventWriteTransfer(
                        (int)&dword_1800DB250,
                        (int)&dword_1800BEE84,
                        0,
                        0,
                        0xAu,
                        &UserData);
      }
    }
  }
  else if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 0x400000000008LL) != 0 )
  {
    LODWORD(v7) = qword_1800DB268 & 8;
    if ( (qword_1800DB268 & 0x400000000008LL) == qword_1800DB268 )
    {
      EventDescriptor.Keyword = 0x400000000008LL;
      v20 = &Uuid;
      v22 = &v10;
      v27 = v6;
      v24 = &v27;
      v14 = *(_QWORD *)(a2 + 88);
      v29 = &v14;
      v31 = &v34;
      v11 = *(_QWORD *)(a2 + 80);
      v36 = &v11;
      v38 = &v12;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800DB258;
      v34 = v6;
      v21 = 16LL;
      v10 = v2;
      v23 = 4LL;
      v25 = 2LL;
      v26 = a2 + 40;
      v28 = 0;
      v30 = 8LL;
      v32 = 2LL;
      v33 = a2;
      v35 = 0;
      v37 = 8LL;
      v12 = 0x2000000LL;
      v39 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800DB258;
      v17 = &unk_1800BF15B;
      UserData.Reserved = 2;
      v18 = 112;
      v19 = 1;
      v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v7) = EventWriteTransfer(qword_1800DB270, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return v7;
}

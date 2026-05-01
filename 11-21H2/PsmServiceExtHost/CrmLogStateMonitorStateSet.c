/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x18002EFA0
 * Callers:
 *     CrmStateMonitorStateSet @ 0x18002E9A4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x18002EA80 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18002EC00 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18002ED70 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorGPUUsageTimerCallback @ 0x18003B7A0 (CrmStateMonitorGPUUsageTimerCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18003B8F0 (CrmStateMonitorSebCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorStateSet(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r15
  unsigned __int16 v8; // r14
  SIZE_T v9; // rax
  __int64 v10; // rdx
  unsigned __int8 *v11; // rdx
  ULONG v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  _DWORD *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  _DWORD v26[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  _DWORD *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  _DWORD v32[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  v2 = (int)*a1;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  v5 = v4;
  v7 = v6 + 16;
  v8 = v4;
  v9 = RtlCompareMemory((const void *)(v6 + 16), (const void *)v6, v4);
  if ( (unsigned int)v2 > 0x27 || (v10 = 0xC50001FFF8LL, !_bittest64(&v10, v2)) || *(_DWORD *)(a2 + 48) || v9 == v5 )
  {
    if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 8) != 0 )
    {
      v9 = qword_1800DC268 & 8;
      if ( v9 == qword_1800DC268 )
      {
        v19 = &Uuid;
        v11 = (unsigned __int8 *)&dword_1800BDF70;
        v21 = &v14;
        v23 = v26;
        v16 = *(_QWORD *)(a2 + 40);
        v27 = &v16;
        v29 = v32;
        v15 = *(_QWORD *)(a2 + 32);
        v33 = &v15;
        v13 = 10;
        goto LABEL_14;
      }
    }
  }
  else if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 0x400000000008LL) != 0 )
  {
    LODWORD(v9) = qword_1800DC268 & 8;
    if ( (qword_1800DC268 & 0x400000000008LL) == qword_1800DC268 )
    {
      v16 = 0x2000000LL;
      v19 = &Uuid;
      v11 = (unsigned __int8 *)&unk_1800BE23C;
      v36 = 8LL;
      v21 = &v14;
      v23 = v26;
      v17 = *(_QWORD *)(a2 + 40);
      v27 = &v17;
      v29 = v32;
      v15 = *(_QWORD *)(a2 + 32);
      v33 = &v15;
      v35 = &v16;
      v13 = 11;
LABEL_14:
      v26[0] = v8;
      v32[0] = v8;
      v25 = v7;
      v24 = 2LL;
      v22 = 4LL;
      v14 = v2;
      v20 = 16LL;
      v26[1] = 0;
      v28 = 8LL;
      v30 = 2LL;
      v31 = a2;
      v32[1] = 0;
      v34 = 8LL;
      LODWORD(v9) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v11, 0LL, 0LL, v13, &v18);
    }
  }
  return v9;
}

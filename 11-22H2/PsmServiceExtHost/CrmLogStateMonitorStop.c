/*
 * XREFs of CrmLogStateMonitorStop @ 0x180008EE0
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmLogStateMonitorIsTelemetryState @ 0x180008F7C (CrmLogStateMonitorIsTelemetryState.c)
 *     CrmStateMonitorStateSizeGet @ 0x18000A5A4 (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogStateMonitorStop(unsigned int *a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r10
  unsigned __int16 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rdx
  const int *v10; // rdx
  __int64 v11; // rdx
  ULONG v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  int *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  _DWORD *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  _DWORD v25[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  _DWORD *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  _DWORD v31[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]

  CrmStateMonitorStateSizeGet(*a1);
  v2 = MEMORY[0x7FFE0008];
  result = CrmLogStateMonitorIsTelemetryState(v1);
  if ( !(_DWORD)result )
  {
    if ( (unsigned int)dword_1800DB250 <= 5 )
      return result;
    result = tlgKeywordOn(&dword_1800DB250, 8LL);
    if ( !(_BYTE)result )
      return result;
    v11 = *(_QWORD *)(v6 + 40);
    v18 = &Uuid;
    v20 = &v13;
    v22 = v25;
    v15 = *(_QWORD *)(v6 + 48);
    v26 = &v15;
    v28 = v31;
    v32 = &v14;
    v24 = v11;
    v30 = v11;
    v10 = &dword_1800BF108;
    v12 = 10;
    v27 = v4;
    v33 = v4;
LABEL_9:
    v25[0] = v7;
    v31[0] = v7;
    v13 = v5;
    v23 = 2LL;
    v21 = 4LL;
    v19 = 16LL;
    v25[1] = 0;
    v29 = 2LL;
    v31[1] = 0;
    v14 = v2;
    return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)v10, 0, 0, v12, &v17);
  }
  if ( (unsigned int)dword_1800DB250 > 5 )
  {
    result = tlgKeywordOn(&dword_1800DB250, 0x400000000008LL);
    if ( (_BYTE)result )
    {
      v9 = *(_QWORD *)(v8 + 40);
      v18 = &Uuid;
      v20 = &v13;
      v22 = v25;
      v16 = *(_QWORD *)(v8 + 48);
      v26 = &v16;
      v28 = v31;
      v32 = &v14;
      v34 = &v15;
      v24 = v9;
      v30 = v9;
      v10 = (const int *)&unk_1800BEF10;
      v12 = 11;
      v27 = 8LL;
      v33 = 8LL;
      v15 = 0x2000000LL;
      v35 = 8LL;
      goto LABEL_9;
    }
  }
  return result;
}

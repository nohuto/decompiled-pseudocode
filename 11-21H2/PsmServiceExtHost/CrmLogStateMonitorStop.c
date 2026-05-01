/*
 * XREFs of CrmLogStateMonitorStop @ 0x180035F24
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18002F2DC (CrmLogStateMonitorIsTelemetryState.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(int *a1)
{
  unsigned int v1; // r10d
  unsigned __int16 v2; // bx
  __int64 v3; // rdi
  int IsTelemetryState; // eax
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // r11
  __int64 v8; // r11
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rdx
  ULONG v13; // [rsp+28h] [rbp-E0h]
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  __int64 *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  _DWORD *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int64 v25; // [rsp+A8h] [rbp-60h]
  _DWORD v26[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  _DWORD *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 v31; // [rsp+D8h] [rbp-30h]
  _DWORD v32[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]

  v2 = CrmStateMonitorStateSizeGet(*a1);
  v3 = MEMORY[0x7FFE0008];
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v1);
  if ( !IsTelemetryState )
  {
    if ( (unsigned int)dword_1800DC250 <= 5 )
      return IsTelemetryState;
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800DC250, 8LL);
    if ( !(_BYTE)IsTelemetryState )
      return IsTelemetryState;
    v11 = *(_QWORD *)(v7 + 40);
    v19 = &Uuid;
    v21 = &v14;
    v23 = v26;
    v16 = *(_QWORD *)(v7 + 48);
    v27 = &v16;
    v29 = v32;
    v33 = &v15;
    v25 = v11;
    v31 = v11;
    v10 = (unsigned __int8 *)&dword_1800BE1D4;
    v13 = 10;
    v28 = v5;
    v34 = v5;
LABEL_9:
    v26[0] = v2;
    v32[0] = v2;
    v24 = 2LL;
    v22 = 4LL;
    LODWORD(v14) = v6;
    v20 = 16LL;
    v26[1] = 0;
    v30 = 2LL;
    v32[1] = 0;
    v15 = v3;
    LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v10, 0LL, 0LL, v13, &v18);
    return IsTelemetryState;
  }
  if ( (unsigned int)dword_1800DC250 > 5 )
  {
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800DC250, 0x400000000008LL);
    if ( (_BYTE)IsTelemetryState )
    {
      v9 = *(_QWORD *)(v8 + 40);
      v19 = &Uuid;
      v21 = &v14;
      v23 = v26;
      v17 = *(_QWORD *)(v8 + 48);
      v27 = &v17;
      v29 = v32;
      v33 = &v15;
      v35 = &v16;
      v25 = v9;
      v31 = v9;
      v10 = (unsigned __int8 *)&unk_1800BDFDC;
      v13 = 11;
      v28 = 8LL;
      v34 = 8LL;
      v16 = 0x2000000LL;
      v36 = 8LL;
      goto LABEL_9;
    }
  }
  return IsTelemetryState;
}

/*
 * XREFs of CrmLogStateMonitorRundown @ 0x18002E854
 * Callers:
 *     CrmGlobalsRundown @ 0x18002E744 (CrmGlobalsRundown.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002F078 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x18002F2DC (CrmLogStateMonitorIsTelemetryState.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 */

char __fastcall CrmLogStateMonitorRundown(const void **a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r9d
  int IsTelemetryState; // eax
  int v7; // r9d
  unsigned __int16 v8; // r10
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdx
  ULONG v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+98h] [rbp-70h] BYREF
  UUID *v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h]
  __int64 *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  _DWORD *v25; // [rsp+D8h] [rbp-30h]
  __int64 v26; // [rsp+E0h] [rbp-28h]
  __int128 *v27; // [rsp+E8h] [rbp-20h]
  _DWORD v28[2]; // [rsp+F0h] [rbp-18h] BYREF
  char *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  _DWORD *v31; // [rsp+108h] [rbp+0h]
  __int64 v32; // [rsp+110h] [rbp+8h]
  __int128 *v33; // [rsp+118h] [rbp+10h]
  _DWORD v34[2]; // [rsp+120h] [rbp+18h] BYREF
  __int128 *v35; // [rsp+128h] [rbp+20h]
  __int64 v36; // [rsp+130h] [rbp+28h]
  char *v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+140h] [rbp+38h]

  RtlAcquireSRWLockExclusive(a1 + 1);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v2 = *(unsigned int *)a1;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3 = CrmStateMonitorStateSizeGet(v2);
  memcpy_0(&v17, a1[5], v3);
  memcpy_0(&v16, a1[5], v3);
  *((_QWORD *)&v18 + 1) = a1[6];
  v4 = MEMORY[0x7FFE0008];
  a1[6] = (const void *)MEMORY[0x7FFE0008];
  *((_DWORD *)a1 + 4) = 0;
  *(_QWORD *)&v18 = v4;
  RtlReleaseSRWLockExclusive(a1 + 1);
  CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  IsTelemetryState = CrmLogStateMonitorIsTelemetryState(v5);
  if ( IsTelemetryState )
  {
    if ( (unsigned int)dword_1800DC250 <= 5 )
      return IsTelemetryState;
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800DC250, 0x400000000008LL);
    if ( !(_BYTE)IsTelemetryState )
      return IsTelemetryState;
    v30 = 8LL;
    v21 = &Uuid;
    v10 = (unsigned __int8 *)&unk_1800BE054;
    v36 = 8LL;
    v23 = &v13;
    v25 = v28;
    v27 = &v17;
    v15 = *((_QWORD *)&v18 + 1);
    v29 = (char *)&v15;
    v31 = v34;
    v33 = &v16;
    *(_QWORD *)&v14 = v18;
    v35 = &v14;
    v37 = (char *)&v14 + 8;
    v12 = 11;
    *((_QWORD *)&v14 + 1) = 0x2000000LL;
    v38 = 8LL;
LABEL_9:
    v28[0] = v8;
    v34[0] = v8;
    LODWORD(v13) = v7;
    v22 = 16LL;
    v26 = 2LL;
    v24 = 4LL;
    v28[1] = 0;
    v32 = 2LL;
    v34[1] = 0;
    LOBYTE(IsTelemetryState) = tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC250, v10, 0LL, 0LL, v12, &v20);
    return IsTelemetryState;
  }
  if ( (unsigned int)dword_1800DC250 > 5 )
  {
    LOBYTE(IsTelemetryState) = tlgKeywordOn((__int64)&dword_1800DC250, 8LL);
    if ( (_BYTE)IsTelemetryState )
    {
      v30 = v9;
      v21 = &Uuid;
      v23 = &v13;
      v25 = v28;
      v27 = &v17;
      v29 = (char *)&v14 + 8;
      v31 = v34;
      v33 = &v16;
      v14 = v18;
      v35 = &v14;
      v36 = v9;
      v10 = (unsigned __int8 *)&dword_1800BE164;
      v12 = 10;
      goto LABEL_9;
    }
  }
  return IsTelemetryState;
}

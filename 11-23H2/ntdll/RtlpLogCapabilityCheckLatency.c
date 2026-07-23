/*
 * XREFs of RtlpLogCapabilityCheckLatency @ 0x18007CBC0
 * Callers:
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800328D0 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007CD5C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int16 __fastcall RtlpLogCapabilityCheckLatency(_QWORD *a1, _QWORD *a2, char a3, char a4, char a5, char a6)
{
  struct _PEB *v6; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  char v18; // [rsp+38h] [rbp-49h] BYREF
  char v19; // [rsp+39h] [rbp-48h] BYREF
  char v20; // [rsp+3Ah] [rbp-47h] BYREF
  char v21; // [rsp+3Bh] [rbp-46h] BYREF
  __int64 v22; // [rsp+40h] [rbp-41h] BYREF
  _EVENT_DATA_DESCRIPTOR v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+74h] [rbp-Dh]
  char *v27; // [rsp+78h] [rbp-9h]
  int v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+84h] [rbp+3h]
  char *v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+90h] [rbp+Fh]
  int v32; // [rsp+94h] [rbp+13h]
  char *v33; // [rsp+98h] [rbp+17h]
  int v34; // [rsp+A0h] [rbp+1Fh]
  int v35; // [rsp+A4h] [rbp+23h]
  char *v36; // [rsp+A8h] [rbp+27h]
  int v37; // [rsp+B0h] [rbp+2Fh]
  int v38; // [rsp+B4h] [rbp+33h]

  v6 = NtCurrentPeb();
  if ( v6->ProcessHeap )
  {
    LOWORD(v6) = RtlRunOnceExecuteOnce(&RtlpCapChkTelemetryRunOnceCtx, RtlpCapChkTelemetryRunOnce, 0LL, 0LL);
    if ( a1 )
    {
      if ( a2 )
      {
        if ( *a1 )
        {
          if ( *a2 )
          {
            if ( RtlpPerformanceCounterFrequency )
            {
              LOWORD(v6) = _InterlockedDecrement16(&TelemetryEventThrottle);
              if ( !(_WORD)v6 )
              {
                if ( (unsigned int)dword_1801813F8 > 5
                  && (unsigned __int8)tlgKeywordOn(&dword_1801813F8, 0x200000000000LL, v11, v12) )
                {
                  v16 = *a2 - *a1;
                  v26 = 0;
                  v29 = 0;
                  v32 = 0;
                  v35 = 0;
                  v38 = 0;
                  v25 = 8;
                  v18 = a3;
                  v19 = a4;
                  v22 = 1000000 * v16 / RtlpPerformanceCounterFrequency;
                  v24 = &v22;
                  v27 = &v18;
                  v30 = &v19;
                  v20 = a5;
                  v33 = &v20;
                  v21 = a6;
                  v36 = &v21;
                  v28 = 1;
                  v31 = 1;
                  v34 = 1;
                  v37 = 1;
                  tlgWriteTransfer_EtwEventWriteTransfer(v13, (unsigned __int8 *)dword_18014E1B7, v14, v15, 7u, &v23);
                }
                LOWORD(v6) = TelemetryEventThrottle;
                TelemetryEventThrottle = 100;
              }
            }
          }
        }
      }
    }
  }
  return (__int16)v6;
}

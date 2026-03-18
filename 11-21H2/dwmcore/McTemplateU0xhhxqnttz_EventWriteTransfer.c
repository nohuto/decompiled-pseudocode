/*
 * XREFs of McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x1801D6660
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xhhxqnttz_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        char a10,
        char a11,
        const wchar_t *a12)
{
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-99h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-89h]
  __int64 v18; // [rsp+48h] [rbp-81h]
  __int16 *v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  char *v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  char *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  char *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  char *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  char *v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  const wchar_t *v33; // [rsp+C0h] [rbp-9h]
  int v34; // [rsp+C8h] [rbp-1h]
  int v35; // [rsp+CCh] [rbp+3h]
  __int64 v36; // [rsp+100h] [rbp+37h] BYREF
  __int16 v37; // [rsp+108h] [rbp+3Fh] BYREF

  v37 = a4;
  v36 = a3;
  v12 = a12;
  v17 = &v36;
  v18 = 8LL;
  v19 = &v37;
  v21 = &a5;
  v23 = &a6;
  v25 = &a7;
  v27 = a9;
  v29 = &a10;
  v31 = &a11;
  v20 = 2LL;
  v22 = 2LL;
  v24 = 8LL;
  v26 = 4LL;
  v28 = 8LL;
  v30 = 4LL;
  v32 = 4LL;
  if ( a12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v34 = v14;
  v35 = 0;
  if ( !a12 )
    v12 = L"NULL";
  v33 = v12;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_BEGINAPI_EVENT,
           0LL,
           0xAu,
           &v16);
}

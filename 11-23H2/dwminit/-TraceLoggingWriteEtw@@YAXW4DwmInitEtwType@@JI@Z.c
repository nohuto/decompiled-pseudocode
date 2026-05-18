/*
 * XREFs of ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000B97C
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000A7C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000AB98 (-FallBackToBDD@@YA_NXZ.c)
 *     DwmpNotifyUserLogoff @ 0x18000C370 (DwmpNotifyUserLogoff.c)
 *     DwmpNotifyUserLogon @ 0x18000C3E0 (DwmpNotifyUserLogon.c)
 *     DwmpTerminateSessionProcess @ 0x18000CA60 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001348 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 */

ULONG __fastcall TraceLoggingWriteEtw(int a1, int a2, int a3)
{
  ULONG result; // eax
  int v4; // [rsp+30h] [rbp-59h] BYREF
  int v5; // [rsp+34h] [rbp-55h] BYREF
  int v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  GUID *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  int *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  int *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  GUID *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_180016000 > 4 )
  {
    v6 = a1;
    v19 = &gDwmInitTargetAppSessionGuid;
    v4 = a3;
    v17 = &v4;
    v5 = a2;
    v15 = &v5;
    v18 = 4LL;
    v13 = &v6;
    v11 = &gDwmInitTelemetryActivityId;
    v9 = &v7;
    v16 = 4LL;
    v14 = 4LL;
    v10 = 8LL;
    v7 = 0x1000000LL;
    v20 = 16LL;
    v12 = 16LL;
    return tlgWriteTransfer_EventWriteTransfer(
             (__int64)&dword_180016000,
             (unsigned __int8 *)dword_1800124DF,
             0LL,
             0LL,
             8u,
             &v8);
  }
  return result;
}

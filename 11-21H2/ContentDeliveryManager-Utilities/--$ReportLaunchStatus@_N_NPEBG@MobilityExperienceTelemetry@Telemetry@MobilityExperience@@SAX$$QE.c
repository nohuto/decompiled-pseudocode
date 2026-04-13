/*
 * XREFs of ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x180074FC4
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18007937C (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001C98 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18003C030 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
        char *a1,
        char *a2,
        const WCHAR **a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r10
  const WCHAR *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  char v12; // [rsp+38h] [rbp-19h] BYREF
  char v13; // [rsp+39h] [rbp-18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-9h] BYREF
  char *v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  char *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  const WCHAR *v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]

  v6 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v7 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = *a3;
      v12 = *a2;
      v13 = *a1;
      if ( v8 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v10 = 2 * v9 + 2;
      }
      else
      {
        v8 = &Src;
        v10 = 2;
      }
      v19 = v8;
      v17 = &v12;
      v20 = v10;
      v15 = &v13;
      v21 = 0;
      v18 = 1LL;
      v16 = 1LL;
      LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180191D07, 0LL, 0LL, 5u, &v14);
    }
  }
  return (int)v6;
}

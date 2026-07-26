/*
 * XREFs of ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C011ECDC
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0053870 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C011EE58 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1C011EEFC (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ndisPublishSleepStudyNapsCustomData @ 0x1C011EFE4 (ndisPublishSleepStudyNapsCustomData.c)
 *     ndisPublishSleepStudyNapsOidCustomData @ 0x1C011F1F8 (ndisPublishSleepStudyNapsOidCustomData.c)
 *     ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x1C011F30C (ndisPublishSleepStudyNicAutoPowerSaverCustomData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

void __fastcall ndisPublishSleepStudyCustomData(__int64 a1, const struct _GUID *a2, const wchar_t *a3, ULONGLONG a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-C0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  const struct _GUID *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  const wchar_t *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _OWORD *v25; // [rsp+B0h] [rbp-50h]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]
  __int64 *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _OWORD v30[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int16 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+130h] [rbp+30h] BYREF

  v33 = a1;
  *(_QWORD *)&String.Length = 2752512LL;
  v31 = 0LL;
  v32 = 0;
  v9 = 1;
  String.Buffer = (wchar_t *)v30;
  memset(v30, 0, sizeof(v30));
  if ( RtlInt64ToUnicodeString(a4, 0xAu, &String) >= 0 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v10 = v7;
    do
      ++v6;
    while ( *((_WORD *)v30 + v6) );
    v8 = v33;
    v11 = v6;
    UserData.Ptr = (unsigned __int64)&v8;
    v14 = &v9;
    v18 = &v10;
    v21 = 2 * v7;
    *(_QWORD *)&UserData.Size = 1LL;
    v23 = &v11;
    v25 = v30;
    v26 = 2 * v6;
    v28 = &v33;
    v15 = 4LL;
    v16 = a2;
    v17 = 16LL;
    v19 = 4LL;
    v20 = a3;
    v22 = 0;
    v24 = 4LL;
    v27 = 0;
    v29 = 8LL;
    EtwWrite(SLEEPSTUDY_ETW_PROVIDER_Context, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, a2, 8u, &UserData);
  }
}

/*
 * XREFs of ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18002F234
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180017860 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001828 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A2EC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall TsSessionIdIsAudioInStandbyAllowed(DWORD SessionId)
{
  char v2; // di
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  struct TSSession *v4; // rbx
  int v5; // eax
  _DWORD *v6; // rcx
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  enum _USER_ACTIVITY_PRESENCE v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  struct TSSession *v14; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+68h] [rbp-A0h] BYREF
  struct TSSession **v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  struct _RTL_CRITICAL_SECTION **v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A4h] [rbp-64h]
  int *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B4h] [rbp-54h]
  int *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  enum _USER_ACTIVITY_PRESENCE *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  int *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  int *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]

  v2 = 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v3;
  if ( (int)TsSessionFromSessionId(SessionId, 0, &v14) < 0 )
    goto LABEL_12;
  v4 = v14;
  v5 = *((_DWORD *)v14 + 254);
  if ( v5 != 1 && *((_DWORD *)v14 + 253) )
    goto LABEL_9;
  if ( g_bLowPowerEpoch == 1 )
    goto LABEL_8;
  if ( v5 != 1 && *((_DWORD *)v14 + 253) )
    goto LABEL_9;
  if ( g_bApmSuspended == 1 )
  {
LABEL_8:
    v2 = 0;
  }
  else if ( v5 == 1 )
  {
    if ( g_bIsSystemAsleep == 1 )
      v2 = 0;
    goto LABEL_10;
  }
LABEL_9:
  g_bIsSystemAsleep = v5 != 0 ? g_bIsSystemAsleep : 0;
LABEL_10:
  v6 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v6 > 4u )
  {
    v8 = g_bIsSystemAsleep;
    v9 = g_bApmSuspended;
    v10 = g_bLowPowerEpoch;
    v11 = g_GlobalUserPresence;
    v12 = g_UserPresenceOnBoot;
    v13 = *((_DWORD *)v4 + 253);
    LODWORD(v15) = *((_DWORD *)v4 + 254);
    LODWORD(v14) = *(_DWORD *)v4;
    v38 = &v8;
    v39 = 4;
    v40 = 0;
    v35 = &v9;
    v36 = 4;
    v37 = 0;
    v32 = &v10;
    v33 = 4;
    v34 = 0;
    v29 = &v11;
    v30 = 4;
    v31 = 0;
    v26 = &v12;
    v27 = 4;
    v28 = 0;
    v23 = &v13;
    v24 = 4;
    v25 = 0;
    v20 = &v15;
    v21 = 4;
    v22 = 0;
    v17 = &v14;
    v18 = 4;
    v19 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_18005131C, 0LL, 0LL, 0xAu, &v16);
  }
LABEL_12:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}

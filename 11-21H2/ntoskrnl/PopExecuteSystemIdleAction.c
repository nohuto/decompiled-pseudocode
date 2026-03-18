/*
 * XREFs of PopExecuteSystemIdleAction @ 0x140752DA8
 * Callers:
 *     PopSystemIdleWorker @ 0x140752F30 (PopSystemIdleWorker.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopUpdatePdcSystemIdleState @ 0x140752ECC (PopUpdatePdcSystemIdleState.c)
 *     PopExecutePowerAction @ 0x1407FEC6C (PopExecutePowerAction.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExecuteSystemIdleAction(int a1, unsigned __int8 a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  unsigned int updated; // ebx
  bool v11; // zf
  REGHANDLE v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-59h]
  int v17; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-41h] BYREF
  int v19; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v20[4]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v21; // [rsp+68h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  int *v27; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]

  v3 = a2;
  v22 = 0LL;
  v21 = 0LL;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v7 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v7 )
    goto LABEL_12;
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        updated = -1073741811;
        goto LABEL_7;
      }
      v7 = 0LL;
      goto LABEL_6;
    }
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v16);
LABEL_12:
    LOBYTE(v7) = v3;
LABEL_6:
    updated = PopUpdatePdcSystemIdleState(v7);
    goto LABEL_7;
  }
  if ( a2 )
  {
    v20[2] = 0;
    *(_QWORD *)&v21 = 0x8000000007LL;
    v20[0] = 3;
    v20[1] = -2147483612;
    PopAcquirePolicyLock(0);
    PopExecutePowerAction((unsigned int)&v21, 0, (unsigned int)v20, 5, 1);
    PopReleasePolicyLock(v15, v14);
  }
  updated = 0;
LABEL_7:
  v11 = PopDiagHandleRegistered == 0;
  *(_QWORD *)a3 = v6;
  *(_DWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 12) = v3;
  *(_DWORD *)(a3 + 16) = updated;
  v18 = updated;
  v19 = a1;
  if ( !v11 )
  {
    v12 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER) )
    {
      UserData.Reserved = 0;
      v26 = 0;
      v29 = 0;
      UserData.Ptr = (ULONGLONG)&v17;
      UserData.Size = 4;
      v24 = &v18;
      v27 = &v19;
      v25 = 4;
      v28 = 4;
      v17 = v3;
      EtwWrite(v12, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER, 0LL, 3u, &UserData);
    }
  }
  return updated;
}

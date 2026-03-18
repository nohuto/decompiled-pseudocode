/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0184BC0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01DABA0 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C01E9C60 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0003C90 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0184EC4 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0184F64 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C03030B0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const WCHAR *v21; // rdx
  int v22; // eax
  HANDLE v23; // r8
  int v24; // eax
  struct _UNICODE_STRING *UserRegistryPath; // rax
  HANDLE v27; // r8
  int v28; // eax
  HANDLE v29; // rdx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // eax
  const struct _UNICODE_STRING *v34; // r9
  unsigned int *v35; // [rsp+20h] [rbp-B9h]
  unsigned int v36; // [rsp+28h] [rbp-B1h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE v38; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING v39; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  struct _UNICODE_STRING v41; // [rsp+80h] [rbp-59h] BYREF
  __int64 v42; // [rsp+90h] [rbp-49h] BYREF
  int v43; // [rsp+98h] [rbp-41h]
  const WCHAR *v44; // [rsp+A0h] [rbp-39h]
  struct _UNICODE_STRING *v45; // [rsp+A8h] [rbp-31h]
  int v46; // [rsp+B0h] [rbp-29h]
  int *v47; // [rsp+B8h] [rbp-21h]
  int v48; // [rsp+C0h] [rbp-19h]
  __int64 v49; // [rsp+C8h] [rbp-11h]
  int v50; // [rsp+D0h] [rbp-9h]
  __int128 v51; // [rsp+D8h] [rbp-1h]
  __int128 v52; // [rsp+E8h] [rbp+Fh]
  __int64 v53; // [rsp+F8h] [rbp+1Fh]
  int v54; // [rsp+150h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+7Fh] BYREF

  v54 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v41 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  DestinationString = 0LL;
  v39 = 0LL;
  LODWORD(v7) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v41, a4);
  if ( (int)v7 < 0 )
    goto LABEL_14;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v9 )
  {
    v5 = 0LL;
    goto LABEL_38;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  v12 = SessionDataForSpecifiedSession;
  v5 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
LABEL_38:
    v31 = PsGetCurrentProcessSessionId(v8);
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v31, -1073741811LL);
    v33 = PsGetCurrentProcessSessionId(v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v33,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_16;
  }
  if ( DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0)->Buffer )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = 863LL;
    UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(v12, 0);
    v21 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
    DestinationString = *UserRegistryPath;
  }
  else
  {
    if ( DXGSESSIONDATA::GetUserRegistryPath(v5, 0)->Length )
    {
      WdLogSingleEntry1(1LL, 854LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgSessionData->GetUserRegistryPath()->Length == 0",
        854LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = 855LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    v21 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
  }
  RtlInitUnicodeString(&v39, v21);
  v22 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &DestinationString, 0LL);
  v7 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry1(2LL, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to open HKey root handle (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v23 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 883LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 883LL, 0LL, 0LL, 0LL, 0LL);
      v23 = Handle;
    }
    v24 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v23, &v39, 0LL);
    v7 = v24;
    if ( v24 >= 0 )
    {
      v27 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry1(1LL, 899LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 899LL, 0LL, 0LL, 0LL, 0LL);
        v27 = KeyHandle;
      }
      v28 = OpenRegistrySubkey(&v38, 0xF003Fu, v27, &v41, 0LL);
      v7 = v28;
      if ( v28 >= 0 )
      {
        v29 = v38;
        if ( !v38 )
        {
          WdLogSingleEntry1(1LL, 915LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 915LL, 0LL, 0LL, 0LL, 0LL);
          v29 = v38;
        }
        v42 = 0LL;
        v43 = 288;
        v44 = L"DpiValue";
        v45 = a4;
        v47 = &v54;
        v46 = 67108868;
        v53 = 0LL;
        v48 = 4;
        v49 = 0LL;
        v50 = 0;
        v51 = 0LL;
        v52 = 0LL;
        v30 = RtlQueryRegistryValuesEx(0x40000000LL, v29, &v42, 0LL, 0LL);
        v7 = v30;
        v5 = v12;
        if ( v30 < 0 )
        {
          WdLogSingleEntry1(2LL, v30);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to read registry values. (Status = 0x%I64x, SubKeyHandle2 = 0x%I64x, QueryTable = 0x%I64x)",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_14;
      }
    }
    WdLogSingleEntry1(4LL, v7);
  }
  v5 = v12;
LABEL_14:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)&a4->Length = v54;
  }
LABEL_16:
  if ( a3 && (int)v7 >= 0 && v5 && DXGSESSIONDATA::GetUserRegistryPath(v5, 0)->Buffer )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v39, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v35) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(
      &DestinationString,
      &v39,
      &v41,
      v34,
      (const unsigned __int16 *const)v35,
      v36);
  }
  operator delete(v41.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v38 )
    ZwClose(v38);
  return (unsigned int)v7;
}

/*
 * XREFs of TelSetLocalTelemetrySetting @ 0x180001700
 * Callers:
 *     <none>
 * Callees:
 *     TelGetLocalAllowTelemetryRegPath @ 0x180001510 (TelGetLocalAllowTelemetryRegPath.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 *     McGenEventUnregister_EventUnregister @ 0x180002D60 (McGenEventUnregister_EventUnregister.c)
 *     McTemplateU0zzzzztzzzzdz_EventWriteTransfer @ 0x180002DF8 (McTemplateU0zzzzztzzzzdz_EventWriteTransfer.c)
 *     McGenEventRegister_EventRegister @ 0x1800030EC (McGenEventRegister_EventRegister.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004360 (__security_check_cookie.c)
 */

__int64 __fastcall TelSetLocalTelemetrySetting(int a1, void *a2, void *a3)
{
  const WCHAR *LocalAllowTelemetryRegPath; // rax
  LSTATUS v6; // edi
  int active; // r15d
  signed int v8; // ebx
  int v9; // eax
  LSTATUS v10; // eax
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  void *v14; // rdx
  void *v15; // r8
  void *v16; // r9
  unsigned int v17; // r8d
  int lpData; // [rsp+20h] [rbp-69h]
  BYTE Data[4]; // [rsp+70h] [rbp-19h] BYREF
  int v21; // [rsp+78h] [rbp-11h] BYREF
  int v22; // [rsp+7Ch] [rbp-Dh] BYREF
  HKEY hKey; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v24[4]; // [rsp+88h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  *(_DWORD *)Data = a1;
  LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
  v6 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, LocalAllowTelemetryRegPath, 0, 0LL, 0, 0x20106u, 0LL, &hKey, 0LL);
  active = TelEvaluateActiveSettingAuthority(&v22, &v21);
  if ( v6 )
  {
    v8 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v8 = v6;
  }
  else
  {
    v9 = *(_DWORD *)Data;
    if ( *(_DWORD *)Data == 2 )
      v9 = 1;
    *(_DWORD *)Data = v9;
    v10 = RegSetValueExW(hKey, L"AllowTelemetry", 0, 4u, Data, 4u);
    v8 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v8 = v10;
  }
  McGenEventRegister_EventRegister();
  v24[0] = L"Disabled";
  v24[1] = L"Core";
  v24[2] = L"General (deprecated)";
  v24[3] = L"Diagnostic";
  if ( active < 0 )
    v12 = L"N/A";
  else
    v12 = (const wchar_t *)v24[v22];
  if ( v8 < 0 )
  {
    if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 2) == 0 )
      goto LABEL_22;
    v13 = v21 != 2;
    v14 = &DiagnosticDataChangedFailureEvent;
  }
  else
  {
    if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 1) == 0 )
      goto LABEL_22;
    v13 = v24[*(int *)Data];
    v14 = &DiagnosticDataChangedSuccessEvent;
  }
  v15 = &unk_180006ED0;
  v16 = &unk_180006ED0;
  if ( a3 )
    v16 = a3;
  if ( a2 )
    v15 = a2;
  McTemplateU0zzzzztzzzzdz_EventWriteTransfer(v13, v14, v15, v16);
LABEL_22:
  McGenEventUnregister_EventUnregister(v11, v12);
  if ( hKey )
    RegCloseKey(hKey);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1EE, v17, (const char *)(unsigned int)v8, lpData);
  return (unsigned int)v8;
}

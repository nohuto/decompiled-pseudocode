/*
 * XREFs of TelSetLocalTelemetrySetting @ 0x1800018B0
 * Callers:
 *     <none>
 * Callees:
 *     TelEvaluateActiveSettingAuthority @ 0x1800028F0 (TelEvaluateActiveSettingAuthority.c)
 *     McGenEventUnregister_EventUnregister @ 0x18000377C (McGenEventUnregister_EventUnregister.c)
 *     McTemplateU0zzzzztzzzzdz_EventWriteTransfer @ 0x180003814 (McTemplateU0zzzzztzzzzdz_EventWriteTransfer.c)
 *     McGenEventRegister_EventRegister @ 0x180003B0C (McGenEventRegister_EventRegister.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 */

__int64 __fastcall TelSetLocalTelemetrySetting(unsigned int a1, void *a2, void *a3)
{
  int active; // eax
  int v7; // ebx
  int v8; // edi
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rcx
  void *v12; // rdx
  void *v13; // r8
  void *v14; // r9
  unsigned int v15; // r8d
  int v17; // [rsp+20h] [rbp-59h]
  const wchar_t *v18; // [rsp+28h] [rbp-51h]
  const wchar_t *v19; // [rsp+30h] [rbp-49h]
  BOOL v20; // [rsp+38h] [rbp-41h]
  const wchar_t *v21; // [rsp+40h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-9h] BYREF
  int v23; // [rsp+74h] [rbp-5h] BYREF
  _QWORD v24[4]; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  active = TelEvaluateActiveSettingAuthority(&v23, &v22);
  v17 = (int)a3;
  if ( a1 == 2 )
    a1 = 1;
  v7 = active;
  v8 = CPSSPutDwordSetting(0LL, 0LL, L"AllowTelemetry", a1);
  McGenEventRegister_EventRegister();
  v24[0] = L"Disabled";
  v24[1] = L"Core";
  v24[2] = L"General (deprecated)";
  v24[3] = L"Diagnostic";
  if ( v7 < 0 )
  {
    v10 = L"N/A";
  }
  else
  {
    v9 = v23;
    v10 = (const wchar_t *)v24[v23];
  }
  if ( v8 < 0 )
  {
    if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 2) == 0 )
      goto LABEL_16;
    v21 = v10;
    v11 = (const wchar_t *)(v22 != 2);
    v20 = v22 != 2;
    v19 = (const wchar_t *)v24[a1];
    v18 = v10;
    v12 = &DiagnosticDataChangedFailureEvent;
  }
  else
  {
    if ( (Microsoft_Windows_Privacy_Auditing_DiagnosticDataEnableBits & 1) == 0 )
      goto LABEL_16;
    v11 = (const wchar_t *)v24[a1];
    v21 = v11;
    v20 = v22 != 2;
    v19 = v11;
    v18 = v10;
    v12 = &DiagnosticDataChangedSuccessEvent;
  }
  v13 = &unk_180007270;
  v14 = &unk_180007270;
  if ( a3 )
    v14 = a3;
  if ( a2 )
    v13 = a2;
  McTemplateU0zzzzztzzzzdz_EventWriteTransfer(v11, v12, v13, v14, a3, v18, v19, v20, v21);
LABEL_16:
  McGenEventUnregister_EventUnregister(v9, v10);
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1D7, v15, (const char *)(unsigned int)v8, v17);
  return (unsigned int)v8;
}

/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x180072EB8
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800728C4 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x18007305C (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r8
  int v15; // ecx
  REGHANDLE v16; // rcx
  int v18; // [rsp+30h] [rbp-A9h] BYREF
  int v19; // [rsp+34h] [rbp-A5h] BYREF
  int v20; // [rsp+38h] [rbp-A1h] BYREF
  int v21; // [rsp+3Ch] [rbp-9Dh] BYREF
  int v22; // [rsp+40h] [rbp-99h] BYREF
  int v23; // [rsp+44h] [rbp-95h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-91h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-89h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-79h] BYREF
  void *v27; // [rsp+70h] [rbp-69h]
  int v28; // [rsp+78h] [rbp-61h]
  int v29; // [rsp+7Ch] [rbp-5Dh]
  _DWORD *v30; // [rsp+80h] [rbp-59h]
  __int64 v31; // [rsp+88h] [rbp-51h]
  int *v32; // [rsp+90h] [rbp-49h]
  __int64 v33; // [rsp+98h] [rbp-41h]
  int *v34; // [rsp+A0h] [rbp-39h]
  __int64 v35; // [rsp+A8h] [rbp-31h]
  int *v36; // [rsp+B0h] [rbp-29h]
  __int64 v37; // [rsp+B8h] [rbp-21h]
  int *v38; // [rsp+C0h] [rbp-19h]
  __int64 v39; // [rsp+C8h] [rbp-11h]
  int *v40; // [rsp+D0h] [rbp-9h]
  __int64 v41; // [rsp+D8h] [rbp-1h]
  int *v42; // [rsp+E0h] [rbp+7h]
  __int64 v43; // [rsp+E8h] [rbp+Fh]

  v12 = wil::details::static_lazy<StartMenuExperienceLogging>::get(
          a1,
          _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
  v13 = *(_QWORD *)(v12 + 8);
  if ( *(_DWORD *)v13 > 4u )
  {
    v14 = *(_QWORD *)(a1 + 48);
    v43 = 4LL;
    v41 = 4LL;
    v18 = *a8;
    v39 = 4LL;
    v37 = 4LL;
    v19 = *a7;
    v35 = 4LL;
    v33 = 4LL;
    v20 = *a6;
    v31 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v15 = *a5;
    v22 = *a4;
    v23 = *a3;
    v24[0] = *a2;
    v42 = &v18;
    v40 = &v19;
    v38 = &v20;
    v36 = &v21;
    v34 = &v22;
    v32 = &v23;
    v30 = v24;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    v21 = v15;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v27 = &unk_1806A70C1;
    UserData.Reserved = 2;
    v16 = *(_QWORD *)(v13 + 32);
    v28 = 77;
    v29 = 1;
    v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v12) = EventWriteTransfer(v16, &EventDescriptor, (LPCGUID)(v14 + 8), 0LL, 9u, &UserData);
  }
  return v12;
}

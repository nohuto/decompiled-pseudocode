/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x1800B5F44
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x1800B5A04 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x1800B6084 (-get@-$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  __int64 result; // rax
  _DWORD *v13; // r10
  __int64 v14; // r8
  int v15; // ecx
  int v16; // [rsp+30h] [rbp-99h] BYREF
  int v17; // [rsp+34h] [rbp-95h] BYREF
  int v18; // [rsp+38h] [rbp-91h] BYREF
  int v19; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v20; // [rsp+40h] [rbp-89h] BYREF
  int v21; // [rsp+44h] [rbp-85h] BYREF
  int v22; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-79h] BYREF
  int *v24; // [rsp+70h] [rbp-59h]
  __int64 v25; // [rsp+78h] [rbp-51h]
  int *v26; // [rsp+80h] [rbp-49h]
  __int64 v27; // [rsp+88h] [rbp-41h]
  int *v28; // [rsp+90h] [rbp-39h]
  __int64 v29; // [rsp+98h] [rbp-31h]
  int *v30; // [rsp+A0h] [rbp-29h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  int *v32; // [rsp+B0h] [rbp-19h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  int *v34; // [rsp+C0h] [rbp-9h]
  __int64 v35; // [rsp+C8h] [rbp-1h]
  int *v36; // [rsp+D0h] [rbp+7h]
  __int64 v37; // [rsp+D8h] [rbp+Fh]

  result = wil::details::static_lazy<StartMenuExperienceLogging>::get(
             a1,
             _lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
  v13 = *(_DWORD **)(result + 8);
  if ( *v13 > 4u )
  {
    v14 = *(_QWORD *)(a1 + 48);
    v37 = 4LL;
    v35 = 4LL;
    v16 = *a8;
    v33 = 4LL;
    v31 = 4LL;
    v17 = *a7;
    v29 = 4LL;
    v27 = 4LL;
    v18 = *a6;
    v25 = 4LL;
    v15 = *a5;
    v20 = *a4;
    v21 = *a3;
    v22 = *a2;
    v36 = &v16;
    v34 = &v17;
    v32 = &v18;
    v30 = &v19;
    v28 = &v20;
    v26 = &v21;
    v24 = &v22;
    v19 = v15;
    return tlgWriteTransfer_EventWriteTransfer((int)v13, (int)&dword_18084EA2A, (int)v14 + 8, 0, 9u, &v23);
  }
  return result;
}

/*
 * XREFs of ?StartActivity@EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAX_N_K11@Z @ 0x180423CE0
 * Callers:
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x18042229C (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AD744 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1804276F0 (-zInternalStart@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity::StartActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseHideExperienceRequestedEventActivity *this,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  const GUID *v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // [rsp+38h] [rbp-81h] BYREF
  DWORD CurrentThreadId; // [rsp+3Ch] [rbp-7Dh] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  __int64 v18; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  __int64 v20; // [rsp+58h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v22; // [rsp+88h] [rbp-31h]
  __int64 v23; // [rsp+90h] [rbp-29h]
  DWORD *p_CurrentThreadId; // [rsp+98h] [rbp-21h]
  __int64 v25; // [rsp+A0h] [rbp-19h]
  char *v26; // [rsp+A8h] [rbp-11h]
  __int64 v27; // [rsp+B0h] [rbp-9h]
  __int64 *v28; // [rsp+B8h] [rbp-1h]
  __int64 v29; // [rsp+C0h] [rbp+7h]
  __int64 *v30; // [rsp+C8h] [rbp+Fh]
  __int64 v31; // [rsp+D0h] [rbp+17h]
  unsigned __int64 *v32; // [rsp+D8h] [rbp+1Fh]
  __int64 v33; // [rsp+E0h] [rbp+27h]

  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
  v10 = (_DWORD *)wil::details::static_lazy<ControlCenterLogging>::get(
                    v9,
                    (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    v17 = a5;
    v18 = a4;
    v19 = a3;
    v15 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v13 = (unsigned int)(v12 + 8);
    v27 = 1LL;
    v14 = *((_QWORD *)this + 6);
    v32 = &v17;
    v33 = v13;
    v30 = &v18;
    v31 = v13;
    v28 = &v19;
    v26 = &v15;
    p_CurrentThreadId = &CurrentThreadId;
    v22 = &v20;
    v29 = v13;
    v23 = v13;
    v25 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v10,
      (unsigned __int8 *)dword_18084B3E3,
      (const GUID *)(v13 + v14),
      v11,
      v13,
      &v21);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}

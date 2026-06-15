/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140009A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x1400098BC (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-59h]
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+48h] [rbp-39h] BYREF
  int v12; // [rsp+50h] [rbp-31h]
  __int64 v13; // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h] BYREF
  union _RTL_RUN_ONCE *v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  _BYTE v17[32]; // [rsp+78h] [rbp-9h] BYREF
  int *v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+A0h] [rbp+1Fh]
  int v20; // [rsp+A4h] [rbp+23h]
  union _RTL_RUN_ONCE **v21; // [rsp+A8h] [rbp+27h]
  int v22; // [rsp+B0h] [rbp+2Fh]
  int v23; // [rsp+B4h] [rbp+33h]
  __int64 *v24; // [rsp+B8h] [rbp+37h]
  int v25; // [rsp+C0h] [rbp+3Fh]
  int v26; // [rsp+C4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x353,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      v7);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)&v14);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v11 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v11);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
    {
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v13 = v16;
      v11 = v15;
      v9 = v14;
      v24 = &v13;
      v21 = &v11;
      v18 = &v9;
      v25 = 8;
      v22 = 8;
      v19 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned int)&unk_1400B3036, (_DWORD)this + 344, 0, 5, (__int64)v17);
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}

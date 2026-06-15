/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400083E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140008258 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-58h]
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      v7);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v10 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v10);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned int)&unk_1400B323D, (_DWORD)this + 344, 0, 2, (__int64)&v10);
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}

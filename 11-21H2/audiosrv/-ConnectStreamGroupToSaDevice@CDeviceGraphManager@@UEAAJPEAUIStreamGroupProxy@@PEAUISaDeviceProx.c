/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x18000BF10
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-71h]
  WINBOOL fPending; // [rsp+30h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  __int64 v16; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h]
  unsigned int v18; // [rsp+50h] [rbp-41h]
  __int64 v19; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int16 *v21; // [rsp+70h] [rbp-21h] BYREF
  int v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+7Ch] [rbp-15h]
  void *v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+8Ch] [rbp-5h]
  __int64 *v27; // [rsp+90h] [rbp-1h]
  __int64 v28; // [rsp+98h] [rbp+7h]
  __int64 *v29; // [rsp+A0h] [rbp+Fh]
  __int64 v30; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 176LL))(a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v13);
    return v8;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v16 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      LODWORD(v17) = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v16);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v19 = a3;
      v29 = &v19;
      v20 = a2;
      v27 = &v20;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      v21 = v10;
      v30 = 8LL;
      v28 = 8LL;
      v16 = 0x40B000000LL;
      v17 = 0LL;
      v22 = *v10;
      v24 = &unk_180189935;
      v23 = 2;
      v25 = 57;
      v26 = 1;
      v18 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(v11, &v16, 0LL, 0LL, 4, &v21);
    }
    return 0LL;
  }
}

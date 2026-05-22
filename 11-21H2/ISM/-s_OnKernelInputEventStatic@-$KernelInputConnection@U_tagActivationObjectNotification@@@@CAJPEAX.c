/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18000BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180048394 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x18008B3D4 (-MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_tagActivationObjectNotification>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r10d
  LPVOID v15; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL v16; // [rsp+38h] [rbp-31h] BYREF
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+48h] [rbp-21h]
  WINBOOL fPending; // [rsp+50h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-11h] BYREF
  void *v21; // [rsp+60h] [rbp-9h]
  GUID ActivityId; // [rsp+68h] [rbp-1h] BYREF
  __int128 v23; // [rsp+78h] [rbp+Fh]
  __int64 v24; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( a3 < 0x48 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      a4);
  v21 = *(void **)(a1 + 128);
  ActivityId = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v17 = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v17);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 )
  {
    if ( (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v13 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                          v12,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v13 > 6u
        && (*(_BYTE *)(v13 + 16) & 1) != 0
        && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
      {
        v15 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v13,
          (__int64)&v15);
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 136);
  v15 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v16, &v15) && v16 )
  {
    v17 = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    v15 = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v17);
  }
  v8 = *((_QWORD *)v15 + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
  {
    v17 = InputTraceLogging::MitEndpointToString(v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v14,
      (__int64)&v17);
  }
  v17 = a2;
  v9 = *(_QWORD *)(a1 + 120);
  if ( !v9 )
  {
    std::_Xbad_function_call();
LABEL_26:
    v17 = (__int64)&`InputTraceLogging::Instance'::`2'::wrapper;
    v15 = &qword_180242A58;
    qword_180242A58 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242A70 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v17);
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 16LL))(v9, &v17);
  v15 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v16, &v15) && v16 )
    goto LABEL_26;
LABEL_13:
  v10 = *((_QWORD *)v15 + 1);
  if ( *(_DWORD *)v10 > 6u && (*(_BYTE *)(v10 + 16) & 1) != 0 && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
  {
    v17 = (__int64)v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v10,
      (__int64)&v17);
  }
  return 0LL;
}

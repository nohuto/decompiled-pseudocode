/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800114A0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180055030 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x1800B4B58 (-MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_INPUT_FOCUS_MESSAGE>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // r10d
  LPVOID v15; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL v16; // [rsp+38h] [rbp-41h] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  int v18; // [rsp+48h] [rbp-31h]
  WINBOOL fPending; // [rsp+50h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-21h] BYREF
  void *v21; // [rsp+60h] [rbp-19h]
  GUID ActivityId; // [rsp+68h] [rbp-11h] BYREF
  __int128 v23; // [rsp+78h] [rbp-1h]
  __int64 v24; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a3 < 0x28 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
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
    Context = &qword_180277DA8;
    qword_180277DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DC0 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
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
    v15 = &qword_180277DA8;
    qword_180277DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DC0 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
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
    v15 = &qword_180277DA8;
    qword_180277DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DC0 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
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

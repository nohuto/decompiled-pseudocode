/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002010
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x18008B3D4 (-MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::s_OnKernelInputEventStatic(
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
  __int64 v11; // rcx
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h]
  GUID ActivityId; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( a3 < 8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      a4);
  v16 = *(_QWORD *)(a1 + 128);
  ActivityId = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     retaddr,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v6 )
  {
    if ( (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v6 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                         v13,
                         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                     + 8);
      if ( *(_DWORD *)v6 > 6u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v15 = v16;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v6,
          (__int64)&v15);
      }
    }
  }
  v7 = *(_DWORD *)(a1 + 136);
  v8 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     v6,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
  {
    v15 = InputTraceLogging::MitEndpointToString(v7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v14,
      (__int64)&v15);
  }
  v15 = a2;
  v9 = *(_QWORD *)(a1 + 120);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 16LL))(v9, &v15);
    v11 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                        v10,
                        _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v11 <= 6u )
      return 0LL;
  }
  else
  {
    std::_Xbad_function_call();
  }
  if ( (*(_BYTE *)(v11 + 16) & 1) != 0 && (*(_QWORD *)(v11 + 24) & 1LL) == *(_QWORD *)(v11 + 24) )
  {
    v15 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v11,
      (__int64)&v15);
  }
  return 0LL;
}

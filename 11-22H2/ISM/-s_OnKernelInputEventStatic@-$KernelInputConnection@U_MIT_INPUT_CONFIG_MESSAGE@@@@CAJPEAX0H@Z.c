/*
 * XREFs of ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004F540
 * Callers:
 *     <none>
 * Callees:
 *     ?ReceiveCoreMessagingK@ISM@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x18001A594 (-ReceiveCoreMessagingK@ISM@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_INPUT_CONFIG_MESSAGE>::s_OnKernelInputEventStatic(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( a3 < 0xDC )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
      a4);
  v12 = *(_QWORD *)(a1 + 128);
  ActivityId = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)retaddr,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v6 )
  {
    if ( (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v10 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                          v9,
                          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
            + 1);
      if ( *(_DWORD *)v10 > 6u
        && (*(_BYTE *)(v10 + 16) & 1) != 0
        && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
      {
        v11 = v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v10,
          (__int64)&v11);
      }
    }
  }
  InputTraceLogging::ISM::ReceiveCoreMessagingK(*(_DWORD *)(a1 + 136));
  v11 = a2;
  v7 = *(_QWORD *)(a1 + 120);
  if ( !v7 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x1800A0AE4LL);
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 16LL))(v7, &v11);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&v12);
  return 0LL;
}

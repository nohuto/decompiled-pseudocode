/*
 * XREFs of ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180191A70
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800892B8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x180190650 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x180191630 (-PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::SetButtonRoutingPolicy(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r10
  __int64 v6; // r10
  PenEventsDispatcherPrincipal *v7; // rcx
  __int64 v8; // rdx
  char ButtonEventsSupportedFlag; // si
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v15 = (__int64)InputTraceLogging::PenPolicyToString(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v6,
      byte_180206262,
      0LL,
      0LL,
      (const unsigned __int16 **)&v15);
  }
  PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag((PenEventsDispatcherPrincipal *)a1);
  *(_DWORD *)(a1 + 200) = a3;
  ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v7);
  if ( (_BYTE)v8 != ButtonEventsSupportedFlag )
  {
    v10 = *(_QWORD **)(a1 + 72);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      LOBYTE(v8) = ButtonEventsSupportedFlag;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v8);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          189LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\penevents"
                   "dispatcherprincipal.cpp",
          (const char *)(unsigned int)v12);
    }
  }
  return 0LL;
}

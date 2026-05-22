/*
 * XREFs of ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1800534D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801BD720 (-PenPolicyToString@InputTraceLogging@@CAPEBDW4RoutingPolicy@Input@Devices@Internal@Windows@@@Z.c)
 */

__int64 __fastcall PenEventsDispatcherPrincipal::SetDockRoutingPolicy(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  int v7; // eax
  bool v8; // si
  int v10; // r10d
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v6 > 4u
    && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
  {
    v16 = InputTraceLogging::PenPolicyToString(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v10,
      (__int64)&v16);
  }
  v7 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 204) = a3;
  v8 = a3 != 0;
  if ( (v7 != 0) != (a3 != 0) )
  {
    v11 = *(_QWORD **)(a1 + 72);
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    {
      LOBYTE(v5) = v8;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 72LL))(i[3] + 8LL, v5);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\pene"
                        "ventsdispatcherprincipal.cpp",
          (const char *)(unsigned int)v13,
          v14);
    }
  }
  return 0LL;
}

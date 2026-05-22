/*
 * XREFs of std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001DBE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1801242C8 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ @ 0x18012431C (-_Tidy@-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call(
        __int64 a1,
        _OWORD **a2)
{
  _OWORD *v2; // rbx
  __int64 v3; // rcx
  struct KernelContextProvider *Instance; // rdi
  __int64 *i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+38h] [rbp-1h] BYREF
  char v10; // [rsp+50h] [rbp+17h]
  const char *v11; // [rsp+58h] [rbp+1Fh] BYREF
  GUID ActivityId; // [rsp+60h] [rbp+27h] BYREF
  __int128 v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+47h]

  v2 = *a2;
  v11 = "MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE";
  ActivityId = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v3 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v3 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      EventActivityIdControl(3u, &ActivityId);
      v7 = *(_QWORD *)(wil::details::static_lazy<InputTraceLogging>::get(
                         v6,
                         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                     + 8);
      if ( *(_DWORD *)v7 > 6u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
      {
        v8 = (__int64)v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v7,
          (__int64)&v8);
      }
    }
  }
  Instance = KernelContextProvider::GetInstance();
  *((_OWORD *)Instance + 8) = *v2;
  v9 = *v2;
  v10 = 4;
  for ( i = (__int64 *)*((_QWORD *)Instance + 4);
        ;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)i[2] + 24LL))(i[2], &v9) )
  {
    i = (__int64 *)*i;
    if ( i == *((__int64 **)Instance + 4) )
      break;
  }
  if ( v10 != -1 && v10 && v10 != 1 )
  {
    if ( v10 == 2 )
    {
      std::vector<DisplayOcclusionRect>::_Tidy(&v9);
    }
    else if ( v10 == 3 )
    {
      std::vector<VirtualTouchpadRect>::_Tidy(&v9);
    }
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)&v11);
}

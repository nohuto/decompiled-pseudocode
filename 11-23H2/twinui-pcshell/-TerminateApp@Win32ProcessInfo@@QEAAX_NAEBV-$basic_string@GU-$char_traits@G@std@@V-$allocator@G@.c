/*
 * XREFs of ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806266F8
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x180626360 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1806241CC (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_42dce70c870a3964e7319458b8bf7bca_@@@Z @ 0x1806243F8 (--$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::TerminateApp(_QWORD *a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 i; // rax
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = a1;
  if ( a2 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>((__int64)L"Attempting to terminate app process");
    v5 = *((_DWORD *)v4 + 4);
    std::wstring::wstring(v16, a3);
    v14 = v5;
    std::wstring::wstring(v15, (__int64)v16);
    v7 = Windows::Internal::ComTaskPool::QueueTask<_lambda_42dce70c870a3964e7319458b8bf7bca_>(v6, (__int64)&v14);
    std::wstring::_Tidy_deallocate((__int64)v15);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v7);
    std::wstring::_Tidy_deallocate((__int64)v16);
  }
  else
  {
    v8 = *(_QWORD **)*a1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      if ( *(_DWORD *)v8[5] != 1 )
      {
        v9 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                         (__int64)a1,
                         (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
        if ( *v9 > 5u )
        {
          v13 = (__int64)L"Found app view to close";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (int)v9,
            (int)&dword_18086F82D,
            0,
            v10,
            (const WCHAR **)&v13);
        }
        PostMessageW((HWND)v8[4], 0x112u, 0xF060uLL, 0LL);
      }
      v11 = (_BYTE *)v8[2];
      if ( v11[25] )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v8 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v8 = (_QWORD *)i;
        v8 = (_QWORD *)i;
      }
      else
      {
        v8 = (_QWORD *)v8[2];
        a1 = *(_QWORD **)v11;
        if ( !*(_BYTE *)(*(_QWORD *)v11 + 25LL) )
        {
          do
          {
            v8 = a1;
            a1 = (_QWORD *)*a1;
          }
          while ( !*((_BYTE *)a1 + 25) );
        }
      }
    }
  }
}

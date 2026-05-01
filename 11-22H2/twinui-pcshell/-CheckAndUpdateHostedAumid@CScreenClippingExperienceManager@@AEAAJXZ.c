/*
 * XREFs of ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180455BE4
 * Callers:
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180455B70 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_180455B70.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1801B7FB0 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180456EE8 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180748C48 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::CheckAndUpdateHostedAumid(volatile signed __int32 **this)
{
  __int64 v2; // rcx
  _DWORD *v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  unsigned int v8; // r8d
  int started; // eax
  const char *v10; // r9
  __int64 result; // rax
  HSTRING v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    anonymous_namespace_::GetScreenClippingAUMID((volatile signed __int32 **)&v12);
    v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                     v2,
                     (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v3 > 5u )
    {
      v13 = (__int64)winrt::hstring::c_str((winrt::hstring *)&v12);
      v14 = (__int64)winrt::hstring::c_str((winrt::hstring *)(this + 42));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v4,
        (unsigned __int8 *)dword_180851A60,
        v4,
        v5,
        (const WCHAR **)&v14,
        (const WCHAR **)&v13);
    }
    if ( !v12 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( !(unsigned __int8)winrt::operator==((__int64)&v12, (__int64)(this + 42), (__int64)v3) )
    {
      v7 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                       v6,
                       (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
      if ( *v7 > 5u )
        tlgWriteTransfer_EventWriteTransfer((__int64)v7, (unsigned __int8 *)dword_180851918, 0LL, 0LL, 2u, &v15);
      winrt::hstring::operator=(this + 42, (winrt::impl **)&v12, v8);
      if ( *((_DWORD *)this + 24) == 2 )
      {
        started = CScreenClippingExperienceManager::StartAppClose((CScreenClippingExperienceManager *)this);
        if ( started < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24A,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)started);
      }
      CSingleViewShellExperience::SwapAumid((CSingleViewShellExperience *)(this + 7), v12);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x128,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                           v10);
  }
  return result;
}

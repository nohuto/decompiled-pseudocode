/*
 * XREFs of ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803812DC
 * Callers:
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180381190 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_180381190.c)
 * Callees:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800F2B2C (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1800FC0F8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180380F00 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803824E0 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F2990 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CScreenClippingExperienceManager::CheckAndUpdateHostedAumid(CScreenClippingExperienceManager *this)
{
  __int64 v2; // rcx
  struct winrt::impl::hstring_header **v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int started; // eax
  HSTRING *ScreenClippingAUMID; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  winrt::impl *v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  anonymous_namespace_::GetScreenClippingAUMID((winrt::hstring *)&v17);
  if ( *(_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                    v2,
                    _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1] <= 5u )
  {
    v3 = (struct winrt::impl::hstring_header **)((char *)this + 336);
  }
  else
  {
    v19 = (__int64)winrt::hstring::c_str((winrt::hstring *)&v17);
    v3 = (struct winrt::impl::hstring_header **)((char *)this + 336);
    v18 = (__int64)winrt::hstring::c_str((CScreenClippingExperienceManager *)((char *)this + 336));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v4,
      (unsigned __int8 *)dword_1806AA03E,
      v4,
      v5,
      (const WCHAR **)&v18,
      (const WCHAR **)&v19);
  }
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !(unsigned __int8)winrt::operator==((__int64)&v17, (__int64)v3) )
  {
    v10 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v7,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
    if ( *v10 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_1806A9FE3, 0LL, 0LL, 2u, &v20);
    winrt::hstring::operator=(v3, &v17);
    if ( *((_DWORD *)this + 24) == 2 )
    {
      started = CScreenClippingExperienceManager::StartAppClose(this);
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E6,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)started);
    }
    ScreenClippingAUMID = (HSTRING *)anonymous_namespace_::GetScreenClippingAUMID((winrt::hstring *)&v18);
    CSingleViewShellExperience::SwapAumid((CScreenClippingExperienceManager *)((char *)this + 56), *ScreenClippingAUMID);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v18, v13, v14, v15);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17, v6, v8, v9);
  return 0LL;
}

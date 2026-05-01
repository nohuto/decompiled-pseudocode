/*
 * XREFs of ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x18061FE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180084E48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x18061A9E4 (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 *     ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x18061B0E0 (--$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA-AV-$ComPtr@VStateChangedEventArg.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18061FA20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@P.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::ReportAppStateChange(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        const unsigned __int16 *a2,
        bool a3)
{
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // r9
  StateChangedEventArgsImpl *v11; // rcx
  StateChangedEventArgsImpl *v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  const unsigned __int16 *v16; // [rsp+88h] [rbp+10h] BYREF
  bool v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v6 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    v13 = 0x2000000LL;
    LOBYTE(v18) = a3;
    v14[0] = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (int)&dword_18086F6BC,
      v8,
      v9,
      (const WCHAR **)v14,
      (__int64)&v18,
      (__int64)&v13);
  }
  try
  {
    wil::MakeOrThrow<StateChangedEventArgsImpl,unsigned short const * &,bool &>(&v12, &v16, &v17);
    v18 = (__int64)v12;
    v14[0] = 0LL;
    wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncInvokeAll<std::nullptr_t,StateChangedEventArgsImpl *>(
      (char *)this + 56,
      (volatile int *)v14,
      &v18);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::FtmBase>::Release((__int64)v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      v10);
  }
}

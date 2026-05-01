/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1806AD8F8
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1806AD240 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamWithContentType@Streams@Storage@34@@impl@winrt@@QEBA@XZ @ 0x18006844C (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRando_ea_18006844C.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70 (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803BAF64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806A5B1C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamWithConte.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1806AB1EC (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 */

// Hidden C++ exception states: #wind=13
__int64 *__fastcall anonymous_namespace_::GetWicBitmapFromStreamReference(
        __int64 *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  HRESULT v4; // eax
  signed int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  signed int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  int ppv; // [rsp+20h] [rbp-39h]
  __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp+Fh] BYREF
  int v23[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v24; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 (__fastcall ***v25)(_QWORD, __int64 *, _QWORD *); // [rsp+80h] [rbp+27h] BYREF
  LPVOID v26; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v20[0] = a1;
  v20[2] = a2;
  v26 = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v26);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  v20[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, v20);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  v19 = v20[0];
  v6 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::Status(&v19);
  if ( !v6 )
    v6 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(&v19);
  if ( v6 == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::GetResults(
    &v19,
    &v25);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v24 = 0LL;
  if ( v25 )
  {
    v20[0] = 0LL;
    v8 = (**v25)(v25, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>, v20);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    v7 = v20[0];
    v19 = v20[0];
  }
  else
  {
    v19 = 0LL;
    v7 = 0LL;
  }
  v9 = CreateStreamOverRandomAccessStream(v7, &GUID_0000000c_0000_0000_c000_000000000046, &v24);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v9,
      ppv);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
  *(_QWORD *)v23 = 0LL;
  v10 = *(_QWORD *)v26;
  *(_QWORD *)v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, _QWORD))(v10 + 32))(
          v26,
          v24,
          &GUID_VendorMicrosoftBuiltIn,
          0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v11,
      (int)v23);
  v22 = 0LL;
  v12 = **(_QWORD **)v23;
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v12 + 104))(*(_QWORD *)v23, 0LL, &v22);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v13,
      (int)v23);
  v14 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v14 > 5u )
  {
    v20[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)v14,
      byte_18087878E,
      0LL,
      v15,
      (__int64)v20);
  }
  v16 = v22;
  v22 = 0LL;
  *a1 = v16;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  if ( v25 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  return a1;
}

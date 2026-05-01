/*
 * XREFs of _anonymous_namespace_::CreateTemporaryLogoFile @ 0x1806ACB64
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1806AD240 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70 (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1806AC808 (_anonymous_namespace_--CreateTemporaryFile.c)
 *     _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1806AD064 (_anonymous_namespace_--DeleteAndCloseFileHandle.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::CreateTemporaryLogoFile(__int64 a1, __int64 a2)
{
  const WCHAR *v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  LPCWSTR *v19; // rbx
  const struct _tlgProvider_t *v20; // rax
  __int64 v21; // r9
  int ppv; // [rsp+20h] [rbp-49h]
  int ppva; // [rsp+20h] [rbp-49h]
  __int64 v25[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-11h] BYREF
  __int64 v29; // [rsp+60h] [rbp-9h] BYREF
  LPVOID v30; // [rsp+68h] [rbp-1h] BYREF
  IStream *ppstm; // [rsp+70h] [rbp+7h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp+Fh] BYREF
  LPCWSTR pszFile[2]; // [rsp+80h] [rbp+17h] BYREF
  __m128i si128; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v25[0] = (__int64)L".png";
  v25[1] = 4LL;
  anonymous_namespace_::CreateTemporaryFile((__int64)&hObject, (void **)v25);
  ppstm = 0LL;
  v4 = (const WCHAR *)pszFile;
  if ( si128.m128i_i64[1] >= 8uLL )
    v4 = pszFile[0];
  v5 = SHCreateStreamOnFileW(v4, 0x42u, &ppstm);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v5,
      ppv);
  v30 = 0LL;
  v6 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v30);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v6,
      ppva);
  v29 = 0LL;
  v7 = *(_QWORD *)v30;
  v29 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v7 + 112))(v30, &v29);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8,
      ppva);
  v9 = (*(__int64 (__fastcall **)(__int64, IStream *))(*(_QWORD *)v29 + 112LL))(v29, ppstm);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x47,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v9,
      ppva);
  v28 = 0LL;
  v10 = *(_QWORD *)v30;
  v28 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, _QWORD, __int64 **))(v10 + 64))(
          v30,
          &GUID_ContainerFormatPng,
          0LL,
          &v28);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v11,
      ppva);
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v28 + 24))(v28, v29, 2LL);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v12,
      ppva);
  v27 = 0LL;
  v13 = *v28;
  v27 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v13 + 80))(v28, &v27, 0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v14,
      ppva);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 24LL))(v27, 0LL);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v15,
      ppva);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 88LL))(v27, a2, 0LL);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x50,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v16,
      ppva);
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 96LL))(v27);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v17,
      ppva);
  v18 = (*(__int64 (__fastcall **)(__int64 *))(*v28 + 88))(v28);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x52,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v18,
      ppva);
  v19 = pszFile;
  if ( si128.m128i_i64[1] >= 8uLL )
    v19 = (LPCWSTR *)pszFile[0];
  v20 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v20 > 5u )
  {
    v26 = 0x1000000LL;
    v25[0] = (__int64)v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (__int64)v20,
      (unsigned __int8 *)dword_1808786D4,
      0LL,
      v21,
      (const WCHAR **)v25,
      (__int64)&v26);
  }
  *(_QWORD *)a1 = hObject;
  hObject = (HANDLE)-1LL;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)pszFile;
  *(__m128i *)(a1 + 24) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(pszFile[0]) = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppstm);
  std::wstring::_Tidy_deallocate((__int64)pszFile);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    anonymous_namespace_::DeleteAndCloseFileHandle(hObject);
  return a1;
}

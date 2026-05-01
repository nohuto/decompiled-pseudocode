/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x1806AD79C
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1806AD240 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70 (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803BAF64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall anonymous_namespace_::GetWicBitmapFromHBitmap(_QWORD *a1, __int64 a2)
{
  HRESULT v4; // eax
  __int64 v5; // rax
  int v6; // eax
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  int ppv; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  int v13[2]; // [rsp+40h] [rbp-20h] BYREF
  LPVOID v14; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v12 = (__int64)a1;
  v14 = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v14);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  *(_QWORD *)v13 = 0LL;
  v5 = *(_QWORD *)v14;
  *(_QWORD *)v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(v5 + 168))(v14, a2, 0LL, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v6,
      (int)v13);
  v7 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v7 > 5u )
  {
    v12 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)v7,
      byte_1808787C8,
      0LL,
      v8,
      (__int64)&v12);
  }
  v9 = *(_QWORD *)v13;
  *(_QWORD *)v13 = 0LL;
  *a1 = v9;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  return a1;
}

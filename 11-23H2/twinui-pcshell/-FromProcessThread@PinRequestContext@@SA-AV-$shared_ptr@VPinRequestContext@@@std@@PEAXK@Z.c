/*
 * XREFs of ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x1806A137C
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A1BAC (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 * Callees:
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180086DB0 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18009658C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x18069A8F4 (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 *     ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x18069D0E0 (--$make_shared@VPinRequestContext@@$$V@std@@YA-AV-$shared_ptr@VPinRequestContext@@@0@XZ.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54F0 (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     ?RequestorPackageAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A553C (-RequestorPackageAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorProcessAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A5588 (-RequestorProcessAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std.c)
 *     ?RequestorWindowAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A55D4 (-RequestorWindowAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@.c)
 *     ?TryGetProcessPackageAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1806A7D58 (-TryGetProcessPackageAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEA.c)
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1806A7F40 (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1806A8B1C (-UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void ***__fastcall PinRequestContext::FromProcessThread(void ***a1, void *a2, int a3)
{
  void **ProcessImagePath; // rax
  void **v6; // rdi
  void **v7; // rcx
  void **ProcessPackageAppId; // rax
  void **v9; // rdi
  void **v10; // rcx
  void **ProcessWeakAppId; // rax
  void **v12; // rdi
  void **v13; // rcx
  LPVOID pv; // [rsp+30h] [rbp-39h] BYREF
  int v16; // [rsp+38h] [rbp-31h]
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  void ***v18; // [rsp+48h] [rbp-21h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp+17h] BYREF
  _BYTE v24[16]; // [rsp+90h] [rbp+27h] BYREF
  int v25; // [rsp+A0h] [rbp+37h] BYREF

  v18 = a1;
  v25 = a3;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinRequestContext,>((__int64)a1);
  v16 = 1;
  ProcessImagePath = TryGetProcessImagePath(&pv, (__int64)a2);
  v6 = ProcessImagePath;
  v7 = *a1 + 4;
  if ( v7 != ProcessImagePath )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v7,
      *ProcessImagePath);
    *v6 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  ProcessPackageAppId = (void **)TryGetProcessPackageAppId(&pv, a2);
  v9 = ProcessPackageAppId;
  if ( *a1 != ProcessPackageAppId )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      *a1,
      *ProcessPackageAppId);
    *v9 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !**a1 )
  {
    v10 = *a1 + 1;
    if ( v10 != (void **)&v17 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v10,
        0LL);
    ProcessWeakAppId = (void **)TryGetProcessWeakAppId(&pv, a2);
    v12 = ProcessWeakAppId;
    v13 = *a1 + 2;
    if ( v13 != ProcessWeakAppId )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v13,
        *ProcessWeakAppId);
      *v12 = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  PinRequestContext::UpdateRequestorBestAvailableAppId((PinRequestContext *)*a1);
  v19 = *(_QWORD *)PinRequestContext::RequestorWindowAppId(*a1, v21);
  v20 = *(_QWORD *)PinRequestContext::RequestorProcessAppId(*a1, v22);
  v17 = *(_QWORD *)PinRequestContext::RequestorPackageAppId(*a1, v23);
  v18 = *(void ****)PinRequestContext::RequestorImagePath(*a1, v24);
  LODWORD(pv) = GetProcessId(a2);
  PinManagerTelemetry::RequestContextCreatedFromProcessThread<unsigned long,unsigned long &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *>(
    (int *)&pv,
    &v25,
    (__int64 *)&v18,
    &v17,
    &v20,
    &v19);
  return a1;
}

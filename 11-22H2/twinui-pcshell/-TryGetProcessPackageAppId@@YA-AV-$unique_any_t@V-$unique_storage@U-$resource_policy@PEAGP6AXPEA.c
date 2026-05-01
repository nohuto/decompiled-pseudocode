/*
 * XREFs of ?TryGetProcessPackageAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1806A7D58
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x1806A137C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180097B94 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

WCHAR *__fastcall TryGetProcessPackageAppId(WCHAR *a1, void *a2)
{
  UINT32 applicationUserModelIdLength; // [rsp+24h] [rbp-24h] BYREF
  PWSTR applicationUserModelId; // [rsp+28h] [rbp-20h] BYREF

  applicationUserModelId = a1;
  applicationUserModelIdLength = 0;
  if ( GetApplicationUserModelId(a2, &applicationUserModelIdLength, 0LL) != 122 )
  {
LABEL_6:
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  applicationUserModelId = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &applicationUserModelId,
    0LL,
    applicationUserModelIdLength);
  if ( GetApplicationUserModelId(a2, &applicationUserModelIdLength, applicationUserModelId) )
  {
    if ( applicationUserModelId )
      CoTaskMemFree(applicationUserModelId);
    goto LABEL_6;
  }
  *(_QWORD *)a1 = applicationUserModelId;
  return a1;
}

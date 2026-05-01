/*
 * XREFs of _anonymous_namespace_::TryGetProcessPublisher @ 0x1806A7E18
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     ?UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252D90 (-UnpinTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@.c)
 *     ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x180252F40 (-UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEM.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1806A0DFC (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     ?TryGetProcessImagePath@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x180086DB0 (-TryGetProcessImagePath@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1806A740C (_anonymous_namespace_--TryGetFilePublisher.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
_QWORD *__fastcall anonymous_namespace_::TryGetProcessPublisher(_QWORD *a1, __int64 a2)
{
  void *v3; // rbx
  __int64 v4; // rax
  LPCWSTR v6[3]; // [rsp+30h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-20h] BYREF

  pv = 0LL;
  TryGetProcessImagePath(&pv, a2);
  v3 = pv;
  if ( pv )
  {
    v6[0] = (LPCWSTR)pv;
    v4 = -1LL;
    do
      ++v4;
    while ( *((_WORD *)pv + v4) );
    v6[1] = (LPCWSTR)v4;
    anonymous_namespace_::TryGetFilePublisher(a1, v6);
    CoTaskMemFree(v3);
    return a1;
  }
  else
  {
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
}

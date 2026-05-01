/*
 * XREFs of _anonymous_namespace_::PinShellItem @ 0x1806A49CC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C520 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024D250 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024D250.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___ @ 0x18024ED14 (_anonymous_namespace_--RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___.c)
 */

__int64 __fastcall anonymous_namespace_::PinShellItem(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  int *v5; // [rsp+30h] [rbp-20h]
  unsigned int *v6; // [rsp+38h] [rbp-18h]
  unsigned int v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+10h] BYREF
  int v9; // [rsp+68h] [rbp+18h] BYREF

  v9 = a2;
  v8 = a1;
  v7 = 0;
  *((_QWORD *)&v4 + 1) = &v8;
  *(_QWORD *)&v4 = a3;
  v5 = &v9;
  v6 = &v7;
  anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___(&v4);
  return v7;
}

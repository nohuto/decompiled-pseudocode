/*
 * XREFs of ?DisplayName@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180725CFC
 * Callers:
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180725DD8 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::DisplayName(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}

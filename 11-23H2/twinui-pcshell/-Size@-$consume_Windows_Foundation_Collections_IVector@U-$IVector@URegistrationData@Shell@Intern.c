/*
 * XREFs of ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180725E7C
 * Callers:
 *     ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180725DD8 (-GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA-AUhst.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData
                                                          + 56LL))(
         winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData,
         &v3);
  if ( v1 < 0 )
    winrt::throw_hresult(v1);
  return v3;
}

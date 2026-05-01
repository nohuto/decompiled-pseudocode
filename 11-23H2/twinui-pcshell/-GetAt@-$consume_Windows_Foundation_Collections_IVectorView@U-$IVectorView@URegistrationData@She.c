/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180721620
 * Callers:
 *     _lambda_b77cff33db7c166167279fbdb5843ce7_::operator() @ 0x1800D63E0 (_lambda_b77cff33db7c166167279fbdb5843ce7_--operator().c)
 *     ?ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180720A38 (-ActivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180721FD8 (-LaunchRemoteSystemSettings@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3)
{
  signed int v4; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL))(*a1, a3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return a2;
}

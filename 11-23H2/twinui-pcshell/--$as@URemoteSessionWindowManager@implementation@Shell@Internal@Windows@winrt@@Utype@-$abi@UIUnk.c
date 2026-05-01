/*
 * XREFs of ??$as@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AU?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18008D328
 * Callers:
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x180705438 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int128 *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = (v5 - 16) & -(__int64)(v5 != 0);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}

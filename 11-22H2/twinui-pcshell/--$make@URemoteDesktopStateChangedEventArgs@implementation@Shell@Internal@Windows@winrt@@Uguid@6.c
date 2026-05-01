/*
 * XREFs of ??$make@URemoteDesktopStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Uguid@6@AEAW4CloudPCState@3456@@winrt@@YA?A_P$$QEAUguid@0@AEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18071F67C
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::guid,enum winrt::Windows::Internal::Shell::CloudPCState &>(
        _QWORD *a1,
        __int128 *a2,
        int *a3)
{
  int v6; // r8d
  __int128 v7; // xmm0
  _QWORD *result; // rax
  char *v9; // [rsp+40h] [rbp+8h]

  v9 = (char *)operator new(0x30uLL);
  v6 = *a3;
  *((_QWORD *)v9 + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteDesktopStateChangedEventArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)v9 + 1) = 1LL;
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::`vftable';
  v7 = *a2;
  *((_DWORD *)v9 + 10) = v6;
  *(_QWORD *)v9 = &winrt::Windows::Internal::Shell::implementation::RemoteDesktopStateChangedEventArgs::`vftable';
  *(_OWORD *)(v9 + 24) = v7;
  result = a1;
  *a1 = v9 + 16;
  return result;
}

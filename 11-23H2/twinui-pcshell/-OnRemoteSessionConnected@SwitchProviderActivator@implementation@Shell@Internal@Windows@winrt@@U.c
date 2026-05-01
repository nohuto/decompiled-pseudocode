/*
 * XREFs of ?OnRemoteSessionConnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x180730C90
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180069938 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x180162620 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x18041D944 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 *     ?Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEBU?$com_ptr@UIVirtualDesktop@@@6@@Z @ 0x18072FDDC (-Add@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@AEB.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::OnRemoteSessionConnected(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  HRESULT v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  PCWSTR sourceString; // [rsp+30h] [rbp-40h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( !*((_QWORD *)this + 6) )
  {
    winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)&sourceString);
    throw (winrt::hresult_illegal_method_call *)&sourceString;
  }
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v12 = 0LL;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
         (__int64)&sourceString,
         &_ImageBase,
         14002LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v4,
      v8);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
  v5 = WindowsCreateStringReference(sourceString, length[0], &hstringHeader, &string);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v5,
      v8);
  v9 = 0LL;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v9);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x79,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v6,
      v8);
  v8 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v9 + 152LL))(v9, string, &v8);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7C,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
      (const char *)(unsigned int)v7,
      v8);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Add(
    *((PSRWLOCK *)this + 7),
    (__int64 *)a2,
    &v8);
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
  if ( v9 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
}

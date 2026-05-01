/*
 * XREFs of ?RemoveWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180729F68
 * Callers:
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68 (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?IndexOf@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@AEBUWindowId@UI@Windows@3@AEAI@Z @ 0x180729B00 (-IndexOf@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::RemoveWindow(
        winrt::Windows::Internal::Shell::implementation::RemoteSystem *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  RTL_SRWLOCK *v4; // rsi
  signed int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  v6 = 0;
  if ( winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::IndexOf(
         (__int64 *)this + 7,
         a2,
         (__int64)&v6) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 96LL))(*((_QWORD *)this + 7), v6);
    if ( v5 < 0 )
      winrt::throw_hresult(v5);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}

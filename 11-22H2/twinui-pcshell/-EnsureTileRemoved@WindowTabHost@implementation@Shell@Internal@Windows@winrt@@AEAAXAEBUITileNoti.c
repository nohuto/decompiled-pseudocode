/*
 * XREFs of ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1802E7B8C
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800D5890 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x18063A1F0 (-UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::EnsureTileRemoved(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Tiles::ITileNotification *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  RTL_SRWLOCK *v5; // rsi
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)a2;
  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  v5 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  Ptr = this[79].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
    winrt::Windows::Internal::Shell::implementation::WindowData::UnregisterTileIfExists(
      (winrt::Windows::Internal::Shell::implementation::WindowData *)(i + 3),
      (const struct winrt::guid *)&v8);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}

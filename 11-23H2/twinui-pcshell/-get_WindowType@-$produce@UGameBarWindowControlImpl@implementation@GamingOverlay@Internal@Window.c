/*
 * XREFs of ?get_WindowType@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEAH@Z @ 0x180412A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,winrt::Windows::Internal::GamingOverlay::IGameBarWindowControl>::get_WindowType(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edi

  v4 = a1 + 160;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 40;
  if ( !a1 )
    v5 = 56LL;
  v6 = *(_DWORD *)v5;
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}

/*
 * XREFs of ?get_IsEnabled@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x1806ED230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::get_IsEnabled(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  char v6; // di

  v4 = a1 + 152;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 185;
  if ( !a1 )
    v5 = 209LL;
  v6 = *(_BYTE *)v5;
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}

/*
 * XREFs of ?get_ContentWindow@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_K@Z @ 0x1806ED170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::get_ContentWindow(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi

  v4 = a1 + 152;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockExclusive((PSRWLOCK)v4);
  v5 = a1 + 224;
  if ( !a1 )
    v5 = 248LL;
  v6 = *(_QWORD *)v5;
  if ( v4 )
    ReleaseSRWLockExclusive((PSRWLOCK)v4);
  *a2 = v6;
  return 0LL;
}

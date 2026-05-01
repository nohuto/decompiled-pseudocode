/*
 * XREFs of ?get_Size@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAUSize@Foundation@Windows@3@@Z @ 0x1806ED2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::get_Size(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  v4 = a1 + 160;
  if ( !a1 )
    v4 = 176LL;
  AcquireSRWLockShared((PSRWLOCK)v4);
  v5 = a1 + 272;
  if ( !a1 )
    v5 = 288LL;
  v7 = *(_QWORD *)v5;
  if ( v4 )
    ReleaseSRWLockShared((PSRWLOCK)v4);
  *a2 = v7;
  return 0LL;
}

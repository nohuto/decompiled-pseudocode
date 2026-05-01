/*
 * XREFs of ??$invoke@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@USharedDesktopBackgroundVisualHost@@_K@impl@winrt@@YA_NAEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@1@AEBUSharedDesktopBackgroundVisualHost@@AEB_K@Z @ 0x1806E5E40
 * Callers:
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_K@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_K@Z @ 0x1806E5740 (--$-RUSharedDesktopBackgroundVisualHost@@_K@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>,SharedDesktopBackgroundVisualHost,unsigned __int64>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  signed int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a2 + 16;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, a2 + 16, *a3);
  try
  {
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  catch ( ... )
  {
    v5 = *winrt::to_hresult(&v8);
    ___load_runtime_function_P6AHHHPEAX__EP6AHHH0__E_impl_winrt__YAXPEBGPEBDAEAP6AHHHPEAX__EP6AHHH2__E_Z(
      v7,
      v6,
      &`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>,SharedDesktopBackgroundVisualHost,unsigned __int64>'::`4'::handler);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))`winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>,SharedDesktopBackgroundVisualHost,unsigned __int64>'::`4'::handler)(
      v5,
      0LL,
      0LL);
    return v5 != -2147417848 && v5 != -2147023174 && v5 != -1996357631;
  }
  return 1;
}

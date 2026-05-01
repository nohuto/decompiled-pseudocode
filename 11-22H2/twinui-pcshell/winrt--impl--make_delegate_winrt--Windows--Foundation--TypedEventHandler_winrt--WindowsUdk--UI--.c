/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1806CAC3C
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___ @ 0x1806C9498 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt--WindowsUdk-.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_190ccd1a8be9aac816201cee4203407b___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *result; // rax

  v4 = operator new(0x48uLL);
  v4[1] = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v4[2] = v5;
  v4[3] = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4 + 3);
  *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v4[6] = v6;
  LODWORD(v6) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = -1;
  *((_DWORD *)v4 + 14) = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 16) = 1;
  *v4 = off_1807CA4E0;
  result = a1;
  *a1 = v4;
  return result;
}

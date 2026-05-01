/*
 * XREFs of _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$1 @ 0x1802BDDCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>(*(_QWORD *)(a2 + 160) + 24LL);
}

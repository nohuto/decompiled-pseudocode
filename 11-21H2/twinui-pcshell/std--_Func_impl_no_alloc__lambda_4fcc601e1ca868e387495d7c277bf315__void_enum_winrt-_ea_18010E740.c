/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x18010E740
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_4fcc601e1ca868e387495d7c277bf315__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx

  v2 = a2;
  *(_QWORD *)a2 = off_180637F08;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 36), (volatile int *)a2);
  return v2;
}

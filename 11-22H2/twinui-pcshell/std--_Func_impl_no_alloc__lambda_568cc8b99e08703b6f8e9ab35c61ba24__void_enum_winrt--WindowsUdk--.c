/*
 * XREFs of std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x180210310
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180140020 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9

  *(_QWORD *)a2 = off_1807C6FB0;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  winrt::com_ptr<CMultitaskingViewManager>::add_ref((__int64 *)(a2 + 16), (volatile int *)a2);
  return v2;
}

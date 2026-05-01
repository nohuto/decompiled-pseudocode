/*
 * XREFs of _lambda_0c5affb431bf714a4aabb516927c6336_::_lambda_0c5affb431bf714a4aabb516927c6336_ @ 0x180233550
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0c5affb431bf714a4aabb516927c6336__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Copy @ 0x180247F10 (std--_Func_impl_no_alloc__lambda_0c5affb431bf714a4aabb516927c6336__void_winrt--WindowsUdk--UI--S.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0c5affb431bf714a4aabb516927c6336_::_lambda_0c5affb431bf714a4aabb516927c6336_(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  std::wstring::wstring((_QWORD *)(a1 + 48), a2 + 48);
  std::wstring::wstring((_QWORD *)(a1 + 80), a2 + 80);
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a2 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(a2 + 128);
  *(_QWORD *)(a1 + 132) = *(_QWORD *)(a2 + 132);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 144),
    (_QWORD *)(a2 + 144));
  return a1;
}

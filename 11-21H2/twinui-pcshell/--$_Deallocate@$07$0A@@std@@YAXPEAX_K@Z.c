/*
 * XREFs of ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x18031A808
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x1801472E0 (std--_Func_impl_no_alloc__lambda_f5bad7708cd3d32b6b139f2523e4a8ac__void_enum_winrt-_ea_1801472E0.c)
 *     std::_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_::_Delete_this @ 0x180176450 (std--_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Delete_this @ 0x1801A8340 (std--_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_--_Delete_this.c)
 *     std::_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___::_Delete_this @ 0x1801CE6D0 (std--_Func_impl_no_alloc__lambda_6ca06c324c81d0fb264ad25dc2af8bef__void_unsigned_short___--_Dele.c)
 *     std::_Func_impl_no_alloc__lambda_4fd519eddf4015101eaa631da5f5c35c__void_unsigned_short___::_Delete_this @ 0x1801CE6F0 (std--_Func_impl_no_alloc__lambda_4fd519eddf4015101eaa631da5f5c35c__void_unsigned_short___--_Dele.c)
 *     std::_Func_impl_no_alloc__lambda_702b059237f471f0f2abb9216d2aed5e__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1801CE710 (std--_Func_impl_no_alloc__lambda_702b059237f471f0f2abb9216d2aed5e__void_winrt--Wind_ea_1801CE710.c)
 *     std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1801CE730 (std--_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt--Wind_ea_1801CE730.c)
 *     std::_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Delete_this @ 0x1801CE770 (std--_Func_impl_no_alloc__lambda_b61fe1c2b60bf875518a0bd6b3647bbb__void_winrt--Wind_ea_1801CE770.c)
 *     std::_Func_impl_no_alloc__lambda_82d632d1a648584daa1116c16f551398__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__Windows::Internal::ApplicationModel::WindowManagement::WindowId_::_Delete_this @ 0x1803E73C0 (std--_Func_impl_no_alloc__lambda_82d632d1a648584daa1116c16f551398__wil--com_ptr_t_W_ea_1803E73C0.c)
 *     ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8TouchKeyboardExperienceManager@@EAAJPEBG@ZPEAV3@AEBU?$_Ph@$00@2@@std@@JPEBG@std@@EEAAX_N@Z @ 0x18046A500 (-_Delete_this@-$_Func_impl_no_alloc@V-$_Binder@U_Unforced@std@@P8TouchKeyboardExperienceManager@.c)
 *     std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Delete_this @ 0x180516060 (std--_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT__ea_180516060.c)
 *     std::_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT_ENUM_ITEM_::_Delete_this @ 0x180516080 (std--_Func_impl_no_alloc__lambda_99a211cd72333f59c49615b9c7b5d521__bool_APP_LAYOUT__ea_180516080.c)
 *     std::_Func_impl_no_alloc__lambda_a1e0b2aff68b27cc6a79652c5f2cfbda__bool_APP_LAYOUT_ENUM_ITEM_::_Delete_this @ 0x1805160A0 (std--_Func_impl_no_alloc__lambda_a1e0b2aff68b27cc6a79652c5f2cfbda__bool_APP_LAYOUT__ea_1805160A0.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_Deallocate<8,0>(void *a1, unsigned __int64 a2, __int64 a3)
{
  void *v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  if ( a2 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v3, &v4, a3);
    a1 = v3;
  }
  operator delete(a1);
}

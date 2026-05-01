/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0_ @ 0x180281CE8
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089___ @ 0x180282264 (std--_Global_new_std--_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__ea_180282264.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void_::_Func_impl_no_alloc__lambda_d5554fb7d1d16b7c69ea1af45fa7d089__void___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r8d

  *a1 = off_1807CBAB8;
  v4 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *(_QWORD *)a2;
  a1[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = a1 + 3;
  *v5 = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v4[3] = v6;
  v7 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v4[4] = v7;
  winrt::hstring::hstring((winrt::hstring *)(v4 + 5), (winrt::impl **)(a2 + 40), v8);
  *((_DWORD *)v4 + 12) = *(_DWORD *)(a2 + 48);
  *((_BYTE *)v4 + 52) = *(_BYTE *)(a2 + 52);
  return a1;
}

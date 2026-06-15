/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263___ @ 0x1800D80D8
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_c5ba6885c59c7d44add3d2e24646e672___ @ 0x1800D8204 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D8204.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18003F560 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263___(
        __int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = off_180170040;
  v2[8] = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    if ( v3 == a1 )
    {
      v2[8] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 8LL))(v3, v2 + 1);
      std::_Func_class<void,>::_Tidy(a1, v4);
    }
    else
    {
      v2[8] = v3;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  return v2;
}

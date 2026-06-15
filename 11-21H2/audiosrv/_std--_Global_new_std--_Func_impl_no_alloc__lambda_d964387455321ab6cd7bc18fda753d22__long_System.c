/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22____::_2_::_Guard_type::__Guard_type @ 0x180068494
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22__const_&_ @ 0x180068238 (std--_Global_new_std--_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemE.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22___ @ 0x1800682EC (std--_Global_new_std--_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__ea_1800682EC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22____::_2_::_Guard_type::__Guard_type(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0xC0uLL);
}

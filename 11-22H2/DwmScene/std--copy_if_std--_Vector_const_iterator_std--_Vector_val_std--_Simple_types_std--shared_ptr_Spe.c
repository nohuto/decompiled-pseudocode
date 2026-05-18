/*
 * XREFs of std::copy_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::ImageProcessingEffect________std::back_insert_iterator_std::vector_std::shared_ptr_Spectre::Engine::ImageProcessingEffect__std::allocator_std::shared_ptr_Spectre::Engine::ImageProcessingEffect_________lambda_4ce1fcdae197290b33bdc695c76fb12a___ @ 0x180071B1C
 * Callers:
 *     _anonymous_namespace_::GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a___ @ 0x1800710A0 (_anonymous_namespace_--GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a___.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??8type_info@@QEBA_NAEBV0@@Z @ 0x180047D6C (--8type_info@@QEBA_NAEBV0@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x1800711A8 (--$_Emplace_reallocate@AEBV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@-$vector@V.c)
 */

_QWORD *__fastcall std::copy_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::ImageProcessingEffect________std::back_insert_iterator_std::vector_std::shared_ptr_Spectre::Engine::ImageProcessingEffect__std::allocator_std::shared_ptr_Spectre::Engine::ImageProcessingEffect_________lambda_4ce1fcdae197290b33bdc695c76fb12a___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 *a5)
{
  _QWORD *i; // r14
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v9 = __RTtypeid(*i);
    if ( type_info::operator==(*a5, v9) )
    {
      v10 = *(_QWORD **)(a4 + 8);
      if ( v10 == *(_QWORD **)(a4 + 16) )
      {
        std::vector<std::shared_ptr<Spectre::Engine::ImageProcessingEffect>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> const &>(
          (char **)a4,
          *(char **)(a4 + 8),
          i);
      }
      else
      {
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v10,
          i);
        *(_QWORD *)(a4 + 8) += 16LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}

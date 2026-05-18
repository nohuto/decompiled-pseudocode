/*
 * XREFs of _anonymous_namespace_::GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a___ @ 0x1800710A0
 * Callers:
 *     ?GetEffects@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$vector@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@2@@std@@AEBVtype_index@5@@Z @ 0x18007334C (-GetEffects@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$vector@V-$shared_ptr@VImageProcessin.c)
 * Callees:
 *     std::copy_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::ImageProcessingEffect________std::back_insert_iterator_std::vector_std::shared_ptr_Spectre::Engine::ImageProcessingEffect__std::allocator_std::shared_ptr_Spectre::Engine::ImageProcessingEffect_________lambda_4ce1fcdae197290b33bdc695c76fb12a___ @ 0x180071B1C (std--copy_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_Spe.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall anonymous_namespace_::GetEffects__lambda_4ce1fcdae197290b33bdc695c76fb12a___(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // [rsp+58h] [rbp+10h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  std::copy_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::ImageProcessingEffect________std::back_insert_iterator_std::vector_std::shared_ptr_Spectre::Engine::ImageProcessingEffect__std::allocator_std::shared_ptr_Spectre::Engine::ImageProcessingEffect_________lambda_4ce1fcdae197290b33bdc695c76fb12a___(
    (unsigned int)&v6,
    *a2,
    a2[1],
    (_DWORD)a1,
    a4);
  return a1;
}

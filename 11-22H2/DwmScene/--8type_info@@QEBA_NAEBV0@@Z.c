/*
 * XREFs of ??8type_info@@QEBA_NAEBV0@@Z @ 0x180047D6C
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     std::copy_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::ImageProcessingEffect________std::back_insert_iterator_std::vector_std::shared_ptr_Spectre::Engine::ImageProcessingEffect__std::allocator_std::shared_ptr_Spectre::Engine::ImageProcessingEffect_________lambda_4ce1fcdae197290b33bdc695c76fb12a___ @ 0x180071B1C (std--copy_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_Spe.c)
 *     ?_Get_deleter@?$_Ref_count_resource@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x180088FD0 (-_Get_deleter@-$_Ref_count_resource@PEAXV_lambda_2bb65f39da56ce77b91824536c9c4563_@@@std@@UEBAPE.c)
 *     ?_Get_deleter@?$_Ref_count_resource@PEAEU?$default_delete@$$BY0A@E@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x1800D8980 (-_Get_deleter@-$_Ref_count_resource@PEAEU-$default_delete@$$BY0A@E@std@@@std@@UEBAPEAXAEBVtype_i.c)
 *     std::_Ref_count_resource_Spectre::Utils::Math::Vector3____lambda_eee906239c744569acc5ea6e5be29b09___::_Get_deleter @ 0x1800E3620 (std--_Ref_count_resource_Spectre--Utils--Math--Vector3____lambda_eee906239c744569acc5ea6e5be29b0.c)
 *     std::_Ref_count_resource_Spectre::Utils::Math::Vector3____lambda_fdb7222a856e1b31897eb021985012a7___::_Get_deleter @ 0x1800E3660 (std--_Ref_count_resource_Spectre--Utils--Math--Vector3____lambda_fdb7222a856e1b31897eb021985012a.c)
 *     std::_Ref_count_resource_Spectre::Utils::Math::Vector4____lambda_96ffd31a4081c2af17eae963fb5dd7cc___::_Get_deleter @ 0x1800E36A0 (std--_Ref_count_resource_Spectre--Utils--Math--Vector4____lambda_96ffd31a4081c2af17eae963fb5dd7c.c)
 *     std::_Ref_count_resource_Spectre::Utils::Math::Vector4____lambda_dc718d396f0c2d0078465762313bdcf6___::_Get_deleter @ 0x1800E36E0 (std--_Ref_count_resource_Spectre--Utils--Math--Vector4____lambda_dc718d396f0c2d0078_ea_1800E36E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall type_info::operator==(__int64 a1, __int64 a2)
{
  return (unsigned int)__std_type_info_compare(a1 + 8, a2 + 8) == 0;
}

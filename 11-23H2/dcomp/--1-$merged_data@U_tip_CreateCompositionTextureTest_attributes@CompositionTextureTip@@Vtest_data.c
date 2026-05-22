/*
 * XREFs of ??1?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18009D928
 * Callers:
 *     ?Release@?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18009DB50 (-Release@-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureT.c)
 * Callees:
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x18009D9FC (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$0A@$0A@$00@details@tip2@@IEAAXXZ @ 0x18009E928 (-on_destroy@-$shared_data@$0A@$0A@$00@details@tip2@@IEAAXXZ.c)
 */

__int64 __fastcall tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>::~merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>::`vftable';
  tip2::details::shared_data<0,0,1>::on_destroy(a1 + 1);
  tip2::details::stored_flag_requirements::~stored_flag_requirements((tip2::details::stored_flag_requirements *)(a1 + 32));
  return tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 1);
}

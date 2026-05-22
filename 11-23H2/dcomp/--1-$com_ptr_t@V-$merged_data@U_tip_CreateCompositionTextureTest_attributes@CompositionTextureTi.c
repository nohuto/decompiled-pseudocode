/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009D908
 * Callers:
 *     ??1?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18009D9AC (--1-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTe.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18009F714 (-start@-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compositi.c)
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1800A0D6C (-start@-$tip_test@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextur.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18009DB50 (-Release@-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureT.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>::Release(v1);
  return result;
}

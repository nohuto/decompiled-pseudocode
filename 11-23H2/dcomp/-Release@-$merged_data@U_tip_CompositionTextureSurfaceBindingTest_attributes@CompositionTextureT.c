/*
 * XREFs of ?Release@?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18009DB50
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009D908 (--1-$com_ptr_t@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTi.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18009F714 (-start@-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compositi.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1800A0D6C (-start@-$tip_test@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextur.c)
 * Callees:
 *     ??1?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18009D928 (--1-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data.c)
 */

__int64 __fastcall tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 82);
  if ( !v2 )
  {
    tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>::~merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}

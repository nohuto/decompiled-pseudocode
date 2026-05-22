/*
 * XREFs of ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x18009D9FC
 * Callers:
 *     ??1?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x18009D928 (--1-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data.c)
 * Callees:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18009DBBC (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 */

void __fastcall tip2::details::stored_flag_requirements::~stored_flag_requirements(
        tip2::details::stored_flag_requirements *this)
{
  tip2::vector_nothrow<tip2::test_flag>::clear((char *)this + 48);
  tip2::vector_nothrow<tip2::test_flag>::clear((char *)this + 24);
  tip2::vector_nothrow<tip2::test_flag>::clear(this);
}

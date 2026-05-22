/*
 * XREFs of ?complete@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAAXXZ @ 0x18009DCE4
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18009DE18 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>>::complete(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::shared_data<0,0,1>::complete_without_lock(v1 + 8);
  return result;
}

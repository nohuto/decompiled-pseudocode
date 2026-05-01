/*
 * XREFs of ??1?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180466380
 * Callers:
 *     _UndockedSearchAppExperienceManager::StartHideTest_::_1_::dtor$0 @ 0x1802BEB35 (_UndockedSearchAppExperienceManager--StartHideTest_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180038794 (-Release@-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release(v1);
  return result;
}

/*
 * XREFs of ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180466F40
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180038808 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800863BC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::CompleteHideTest(UndockedSearchAppExperienceManager *this)
{
  void **v1; // rbx
  __int64 v2; // rcx

  v1 = (void **)((char *)this + 864);
  v2 = *((_QWORD *)this + 108);
  if ( v2 )
    tip2::details::shared_data<0,0,0>::complete_without_lock(v2 + 8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(v1);
}

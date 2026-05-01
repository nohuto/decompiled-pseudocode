/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180091F98
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180037BE0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180038054 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180038770 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 */

void *__fastcall tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(
        void **a1,
        __int64 a2)
{
  void *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v3 + 8, a2);
    result = wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::reset(a1);
  }
  if ( *a1 )
    return (void *)tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::Release((volatile signed __int32 *)*a1);
  return result;
}

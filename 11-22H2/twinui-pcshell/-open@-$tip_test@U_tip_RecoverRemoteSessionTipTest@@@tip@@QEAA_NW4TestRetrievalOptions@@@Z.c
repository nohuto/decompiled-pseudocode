/*
 * XREFs of ?open@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18008D19C
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18008D098 (--$open_and_watch_errors@V-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180718430 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18008D448 (--0-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRet.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall tip::tip_test<_tip_RecoverRemoteSessionTipTest>::open(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rdi
  _DWORD *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  v2 = (std::_Ref_count_base *)operator new(0x130uLL);
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>>::`vftable';
  tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>::test_merged_data<_tip_RecoverRemoteSessionTipTest>(
    (char *)v2 + 16,
    0LL,
    0LL);
  v4 = (_DWORD *)((char *)v2 + 16);
  v5 = v2;
  std::shared_ptr<ViewEventRegistration>::operator=(a1, &v4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return tip::details::test_common_data<1>::has_ever_started(*a1 + 8LL);
}

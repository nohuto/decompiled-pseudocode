/*
 * XREFs of ??$open@V?$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA?AV?$tip_test@U_tip_AppPrelaunch@@@0@W4TestRetrievalOptions@@@Z @ 0x1801C3050
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1801C4080 (--0-$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall tip::open<tip::tip_test<_tip_AppPrelaunch>>(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rdi
  _DWORD *v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (std::_Ref_count_base *)operator new(0xD8uLL);
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>::`vftable';
  tip::details::test_merged_data<_tip_AppPrelaunch>::test_merged_data<_tip_AppPrelaunch>((char *)v2 + 16, 0LL, 0LL);
  v4 = (_DWORD *)((char *)v2 + 16);
  v5 = v2;
  std::shared_ptr<ViewEventRegistration>::operator=(a1, (__int64 *)&v4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}

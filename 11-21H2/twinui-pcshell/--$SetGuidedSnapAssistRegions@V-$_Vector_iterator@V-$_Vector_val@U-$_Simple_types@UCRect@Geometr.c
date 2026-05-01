/*
 * XREFs of ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18059A7B4
 * Callers:
 *     ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18059D2F0 (-StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$emplace_back@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAUCRect@Geometry@@@Z @ 0x18059AF18 (--$emplace_back@AEAUCRect@Geometry@@@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAE.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z @ 0x18059C15C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@XZ @ 0x18059F0F4 (-ensure_data@-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_da.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSnapAssistControllerBase::SetGuidedSnapAssistRegions<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Geometry::CRect>>>>(
        RTL_SRWLOCK *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  unsigned __int64 Ptr; // r8
  char *v7; // rdx
  char *i; // rdx
  int v10; // edi
  PVOID v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp+8h] BYREF

  CSnapAssistControllerBase::EndGuidedSnapAssist(a1, 0LL);
  wil::AcquireSRWLockExclusive(&v17, a1 + 19);
  Ptr = (unsigned __int64)a1[23].Ptr;
  v7 = (char *)a1[24].Ptr + Ptr;
  while ( a2 != a3 )
  {
    if ( (char *)Ptr == v7 )
    {
      do
        std::deque<tagRECT>::emplace_back<Geometry::CRect &>(&a1[20], a2++);
      while ( a2 != a3 );
      goto LABEL_9;
    }
    *(_OWORD *)*((_QWORD *)a1[21].Ptr + (Ptr++ & ((unsigned __int64)a1[22].Ptr - 1))) = *a2++;
  }
  for ( i = &v7[-Ptr]; i; --i )
  {
    if ( a1[24].Ptr-- == (PVOID)1 )
      a1[23].Ptr = 0LL;
  }
LABEL_9:
  v10 = (int)a1[24].Ptr;
  if ( v10 )
  {
    v11 = a1[28].Ptr;
    if ( v11 && tip::details::test_common_data<0>::has_ever_started((__int64)v11 + 8) )
      std::shared_ptr<PeoplePaneViewInfo>::reset(&a1[28].Ptr);
    v12 = (_QWORD *)tip::tip_test<_tip_GuidedSnapAssistTest>::ensure_data(&a1[28]);
    tip::details::test_common_data<0>::start(*v12 + 8LL, &v16);
    v13 = (_QWORD *)tip::tip_test<_tip_GuidedSnapAssistTest>::ensure_data(&a1[28]);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v16,
      v13);
    v14 = v16;
    tip::details::test_common_data<0>::begin_update(v16 + 8);
    v15 = v14 + 152;
    if ( !v14 )
      v15 = 8LL;
    *(_DWORD *)v15 = v10;
    if ( v14 )
    {
      tip::details::test_common_data<0>::end_update(v14 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v16);
    }
    if ( *((_QWORD *)&v16 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v16 + 1));
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
}

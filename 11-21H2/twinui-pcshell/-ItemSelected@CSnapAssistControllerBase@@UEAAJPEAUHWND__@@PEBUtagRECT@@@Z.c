/*
 * XREFs of ?ItemSelected@CSnapAssistControllerBase@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z @ 0x18059C740
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapAssistItemSelected@AEAPEAUHWND__@@AEBUtagRECT@@@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEBUtagRECT@@@Z @ 0x18059A9F8 (--$SnapAssistItemSelected@AEAPEAUHWND__@@AEBUtagRECT@@@CSnapComponentTelemetry@@SAXAEAPEAUHWND__.c)
 *     ?ensure_data@?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_GuidedSnapAssistTest@@@details@tip@@@std@@XZ @ 0x18059F0F4 (-ensure_data@-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_da.c)
 */

__int64 __fastcall CSnapAssistControllerBase::ItemSelected(
        CSnapAssistControllerBase *this,
        HWND a2,
        struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  CSnapComponentTelemetry::SnapAssistItemSelected<HWND__ * &,tagRECT const &>(&v15, a3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, HWND, struct tagRECT *, __int64))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         a2,
         a3,
         2LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 26) )
    {
      v9 = (_QWORD *)tip::tip_test<_tip_GuidedSnapAssistTest>::ensure_data((char *)this + 208);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v12,
        v9);
      v10 = v12;
      tip::details::test_common_data<0>::begin_update(v12 + 8);
      v11 = v10 + 160;
      if ( !v10 )
        v11 = 16LL;
      ++*(_DWORD *)v11;
      if ( v10 )
      {
        tip::details::test_common_data<0>::end_update(v10 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}

/*
 * XREFs of ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806238FC
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180623650 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@@1@AEBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804BACDC (--$_Find_lower_bound@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_T.c)
 *     ??$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@U?$less@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@VUwpAppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUIWinRTApplicationView@@AEAV?$shared_ptr@VUwpAppViewInfo@@@1@@Z @ 0x1806227C4 (--$_Emplace@AEAPEAUIWinRTApplicationView@@AEAV-$shared_ptr@VUwpAppViewInfo@@@std@@@-$_Tree@V-$_T.c)
 *     ??$make_shared@VUwpAppViewInfo@@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@std@@YA?AV?$shared_ptr@VUwpAppViewInfo@@@0@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180622CA4 (--$make_shared@VUwpAppViewInfo@@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@std@@YA.c)
 *     ??0?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIWinRTApplicationView@@@Z @ 0x180622D04 (--0-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIWinRTApplicati.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpAppPackageInfo::UpdateView(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-28h]
  _BYTE v8[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  unsigned __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF

  v12 = a3;
  v11 = a2;
  v4 = (__int64 *)(a1 + 32);
  wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>(
    &v10,
    a2);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::_Find_lower_bound<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>(
    v4,
    (__int64)v8,
    &v10);
  v5 = v9;
  if ( *(_BYTE *)(v9 + 25) || v10 < *(_QWORD *)(v9 + 32) )
    v5 = *v4;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  if ( v5 == *v4 )
  {
    std::make_shared<UwpAppViewInfo,enum Windows::Internal::FamilySafety::AppLimits::ViewState &>(&v6, &v12);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>,std::shared_ptr<UwpAppViewInfo>,std::less<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy> const,std::shared_ptr<UwpAppViewInfo>>>,0>>::_Emplace<IWinRTApplicationView * &,std::shared_ptr<UwpAppViewInfo> &>(
      v4,
      (__int64)v8,
      &v11,
      &v6);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  else
  {
    **(_DWORD **)(v5 + 40) = a3;
  }
}

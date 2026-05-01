/*
 * XREFs of ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806273D0
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180627308 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VUwpAppViewInfo@@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@std@@YA?AV?$shared_ptr@VUwpAppViewInfo@@@0@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180622CA4 (--$make_shared@VUwpAppViewInfo@@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@std@@YA.c)
 *     ??$_Emplace@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@PEAX@std@@_N@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x1806245FC (--$_Emplace@AEAPEAUHWND__@@AEAV-$shared_ptr@VWin32AppViewInfo@@@std@@@-$_Tree@V-$_Tmap_traits@PE.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1806249D8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::UpdateView(__int64 *a1, unsigned __int64 a2, int a3)
{
  int v4; // r10d
  unsigned __int64 v5; // r11
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-30h]
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  unsigned __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    a1,
    (__int64)v8,
    &v10);
  if ( *(_BYTE *)(v9 + 25) || v5 < *(_QWORD *)(v9 + 32) || v9 == *a1 )
  {
    std::make_shared<UwpAppViewInfo,enum Windows::Internal::FamilySafety::AppLimits::ViewState &>(&v6, &v11);
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::_Emplace<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
      a1,
      (__int64)v8);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  else
  {
    **(_DWORD **)(v9 + 40) = v4;
  }
}

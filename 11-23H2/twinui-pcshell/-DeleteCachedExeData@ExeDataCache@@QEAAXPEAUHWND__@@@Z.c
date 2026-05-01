/*
 * XREFs of ?DeleteCachedExeData@ExeDataCache@@QEAAXPEAUHWND__@@@Z @ 0x1806252D4
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1804A508C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micr.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1806249D8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 */

void __fastcall ExeDataCache::DeleteCachedExeData(ExeDataCache *this, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r10
  __int64 *v7; // rbx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    (__int64 *)this + 1,
    (__int64)v8,
    &v10);
  if ( !*(_BYTE *)(v9 + 25) && a2 >= *(_QWORD *)(v9 + 32) && v9 != *v6 )
  {
    v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Extract(
           v6,
           v9,
           v4,
           v5);
    std::wstring::_Tidy_deallocate((__int64)(v7 + 10));
    std::wstring::_Tidy_deallocate((__int64)(v7 + 6));
    std::_Deallocate<16,0>(v7, 0x70uLL);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this);
}

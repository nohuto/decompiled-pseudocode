/*
 * XREFs of ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180625570
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180626BD0 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VWin32ProcessInfo@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VWin32ProcessInfo@@@std@@@std@@PEAX@std@@@1@AEBI@Z @ 0x180624988 (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VWin32ProcessInfo@@@std@@U-$less@I.c)
 *     ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180624D1C (--0ExeData@@QEAA@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0@Z.c)
 */

__int64 __fastcall Win32AppInfo::FindExeDataForPid(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r10d
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _BYTE v11[16]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h]
  int v13; // [rsp+50h] [rbp-19h] BYREF
  __int128 v14; // [rsp+58h] [rbp-11h] BYREF
  __int128 v15; // [rsp+68h] [rbp-1h]
  __int128 v16; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+88h] [rbp+1Fh]
  unsigned int v18; // [rsp+E0h] [rbp+77h] BYREF

  v18 = a3;
  std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<Win32ProcessInfo>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<Win32ProcessInfo>>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)(a1 + 32),
    (__int64)v11,
    &v18);
  if ( *(_BYTE *)(v12 + 25) || v5 < *(_DWORD *)(v12 + 32) || v12 == *(_QWORD *)(a1 + 32) )
  {
    *(_BYTE *)(a2 + 72) = 0;
  }
  else
  {
    ExeData::ExeData((__int64)&v13, v5, *(_QWORD *)(v12 + 40) + 24LL, a1);
    v6 = v15;
    v7 = v14;
    *(_DWORD *)a2 = v13;
    *(_QWORD *)&v15 = 0LL;
    *(_OWORD *)(a2 + 8) = v7;
    *((_QWORD *)&v15 + 1) = 7LL;
    v8 = v16;
    LOWORD(v14) = 0;
    *(_OWORD *)(a2 + 24) = v6;
    LOWORD(v16) = 0;
    v9 = v17;
    *(_QWORD *)&v17 = 0LL;
    *(_OWORD *)(a2 + 40) = v8;
    *((_QWORD *)&v17 + 1) = 7LL;
    *(_OWORD *)(a2 + 56) = v9;
    *(_BYTE *)(a2 + 72) = 1;
    std::wstring::_Tidy_deallocate((__int64)&v16);
    std::wstring::_Tidy_deallocate((__int64)&v14);
  }
  return a2;
}

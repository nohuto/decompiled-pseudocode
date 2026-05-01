/*
 * XREFs of ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180491B74
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180491198 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18049133C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x180175124 (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18048FF40 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$.c)
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804904E4 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        RTL_SRWLOCK **a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  void *v10; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    std::make_shared<PenWorkspace::Discover::AppUsageData,>((__int64 *)&v10);
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    std::wstring::assign((char *)v10, a2, v6);
    *((_DWORD *)v10 + 8) = 15;
    *((_BYTE *)v10 + 44) = 1;
    v14 = *a3;
    v14 += 1250000;
    *a3 = v14;
    *(_QWORD *)((char *)v10 + 36) = *a3;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 21);
    v7 = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>,0>>::_Try_emplace<std::wstring const &,>(
           &this[2].Ptr,
           (__int64)v12,
           (unsigned __int8 *)v10);
    std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=((__int64 *)(*(_QWORD *)v7 + 48LL), &v10);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v14) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2DF,
                     (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                     v8);
    return (unsigned int)v14;
  }
  return result;
}

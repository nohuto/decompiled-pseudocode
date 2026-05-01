/*
 * XREFs of ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x1803E3158
 * Callers:
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D52DC (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AD80C (-TrimItemsToMaxSize@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800ADA48 (-SortNewestToOldest@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1803E1D24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1803E3F84 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall JsonGameMruManager::AddMruItem(__int64 a1, __int64 **a2)
{
  __int64 **v2; // r14
  __int64 *v4; // rbx
  __int64 *v5; // r13
  __int64 *v6; // rsi
  __int64 *v7; // r15
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  __int64 *v12; // r15
  std::_Ref_count_base *v13; // rcx
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // r9
  std::_Ref_count_base *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v20; // [rsp+60h] [rbp+8h]

  v2 = a2;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v4 = *(__int64 **)(a1 + 56);
  v5 = v4 + 2;
LABEL_2:
  v20 = v5;
  while ( 1 )
  {
    v6 = *(__int64 **)(a1 + 64);
    if ( v4 == v6 )
      break;
    v7 = *v2;
    if ( !(*v2)[7] )
      goto LABEL_40;
    v8 = v7 + 5;
    v9 = (_QWORD *)(*v4 + 40);
    if ( (unsigned __int64)v7[8] >= 8 )
      v8 = (_QWORD *)*v8;
    if ( *(_QWORD *)(*v4 + 64) >= 8uLL )
      v9 = (_QWORD *)*v9;
    if ( !std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v9, *(_QWORD *)(*v4 + 56), (__int64)v8, v7[7]) )
    {
LABEL_40:
      if ( !v7[11] )
        goto LABEL_16;
      v10 = v7 + 9;
      v11 = (_QWORD *)(*v4 + 72);
      if ( (unsigned __int64)v7[12] >= 8 )
        v10 = (_QWORD *)*v10;
      if ( *(_QWORD *)(*v4 + 96) >= 8uLL )
        v11 = (_QWORD *)*v11;
      if ( !std::_Traits_equal<std::char_traits<unsigned short>>(
              (__int64)v11,
              *(_QWORD *)(*v4 + 88),
              (__int64)v10,
              v7[11]) )
      {
LABEL_16:
        v4 += 2;
        v5 += 2;
        goto LABEL_2;
      }
    }
    v12 = v5;
    if ( v5 != v6 )
    {
      do
      {
        std::shared_ptr<KBViewInfo>::operator=((__int64 *)((char *)v12 + (char *)v4 - (char *)v20), v12);
        v12 += 2;
      }
      while ( v12 != v6 );
      v5 = v20;
    }
    v13 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 64) - 8LL);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    *(_QWORD *)(a1 + 64) -= 16LL;
  }
  try
  {
    if ( v6 == *(__int64 **)(a1 + 72) )
    {
      std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
        (__int64 *)(a1 + 56),
        *(_QWORD *)(a1 + 64),
        v2);
    }
    else
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        *(_QWORD **)(a1 + 64),
        v2);
      *(_QWORD *)(a1 + 64) += 16LL;
    }
    JsonGameMruManager::SortNewestToOldest(a1, v14, v15, v16);
    JsonGameMruManager::TrimItemsToMaxSize((unsigned __int8 *)a1);
    JsonGameMruManager::SerializeToJsonFile(a1);
    if ( a1 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x92,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v17);
    v2 = a2;
  }
  v18 = (std::_Ref_count_base *)v2[1];
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
}

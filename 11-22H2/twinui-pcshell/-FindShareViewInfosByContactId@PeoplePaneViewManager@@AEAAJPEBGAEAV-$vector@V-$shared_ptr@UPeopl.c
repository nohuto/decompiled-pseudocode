/*
 * XREFs of ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x1804B3334
 * Callers:
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1804B2DA0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1803E1D24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindShareViewInfosByContactId(RTL_SRWLOCK *a1, char *a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char **Ptr; // rbp
  char **i; // rbx
  int v9; // eax
  _QWORD *v10; // rcx

  v6 = a1 + 16;
  AcquireSRWLockShared(a1 + 16);
  Ptr = (char **)a1[18].Ptr;
  for ( i = (char **)a1[17].Ptr; i != Ptr; i += 2 )
  {
    if ( *((_DWORD *)*i + 15) == 1 )
    {
      LOBYTE(v9) = std::wstring::compare(*i, a2);
      if ( !v9 )
      {
        v10 = (_QWORD *)a3[1];
        if ( v10 == (_QWORD *)a3[2] )
        {
          std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
            a3,
            a3[1],
            i);
        }
        else
        {
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            v10,
            i);
          a3[1] += 16LL;
        }
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}

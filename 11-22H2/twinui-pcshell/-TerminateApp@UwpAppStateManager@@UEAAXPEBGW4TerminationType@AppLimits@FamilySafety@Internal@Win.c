/*
 * XREFs of ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806234C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004F3E0 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18062315C (-GetActiveViews@UwpAppPackageInfo@@QEAA-AV-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exc.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1806275D8 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall UwpAppStateManager::TerminateApp(RTL_SRWLOCK *a1, char *a2)
{
  RTL_SRWLOCK *v4; // rsi
  char *Ptr; // r14
  char *v6; // rbx
  char *v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 ActiveViews; // rbx
  struct IWinRTApplicationView **v11; // rdi
  struct IWinRTApplicationView **i; // rbx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h]
  _QWORD v18[3]; // [rsp+48h] [rbp-18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v4 = a1 + 6;
  AcquireSRWLockShared(a1 + 6);
  Ptr = (char *)a1[7].Ptr;
  v6 = (char *)*((_QWORD *)Ptr + 1);
  v7 = Ptr;
  while ( !v6[25] )
  {
    LOBYTE(v8) = std::wstring::compare(v6 + 32, a2);
    if ( v8 >= 0 )
    {
      v7 = v6;
      v6 = *(char **)v6;
    }
    else
    {
      v6 = (char *)*((_QWORD *)v6 + 2);
    }
  }
  if ( v7[25] || (LOBYTE(v9) = std::wstring::compare(v7 + 32, a2), v9 > 0) || v7 == Ptr )
  {
    v11 = (struct IWinRTApplicationView **)*((_QWORD *)&v16 + 1);
  }
  else
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v14,
      (_QWORD *)v7 + 8);
    ActiveViews = UwpAppPackageInfo::GetActiveViews(v14, (__int64)v18);
    if ( &v16 == (__int128 *)ActiveViews )
    {
      v11 = (struct IWinRTApplicationView **)*((_QWORD *)&v16 + 1);
    }
    else
    {
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(&v16);
      *(_QWORD *)&v16 = *(_QWORD *)ActiveViews;
      v11 = *(struct IWinRTApplicationView ***)(ActiveViews + 8);
      *((_QWORD *)&v16 + 1) = v11;
      v17 = *(_QWORD *)(ActiveViews + 16);
      *(_QWORD *)ActiveViews = 0LL;
      *(_QWORD *)(ActiveViews + 8) = 0LL;
      *(_QWORD *)(ActiveViews + 16) = 0LL;
    }
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(v18);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  for ( i = (struct IWinRTApplicationView **)v16; i != v11; ++i )
    CloseWinRTApplicationView(*i);
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(&v16);
}

/*
 * XREFs of ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180565BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18022B968 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180232220 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180565890 (-GetActiveViews@UwpAppPackageInfo@@QEAA-AV-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exc.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x180569A20 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpAppStateManager::TerminateApp(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  int v8; // eax
  int v9; // eax
  __int64 ActiveViews; // rbx
  struct IWinRTApplicationView **v11; // rdi
  struct IWinRTApplicationView **i; // rbx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  _BYTE v17[24]; // [rsp+48h] [rbp-18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+80h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v4 = a1 + 6;
  AcquireSRWLockShared(a1 + 6);
  v18 = v4;
  Ptr = a1[7].Ptr;
  v6 = (_QWORD *)Ptr[1];
  v7 = Ptr;
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      LOBYTE(v8) = std::wstring::compare(v6 + 4, a2);
      if ( v8 >= 0 )
      {
        Ptr = v6;
        v6 = (_QWORD *)*v6;
      }
      else
      {
        v6 = (_QWORD *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v7 = a1[7].Ptr;
  }
  if ( *((_BYTE *)Ptr + 25) || (LOBYTE(v9) = std::wstring::compare(Ptr + 4, a2), v9 > 0) || Ptr == v7 )
  {
    v11 = (struct IWinRTApplicationView **)*((_QWORD *)&v15 + 1);
  }
  else
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v13,
      Ptr + 8);
    ActiveViews = UwpAppPackageInfo::GetActiveViews(v13, (__int64)v17);
    if ( &v15 == (__int128 *)ActiveViews )
    {
      v11 = (struct IWinRTApplicationView **)*((_QWORD *)&v15 + 1);
    }
    else
    {
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v15);
      *(_QWORD *)&v15 = *(_QWORD *)ActiveViews;
      v11 = *(struct IWinRTApplicationView ***)(ActiveViews + 8);
      *((_QWORD *)&v15 + 1) = v11;
      v16 = *(_QWORD *)(ActiveViews + 16);
      *(_QWORD *)ActiveViews = 0LL;
      *(_QWORD *)(ActiveViews + 8) = 0LL;
      *(_QWORD *)(ActiveViews + 16) = 0LL;
    }
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)v17);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
  for ( i = (struct IWinRTApplicationView **)v15; i != v11; ++i )
    CloseWinRTApplicationView(*i);
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v15);
}

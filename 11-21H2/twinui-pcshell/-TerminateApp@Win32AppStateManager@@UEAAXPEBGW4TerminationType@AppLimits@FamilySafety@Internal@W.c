/*
 * XREFs of ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805688B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1800AF200 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIThreadPoolTimerStatics@Threading@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIThreadPoolTimerStatics@Threading@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180566954 (--$GetActivationFactory@UIThreadPoolTimerStatics@Threading@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4___ @ 0x180566A24 (wil--MakeAgileCallback_Windows--System--Threading--ITimerElapsedHandler__lambda_47c0868eeef6d2db.c)
 *     ??$_Emplace@AEAPEBGU?$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@_N@1@AEAPEBG$$QEAU?$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@1@@Z @ 0x180566D98 (--$_Emplace@AEAPEBGU-$pair@HW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@std@@@-$.c)
 *     ??0?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805673C0 (--0-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180568CD4 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Win32AppStateManager::TerminateApp(__int64 a1, _WORD *a2, int a3)
{
  _WORD *v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rbx
  const WCHAR *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, __int64, __int64 *); // rdi
  int v19; // eax
  _DWORD *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  __int64 v24; // r9
  int v25; // [rsp+20h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  _WORD *v27; // [rsp+38h] [rbp-38h] BYREF
  RTL_SRWLOCK *v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30[3]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v4 = a2;
  v27 = a2;
  wil::AcquireSRWLockExclusive(&v28, (RTL_SRWLOCK *)(a1 + 56));
  std::wstring::wstring(&v29, v4);
  LOBYTE(v6) = a3 == 1;
  LOBYTE(v4) = Win32AppStateManager::TerminateAppOnce(a1, &v29, v6);
  std::wstring::_Tidy_deallocate((__int64)&v29);
  if ( (_BYTE)v4 )
  {
    LODWORD(v26) = 1;
    HIDWORD(v26) = a3;
    std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::_Emplace<unsigned short const * &,std::pair<int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>(
      (__int64 *)(a1 + 80),
      (__int64)&v29,
      &v27,
      &v26);
    v8 = (__int64 *)(a1 + 152);
    if ( !*(_QWORD *)(a1 + 152) )
    {
      v9 = wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(
             &v27,
             a1);
      v29 = a1;
      v10 = *v9;
      *v9 = 0LL;
      v30[0] = v10;
      wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4___(
        &v26,
        (__int64)&v29);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(v30);
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v27);
      v13 = 10000000LL * *(unsigned int *)(a1 + 160);
      if ( !*(_QWORD *)(a1 + 144) )
      {
        v14 = wil::GetActivationFactory<Windows::System::Threading::IThreadPoolTimerStatics>(
                (const WCHAR *)&v29,
                v11,
                v12);
        v15 = *(_QWORD *)v14;
        *(_QWORD *)v14 = 0LL;
        v16 = *(_QWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 144) = v15;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v29);
      }
      v17 = *(_QWORD *)(a1 + 144);
      v18 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v17 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v8);
      v19 = v18(v17, v26, v13, v8);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C0,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
          (const char *)(unsigned int)v19,
          v25);
      v20 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                        (__int64)retaddr,
                        _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
      if ( *v20 > 5u )
      {
        v29 = (__int64)L"Started termination timer";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (int)v20,
          (int)&dword_1806C73B1,
          0,
          v21,
          (const WCHAR **)&v29);
      }
      v22 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
  }
  else
  {
    v23 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                      v7,
                      _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
    if ( *v23 > 5u )
    {
      v29 = (__int64)L"App to terminate was not found to be active";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v23,
        (int)&dword_1806C73B1,
        0,
        v24,
        (const WCHAR **)&v29);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
}

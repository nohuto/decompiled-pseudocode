/*
 * XREFs of ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x18063F3CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__&_::Run @ 0x18063F1F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__-_--Run.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801335B0 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1801335B0.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x180187750 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1801BD1EC (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?make_folder_change_reader@wil@@YA?AV?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEBG_NW4FolderChangeEvents@1@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18021DF80 (-make_folder_change_reader@wil@@YA-AV-$unique_any_t@V-$folder_change_reader_t@V-$unique_storage@.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x1802E8A70 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UREGKEYINFO@@@std@@@?$list@V?$shared_ptr@UREGKEYINFO@@@std@@V?$allocator@V?$shared_ptr@UREGKEYINFO@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UREGKEYINFO@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UREGKEYINFO@@@1@@Z @ 0x18063D64C (--$_Emplace@AEBV-$shared_ptr@UREGKEYINFO@@@std@@@-$list@V-$shared_ptr@UREGKEYINFO@@@std@@V-$allo.c)
 *     ??0REGKEYINFO@@QEAA@AEAU0@@Z @ 0x18063DA9C (--0REGKEYINFO@@QEAA@AEAU0@@Z.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180641FCC (--0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V-$basic_string@GU-.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x1806422A8 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall StartupAppMonitor::StartMonitor(StartupAppMonitor *this)
{
  int v2; // r15d
  wil::details *v3; // rcx
  wil::details *Event; // rsi
  wil::details *v5; // rdi
  DWORD LastError; // ebx
  void *v7; // rdx
  struct REGKEYINFO *v8; // r13
  HKEY v9; // rax
  BYTE v10; // di
  _DWORD *v11; // rdi
  int v12; // r15d
  _DWORD *v13; // rsi
  __int64 v14; // rbx
  _DWORD *v15; // rdi
  unsigned int v16; // eax
  std::_Ref_count_base *v17; // rcx
  wil::details::registry_watcher_state *v18; // rbx
  char *i; // rbx
  RTL_SRWLOCK *v20; // rdi
  _QWORD *v21; // rax
  StartupNotification **v22; // rsi
  std::_Ref_count_base *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdx
  wil::details::folder_change_reader_state **v27; // rax
  wil::details::folder_change_reader_state **v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  wil::details *v31; // rcx
  HANDLE v32; // rsi
  wil::details *v33; // rdi
  DWORD v34; // ebx
  void *v35; // rdx
  HKEY v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  const char *v39; // r9
  unsigned int phkResult; // [rsp+20h] [rbp-278h]
  unsigned int phkResulta; // [rsp+20h] [rbp-278h]
  BYTE Data[8]; // [rsp+50h] [rbp-248h] BYREF
  wil::details::registry_watcher_state *v43; // [rsp+58h] [rbp-240h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-238h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+68h] [rbp-230h] BYREF
  HKEY v46; // [rsp+78h] [rbp-220h] BYREF
  _DWORD *v47; // [rsp+80h] [rbp-218h] BYREF
  std::_Ref_count_base *v48; // [rsp+88h] [rbp-210h]
  __int128 v49; // [rsp+90h] [rbp-208h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-1F8h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-1E8h]
  _QWORD *v52; // [rsp+C0h] [rbp-1D8h]
  __int64 v53; // [rsp+C8h] [rbp-1D0h] BYREF
  std::_Ref_count_base *v54; // [rsp+D0h] [rbp-1C8h]
  __int64 v55; // [rsp+D8h] [rbp-1C0h] BYREF
  std::_Ref_count_base *v56; // [rsp+E0h] [rbp-1B8h]
  _DWORD *v57; // [rsp+E8h] [rbp-1B0h]
  __int128 v58; // [rsp+F0h] [rbp-1A8h] BYREF
  _QWORD v59[4]; // [rsp+100h] [rbp-198h] BYREF
  __int64 v60[4]; // [rsp+120h] [rbp-178h] BYREF
  __int64 v61[4]; // [rsp+140h] [rbp-158h] BYREF
  char v62[8]; // [rsp+160h] [rbp-138h] BYREF
  __int64 (__fastcall **v63)(void *); // [rsp+168h] [rbp-130h] BYREF
  __int128 v64; // [rsp+170h] [rbp-128h]
  __int64 (__fastcall ***v65)(void *); // [rsp+1D0h] [rbp-C8h]
  char v66[8]; // [rsp+1E0h] [rbp-B8h] BYREF
  __int64 (__fastcall **v67)(void *); // [rsp+1E8h] [rbp-B0h] BYREF
  __int128 v68; // [rsp+1F0h] [rbp-A8h]
  __int64 (__fastcall ***v69)(void *); // [rsp+250h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v2 = 0;
  LODWORD(v43) = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v5 = StartupAppMonitor::s_showNotificationMapUpdateEvent;
    if ( StartupAppMonitor::s_showNotificationMapUpdateEvent )
    {
      LastError = GetLastError();
      wil::details::CloseHandle(v5, v7);
      SetLastError(LastError);
    }
    StartupAppMonitor::s_showNotificationMapUpdateEvent = Event;
  }
  else
  {
    wil::details::GetLastErrorFailHr(v3);
  }
  v46 = 0LL;
  *(_DWORD *)Data = RegOpenKeyExW(
                      HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
                      0,
                      0x20019u,
                      &v46) != 2;
  v8 = (StartupAppMonitor *)((char *)this + 184);
  v9 = (HKEY)((char *)this + 496);
  hKey = (HKEY)((char *)this + 496);
  v10 = Data[0];
  try
  {
    while ( v8 != (struct REGKEYINFO *)v9 )
    {
      v11 = operator new(0x78uLL);
      v11[2] = 1;
      v11[3] = 1;
      *(_QWORD *)v11 = &std::_Ref_count_obj2<REGKEYINFO>::`vftable';
      REGKEYINFO::REGKEYINFO((REGKEYINFO *)(v11 + 4), v8);
      v12 = v2 | 1;
      v47 = v11 + 4;
      v48 = (std::_Ref_count_base *)v11;
      std::list<std::shared_ptr<REGKEYINFO>>::_Emplace<std::shared_ptr<REGKEYINFO> const &>(
        (__int64)this + 144,
        *((_QWORD *)this + 18),
        &v47);
      v13 = v47;
      v14 = (__int64)(v47 + 2);
      v15 = operator new(0x80uLL);
      v57 = v15;
      v15[2] = 1;
      v15[3] = 1;
      *(_QWORD *)v15 = &std::_Ref_count_obj2<StartupRegKeyNotification>::`vftable';
      v52 = v59;
      SRWLock[0] = (PSRWLOCK)std::wstring::wstring(v59, (__int64)(v13 + 12));
      LODWORD(v43) = v13[10];
      v16 = (unsigned int)std::wstring::wstring(v60, v14);
      StartupRegKeyNotification::StartupRegKeyNotification(
        (_DWORD)v15 + 16,
        *(_QWORD *)v13,
        v16,
        (_DWORD)v43,
        (__int64)SRWLock[0]);
      *((_QWORD *)v13 + 10) = v15 + 4;
      v17 = (std::_Ref_count_base *)*((_QWORD *)v13 + 11);
      *((_QWORD *)v13 + 11) = v15;
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v53,
        &v47);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v49,
        &v53);
      v63 = &off_1807C8390;
      v64 = v49;
      v49 = 0LL;
      v65 = &v63;
      if ( *(_QWORD *)(v14 + 24) >= 8uLL )
        v14 = *(_QWORD *)v14;
      v43 = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        (__int64)&v43,
        *(HKEY *)v13,
        (const WCHAR *)v14,
        0,
        (__int64)v62);
      v2 = v12 | 6;
      if ( v13 + 24 == (_DWORD *)&v43 )
      {
        v18 = v43;
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
          (wil::details::registry_watcher_state **)v13 + 12,
          v43);
        v18 = 0LL;
        v43 = 0LL;
      }
      if ( v18 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)v18 + 19);
        SRWLock[0] = (PSRWLOCK)((char *)v18 + 152);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 37, 0xFFFFFFFF) == 1 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
            SRWLock,
            0LL);
          wil::details::registry_watcher_state::`scalar deleting destructor'(v43);
        }
        if ( SRWLock[0] )
          ReleaseSRWLockExclusive(SRWLock[0]);
      }
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v62);
      v10 = Data[0];
      StartupNotification::CheckForChange(*((StartupNotification **)v13 + 10));
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      if ( v48 )
        std::_Ref_count_base::_Decref(v48);
      v8 = (struct REGKEYINFO *)((char *)v8 + 104);
      v9 = hKey;
    }
    for ( i = (char *)this + 496; i != (char *)this + 672; i += 88 )
    {
      v20 = (RTL_SRWLOCK *)operator new(0x78uLL);
      SRWLock[1] = v20;
      LODWORD(v20[1].Ptr) = 1;
      HIDWORD(v20[1].Ptr) = 1;
      v20->Ptr = &std::_Ref_count_obj2<StartupFolderNotification>::`vftable';
      v21 = std::wstring::wstring(v61, (__int64)(i + 32));
      v58 = *(_OWORD *)i;
      StartupFolderNotification::StartupFolderNotification(
        &v20[2],
        &v58,
        *((unsigned int *)i + 4),
        *((_QWORD *)i + 3),
        v21);
      v2 |= 8u;
      v22 = (StartupNotification **)(i + 64);
      *((_QWORD *)i + 8) = v20 + 2;
      v23 = (std::_Ref_count_base *)*((_QWORD *)i + 9);
      *((_QWORD *)i + 9) = v20;
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v55,
        (_QWORD *)i + 8);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v50,
        &v55);
      v67 = &off_1807C8428;
      v68 = v50;
      v50 = 0LL;
      v69 = &v67;
      v26 = (_QWORD *)((char *)*v22 + 64);
      if ( *((_QWORD *)*v22 + 11) >= 8uLL )
        v26 = (_QWORD *)*v26;
      v27 = (wil::details::folder_change_reader_state **)wil::make_folder_change_reader(
                                                           &hKey,
                                                           (__int64)v26,
                                                           v24,
                                                           v25,
                                                           (int)v66);
      v28 = v27;
      if ( i + 80 != (char *)v27 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
          (wil::details::folder_change_reader_state **)i + 10,
          *v27);
        *v28 = 0LL;
      }
      if ( hKey )
        wil::details::folder_change_reader_state::`scalar deleting destructor'((wil::details::folder_change_reader_state *)hKey);
      wistd::function<bool (long)>::~function<bool (long)>((__int64)v66);
      v10 = Data[0];
      StartupNotification::CheckForChange(*v22);
      if ( v56 )
        std::_Ref_count_base::_Decref(v56);
    }
    if ( !v10 )
    {
      hKey = 0LL;
      v29 = RegCreateKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications\\Settings\\Windows.SystemToast.StartupApp",
              0,
              0LL,
              0,
              0x102u,
              0LL,
              &hKey,
              0LL);
      if ( v29 )
        wil::details::in1diag3::Throw_Win32(
          retaddr,
          161LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)v29,
          phkResult);
      *(_DWORD *)Data = 0;
      v30 = RegSetValueExW(hKey, L"Enabled", 0, 4u, Data, 4u);
      if ( v30 )
        wil::details::in1diag3::Throw_Win32(
          retaddr,
          164LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)v30,
          phkResulta);
      if ( hKey )
        RegCloseKey(hKey);
    }
    v32 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( v32 )
    {
      GetLastError();
      v33 = (wil::details *)*((_QWORD *)this + 22);
      if ( v33 )
      {
        v34 = GetLastError();
        wil::details::CloseHandle(v33, v35);
        SetLastError(v34);
      }
      *((_QWORD *)this + 22) = v32;
    }
    else
    {
      wil::details::GetLastErrorFailHr(v31);
    }
    v36 = (HKEY)operator new(0x10uLL);
    *(_QWORD *)v36 = this;
    *((_QWORD *)v36 + 1) = StartupAppMonitor::StartupToastNotifier;
    hKey = v36;
    *(_QWORD *)&v51 = _o__beginthreadex(
                        0LL,
                        0LL,
                        ____Invoke_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___0A__00_thread_std__CAIPEAX_Z);
    if ( (_QWORD)v51 )
    {
      if ( *((_DWORD *)this + 42) )
      {
        _o_terminate(v38, v37);
        __debugbreak();
      }
      *((_OWORD *)this + 10) = v51;
      if ( v46 )
        RegCloseKey(v46);
    }
    else
    {
      DWORD2(v51) = 0;
      std::_Throw_Cpp_error(6);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v39);
  }
}

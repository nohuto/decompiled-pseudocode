/*
 * XREFs of _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___::Run @ 0x18020BA10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a9ec3bdba9975d084688ff203e80696___--Run.c)
 * Callees:
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180038680 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800E15CC (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1801E485C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x1802D2990 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802DBC10 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1802DC620 (-SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z.c)
 *     ?WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802DC7D6 (-WatchCurrentThread@TouchKeyboardExperienceTelemetryLogger@@SA-AVActivityThreadWatcher@wil@@PEBD.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802DC8F2 (-stoul@std@@YAKAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18050B238 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _anonymous_namespace_::GetViewTypeFromInputKind @ 0x1805110B0 (_anonymous_namespace_--GetViewTypeFromInputKind.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x18051D74C (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_5a9ec3bdba9975d084688ff203e80696_::operator()(Microsoft::WRL::WeakRef *this)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  wchar_t *v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v15; // rcx
  __int64 v16; // rax
  char v17; // bl
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rcx
  int ViewInfo; // eax
  __int64 v22; // r8
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  struct IInspectable *v29; // [rsp+40h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v30; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v33[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v34[80]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v36[32]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  TouchKeyboardExperienceTelemetryLogger::WatchCurrentThread(v34, "OnInputAppPropertyChangedQueuedTask");
  v2 = 0;
  v29 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(this, &v29);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16AC,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v29 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    goto LABEL_42;
  }
  v4 = std::wstring::find((_QWORD *)this + 2, (__int64)L"ViewIdForInputKind:", 0LL);
  v5 = (_QWORD *)((char *)this + 16);
  if ( v4 == -1 )
  {
    if ( (unsigned int)std::wstring::compare(v5, L"KeyboardLayoutChangePending") )
      goto LABEL_42;
    v16 = *((_QWORD *)this + 1);
    if ( *(_DWORD *)(v16 + 616) != 1 )
      goto LABEL_42;
    v17 = *(_BYTE *)(v16 + 944);
    v18 = std::stoi((wchar_t *)this + 24);
    v19 = *((_QWORD *)this + 1);
    *(_BYTE *)(v19 + 944) = v18 == 1;
    if ( !v17 || *(_BYTE *)(v19 + 944) || *(_DWORD *)(v19 + 940) != 2 )
      goto LABEL_42;
    v20 = *(_QWORD *)(v19 + 816);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 96LL))(v20);
    v32 = 0LL;
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(v19, *(unsigned int *)(v19 + 612), &v32);
    v12 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16DE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      v14 = (std::_Ref_count_base *)*((_QWORD *)&v32 + 1);
      goto LABEL_24;
    }
    v23 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(v19 + 840), 1) )
    {
      while ( *(_DWORD *)(v19 + 840) )
      {
        v24 = v23;
        if ( !v23 )
          goto LABEL_32;
        do
        {
          _mm_pause();
          --v24;
        }
        while ( v24 );
        if ( v23 >= 64 )
          v23 = 64;
        else
LABEL_32:
          v23 *= 2;
      }
    }
    v35 = *(_OWORD *)(v19 + 844);
    _InterlockedExchange((volatile __int32 *)(v19 + 840), 0);
    LOBYTE(v22) = 1;
    v25 = v32;
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                v19,
                v32,
                v22,
                &v35,
                *(_DWORD *)(v19 + 948),
                L"LayoutReadyAppProperty") < 0 )
    {
      *(_OWORD *)&v33[1] = *(_OWORD *)(v25 + 120);
      v26 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
              (TouchKeyboardExperienceManager *)v19,
              *(_DWORD *)(v19 + 612),
              (struct tagRECT *)&v33[1],
              (const struct tagRECT *)(v25 + 136));
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x16E2,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v26);
      _InterlockedExchange((volatile __int32 *)(v19 + 940), 0);
    }
    v15 = (std::_Ref_count_base *)*((_QWORD *)&v32 + 1);
  }
  else
  {
    v6 = (wchar_t *)std::wstring::substr(v5, (__int64)v36, 0x13uLL, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = std::stoul(v6);
    std::wstring::_Tidy_deallocate((__int64)v36);
    LODWORD(v28) = anonymous_namespace_::GetViewTypeFromInputKind(v7);
    v8 = std::stoul((wchar_t *)this + 24);
    v9 = v8;
    if ( !v7 )
      TouchKeyboardExperienceManager::SetPrimaryViewId(*((TouchKeyboardExperienceManager **)this + 1), v8);
    v31 = 0LL;
    v10 = *((_QWORD *)this + 1);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(v10, v9, &v31) < 0 )
    {
      v11 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded((TouchKeyboardExperienceManager *)(v10 + 200));
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 5835LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
        v14 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
LABEL_24:
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v2 = v12;
        goto LABEL_42;
      }
      v11 = TouchKeyboardExperienceManager::FindViewInfo(v10, v9, &v31);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 5836LL;
        goto LABEL_13;
      }
    }
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v10 + 424, (__int64)&v30);
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
      v31 + 40,
      v36,
      &v28);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v30);
    v15 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
LABEL_42:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v34);
  return v2;
}

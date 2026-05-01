/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C4424
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x1801BF850 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1800C4710 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186688 (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186908 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019BBA4 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1801BD5FC (_anonymous_namespace_--GetCurTime.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x180490C6C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180491198 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HANDLE CurrentThread; // rax
  HRESULT Instance; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  DWORD v6; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r15d
  int v11; // eax
  RTL_SRWLOCK *v12; // rdi
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  int v15; // eax
  int Defaults; // eax
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rax
  int ppv; // [rsp+20h] [rbp-50h]
  struct _FILETIME FileTime; // [rsp+30h] [rbp-40h] BYREF
  char *v23; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v24[4]; // [rsp+40h] [rbp-30h]
  _SYSTEMTIME SystemTime; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"PenWorkspace work queue");
  CoInitializeEx(0LL, 2u);
  if ( *((_QWORD *)this + 23)
    || (Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 23),
        Instance = CoCreateInstance(
                     &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)this + 23),
        Instance >= 0) )
  {
    if ( (int)PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this) < 0 )
    {
      PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk();
      Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
      if ( Defaults < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x152,
          (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)Defaults,
          ppv);
    }
    anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
    FileTime = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    v4 = HIDWORD(*(unsigned __int64 *)&FileTime);
    v5 = 0LL;
    *((_DWORD *)this + 44) = FileTime.dwLowDateTime;
LABEL_5:
    *((_DWORD *)this + 45) = v4;
    while ( 1 )
    {
      if ( !v5 )
      {
        v6 = WaitForSingleObjectEx(*((HANDLE *)this + 19), 0xFFFFFFFF, 0);
        if ( v6 == 258 )
          break;
        if ( v6 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA2A,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
            v7);
      }
      if ( *((_BYTE *)this + 200) )
        break;
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      v8 = *((_QWORD *)this + 17);
      v23 = (char *)this + 160;
      if ( v8 )
      {
        v5 = v8 - 1;
        v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * (*((_QWORD *)this + 16) & (*((_QWORD *)this + 15) - 1LL)));
        v10 = *(_DWORD *)(v9 + 8);
        *(_QWORD *)v24 = *(_QWORD *)v9;
        *((_QWORD *)this + 17) = v8 - 1;
        if ( v8 == 1 )
          *((_QWORD *)this + 16) &= v5;
        else
          ++*((_QWORD *)this + 16);
        if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
        GetSystemTime(&SystemTime);
        SystemTimeToFileTime(&SystemTime, &FileTime);
        v11 = *((_DWORD *)this + 20);
        if ( v11 )
        {
          if ( v11 == v24[0] )
          {
            v12 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
            AcquireSRWLockExclusive(v12);
            *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v10;
            *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime;
            if ( v12 )
              ReleaseSRWLockExclusive(v12);
          }
        }
        *((_DWORD *)this + 20) = 0;
        v13 = (volatile signed __int32 *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = 0LL;
        *((_QWORD *)this + 11) = 0LL;
        if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v13);
        }
        if ( v24[1] )
          PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v24[1], &FileTime);
        if ( CompareFileTime(&FileTime, (const FILETIME *)this + 22) > 0 )
        {
          v18 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x189,
              (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v18,
              ppv);
          v19 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x18B,
              (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v19,
              ppv);
          v20 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          v4 = HIDWORD(v20);
          goto LABEL_5;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v23);
      }
    }
    v14 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v14,
        ppv);
    v15 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v15,
        ppv);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 1LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
}

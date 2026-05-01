/*
 * XREFs of ?RuntimeClassInitialize@RecentAppsCache@Discover@PenWorkspace@@QEAAJXZ @ 0x18008CBF4
 * Callers:
 *     ??$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRecentAppsCache@Discover@PenWorkspace@@@Z @ 0x18008C9C0 (--$MakeAndInitialize@VRecentAppsCache@Discover@PenWorkspace@@V123@$$V@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG1@Z @ 0x18008CCB4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B70AC (-InternalRelease@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::RuntimeClassInitialize(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int LastError; // ebx
  char *Thread; // rax
  const char *v4; // r9
  int v5; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PenWorkspace::Discover::RecentAppsCache *v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = this;
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&v9);
  LastError = 0;
  Thread = (char *)CreateThread(
                     0LL,
                     0LL,
                     PenWorkspace::Discover::RecentAppsCache::s_ProcessQueueThreadProc,
                     this,
                     0,
                     0LL);
  if ( (char *)this + 144 == &v10 )
  {
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
  }
  else
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 144,
      Thread);
  }
  if ( ((*((_QWORD *)this + 18) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v9 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize((char *)this + 208);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v5,
        dwCreationFlags);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x7F,
                  (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  v4);
  }
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalRelease(&v9);
  return LastError;
}

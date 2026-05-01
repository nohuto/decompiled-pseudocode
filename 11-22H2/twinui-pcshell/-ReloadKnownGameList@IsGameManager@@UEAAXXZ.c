/*
 * XREFs of ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x1800A87D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x1800C0358 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___ @ 0x1803DD5DC (Windows--Internal--ComTaskPool--QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall IsGameManager::ReloadKnownGameList(IsGameManager *this)
{
  int KGLFromGameDVRFolder; // eax
  __int64 v3; // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  bool v6; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+28h] BYREF
  IsGameManager *v8; // [rsp+50h] [rbp+30h] BYREF

  v7 = 0;
  if ( !_InterlockedExchange((volatile __int32 *)this + 10, 1) )
  {
    v6 = 0;
    if ( !*((_QWORD *)this + 3) )
    {
      KGLFromGameDVRFolder = IsGameManager::LoadKGLFromGameDVRFolder(this, 0);
      if ( KGLFromGameDVRFolder < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1C4,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)KGLFromGameDVRFolder,
          savedregs);
    }
    IsGameManager::UpdateGameDVRKGLCopy(this, *((_DWORD *)this + 11), &v6);
    SHRegGetDWORD(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
      L"KGLToGCSUpdatedRevision",
      &v7);
    if ( v6 || v7 != *((_DWORD *)this + 11) )
    {
      v8 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      v8 = this;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      Windows::Internal::ComTaskPool::QueueTask__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___(v3, &v8);
      if ( v8 )
        (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)this + 16LL))(this);
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)this + 10, 0);
    }
  }
}

/*
 * XREFs of ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x180149280
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x1800EBC44 (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1801493E8 (-IsGameManager_DirChangeCallback@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall IsGameManager::DirChangeCallback(PVOID a1)
{
  __int64 v1; // rdi
  const WCHAR *v3; // rax
  IsGameManager *v4; // rcx
  const WCHAR *v5; // rax
  const char *v6; // r9
  void *v7; // rdx
  const char *v8; // r9
  void *v9; // rcx
  const WCHAR *StringRawBuffer; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *phNewWaitObject; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  GameDVRTraceProvider::IsGameManager_DirChangeCallback(*((const unsigned __int16 **)a1 + 1));
  if ( IsGameManager::_pStaticThis && *((_BYTE *)IsGameManager::_pStaticThis + 48) != 1 )
  {
    if ( *(_DWORD *)a1 == 1
      || (StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 6), 0LL), PathFileExistsW(StringRawBuffer)) )
    {
      (*(void (__fastcall **)(struct IsGameManager *))(*(_QWORD *)IsGameManager::_pStaticThis + 48LL))(IsGameManager::_pStaticThis);
    }
    v3 = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 7), 0LL);
    if ( *((_DWORD *)a1 + 7) == PathFileExistsW(v3)
      || (v5 = WindowsGetStringRawBuffer(*((HSTRING *)a1 + 8), 0LL), !PathFileExistsW(v5)) )
    {
      v11 = IsGameManager::RegisterKGLLocationForNotifications(v4, (struct KGLUpdateLocationInfo *)a1);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x863,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v11);
    }
    else if ( v1 == *((_QWORD *)a1 + 4) )
    {
      if ( !FindNextChangeNotification(*((HANDLE *)a1 + 4)) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x86B,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          v6);
      v7 = (void *)*((_QWORD *)a1 + 4);
      phNewWaitObject = (void *)-1LL;
      if ( RegisterWaitForSingleObject(&phNewWaitObject, v7, IsGameManager::DirChangeCallback, a1, 0xFFFFFFFF, 0xCu) )
      {
        v9 = (void *)_InterlockedExchange64((volatile __int64 *)a1 + 5, (__int64)phNewWaitObject);
        if ( v9 != (void *)-1LL )
          UnregisterWait(v9);
      }
      else
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x884,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          v8);
      }
    }
  }
}

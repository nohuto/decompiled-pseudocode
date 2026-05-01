/*
 * XREFs of _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$4 @ 0x1804DA9BE
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize_::_1_::catch_4(wil *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  void *v5; // rdx
  CCriticalFailureHandler *v6; // rcx
  int v7; // ebx
  char v8; // al
  unsigned __int64 *v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-20h]

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v4 + 288) = v3;
  wil::details::SetEvent(*(wil::details **)(v4 + 264), v5);
  v7 = *(_DWORD *)(v4 + 288);
  *(_DWORD *)(a2 + 48) = v7;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)(a2 + 56)) >= 0 )
  {
    switch ( *(_DWORD *)(a2 + 56) )
    {
      case 2:
        v7 = -2023406815;
        goto LABEL_11;
      case 3:
        v7 = -2023406814;
        goto LABEL_11;
      case 4:
        v7 = -2147418094;
        goto LABEL_11;
      case 5:
        v7 = -2147022986;
LABEL_11:
        *(_DWORD *)(a2 + 48) = v7;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( v7 >= 0 )
    goto LABEL_19;
  if ( v7 != -2147024882 && v7 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      0x48u,
      v10,
      v11);
    v7 = *(_DWORD *)(a2 + 48);
  }
  if ( v7 >= 0 )
LABEL_19:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
    return 1LL;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 136),
      (void *)0x48,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
  return 0LL;
}

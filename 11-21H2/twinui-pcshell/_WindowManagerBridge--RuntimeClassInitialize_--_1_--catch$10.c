/*
 * XREFs of _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$10 @ 0x18021D5B7
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize_::_1_::catch_10(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // rdx
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  char v7; // al
  unsigned __int64 *v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(v3 + 288) = wil::ResultFromCaughtException(a1);
  wil::details::SetEvent(*(wil::details **)(v3 + 264), v4);
  v6 = *(_DWORD *)(v3 + 288);
  *(_DWORD *)(a2 + 48) = v6;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)(a2 + 56)) >= 0 )
  {
    switch ( *(_DWORD *)(a2 + 56) )
    {
      case 2:
        v6 = -2023406815;
        goto LABEL_11;
      case 3:
        v6 = -2023406814;
        goto LABEL_11;
      case 4:
        v6 = -2147418094;
        goto LABEL_11;
      case 5:
        v6 = -2147022986;
LABEL_11:
        *(_DWORD *)(a2 + 48) = v6;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( v6 >= 0 )
    goto LABEL_19;
  if ( v6 != -2147024882 && v6 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      0x48u,
      v9,
      v10);
    v6 = *(_DWORD *)(a2 + 48);
  }
  if ( v6 >= 0 )
LABEL_19:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
    return 1LL;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 136),
      (void *)0x48,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}

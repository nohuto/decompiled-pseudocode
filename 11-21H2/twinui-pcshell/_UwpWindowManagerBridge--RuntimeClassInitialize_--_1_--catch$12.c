/*
 * XREFs of _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch$12 @ 0x1804036D2
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::catch_12(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  CCriticalFailureHandler *v4; // rcx
  int v5; // ebx
  char v6; // al
  unsigned __int64 *v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(v3 + 296) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 32LL);
  wil::details::SetEvent(*(wil::details **)(v3 + 272), (void *)a2);
  v5 = *(_DWORD *)(v3 + 296);
  *(_DWORD *)(a2 + 48) = v5;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_13;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", (unsigned int *)(a2 + 56)) >= 0 )
  {
    switch ( *(_DWORD *)(a2 + 56) )
    {
      case 2:
        v5 = -2023406815;
        goto LABEL_11;
      case 3:
        v5 = -2023406814;
        goto LABEL_11;
      case 4:
        v5 = -2147418094;
        goto LABEL_11;
      case 5:
        v5 = -2147022986;
LABEL_11:
        *(_DWORD *)(a2 + 48) = v5;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_13:
  if ( v5 >= 0 )
    goto LABEL_19;
  if ( v5 != -2147024882 && v5 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v4,
      (int *)(a2 + 48),
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      0x4Au,
      v8,
      v9);
    v5 = *(_DWORD *)(a2 + 48);
  }
  if ( v5 >= 0 )
LABEL_19:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
    return 1LL;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      *(wil::details::in1diag3 **)(a2 + 152),
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}

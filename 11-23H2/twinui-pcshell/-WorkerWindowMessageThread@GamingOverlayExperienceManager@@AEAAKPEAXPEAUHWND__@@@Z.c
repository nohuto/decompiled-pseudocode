/*
 * XREFs of ?WorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAKPEAXPEAUHWND__@@@Z @ 0x18040950C
 * Callers:
 *     ?StaticWorkerWindowMessageThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1804084B0 (-StaticWorkerWindowMessageThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WorkerWindowMessageThread(
        GamingOverlayExperienceManager *this,
        void *a2,
        HWND a3)
{
  DWORD v4; // eax
  DWORD v5; // eax
  DWORD v6; // eax
  const char *v7; // r9
  const char *v8; // r9
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  HANDLE pHandles; // [rsp+78h] [rbp+10h] BYREF

  pHandles = a2;
  while ( 1 )
  {
    v4 = MsgWaitForMultipleObjectsEx(1u, &pHandles, 0xFFFFFFFF, 0x1CFFu, 6u);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 191;
      if ( v6 && v6 != 66 )
        break;
    }
    else
    {
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
    }
  }
  if ( !CloseHandle(pHandles) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x3A1,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v7);
  if ( !DestroyWindow(a3) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x3A2,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v8);
  return 0LL;
}

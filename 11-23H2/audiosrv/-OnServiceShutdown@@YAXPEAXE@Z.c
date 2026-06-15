/*
 * XREFs of ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180157C60
 * Callers:
 *     <none>
 * Callees:
 *     ?MyServiceTerminate@@YAXXZ @ 0x180157EF8 (-MyServiceTerminate@@YAXXZ.c)
 */

void __fastcall OnServiceShutdown(void *a1)
{
  char *v1; // rbx
  char *v2; // rcx
  DWORD ThreadId; // [rsp+50h] [rbp+18h] BYREF

  if ( (char *)hServiceStartThread - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    WaitForSingleObject(hServiceStartThread, 0xFFFFFFFF);
    CloseHandle(hServiceStartThread);
    hServiceStartThread = 0LL;
  }
  v1 = 0LL;
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
    v1 = (char *)CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v2 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    WaitForSingleObject(v1, 0xFFFFFFFF);
    CloseHandle(v1);
    v2 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    hEventShutdownComplete = 0LL;
  }
  ReportStatusToSCMgr(1, dwServiceError, 0);
}

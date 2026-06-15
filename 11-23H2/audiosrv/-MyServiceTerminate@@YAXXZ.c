/*
 * XREFs of ?MyServiceTerminate@@YAXXZ @ 0x180157EF8
 * Callers:
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180157C60 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Terminate@CAudioThreadPool@@QEAAJXZ @ 0x180132F88 (-Terminate@CAudioThreadPool@@QEAAJXZ.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x180158194 (McGenEventUnregister_EtwEventUnregister.c)
 */

void MyServiceTerminate(void)
{
  bool v0; // bl
  struct IAudioService *v1; // rcx
  HANDLE v2; // rax

  v0 = CoInitializeEx(0LL, 0) >= 0;
  (*(void (**)(void))(*(_QWORD *)g_AudioService + 32LL))();
  v1 = g_AudioService;
  if ( *((_QWORD *)g_AudioService + 1) )
  {
    CM_Unregister_Notification(*((_QWORD *)g_AudioService + 1));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
  }
  if ( *((_QWORD *)v1 + 2) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 2));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 2) = 0LL;
  }
  if ( *((_QWORD *)v1 + 3) )
  {
    CM_Unregister_Notification(*((_QWORD *)v1 + 3));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 3) = 0LL;
  }
  if ( *((_QWORD *)v1 + 5) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 5));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 5) = 0LL;
  }
  if ( *((_QWORD *)v1 + 4) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 4));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 4) = 0LL;
  }
  if ( *((_QWORD *)v1 + 6) )
  {
    PowerSettingUnregisterNotification(*((HPOWERNOTIFY *)v1 + 6));
    v1 = g_AudioService;
    *((_QWORD *)g_AudioService + 6) = 0LL;
  }
  v2 = g_EventWorkerThreadHandle;
  if ( g_EventWorkerThreadHandle )
  {
    if ( g_WorkerEventPort )
    {
      PostQueuedCompletionStatus(g_WorkerEventPort, 0xFFFFFFFF, 0LL, 0LL);
      v2 = g_EventWorkerThreadHandle;
    }
    WaitForSingleObject(v2, 0xFFFFFFFF);
    if ( (char *)g_EventWorkerThreadHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      CloseHandle(g_EventWorkerThreadHandle);
      g_EventWorkerThreadHandle = 0LL;
    }
    v1 = g_AudioService;
  }
  (*(void (__fastcall **)(struct IAudioService *))(*(_QWORD *)v1 + 40LL))(v1);
  if ( g_DeviceEnumerator )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *))g_DeviceEnumerator->lpVtbl->Release)(g_DeviceEnumerator);
    g_DeviceEnumerator = 0LL;
  }
  CleanupDeviceAPI();
  if ( ThreadPool )
  {
    CAudioThreadPool::Terminate(ThreadPool);
    if ( ThreadPool )
      (**(void (__fastcall ***)(CAudioThreadPool *, __int64))ThreadPool)(ThreadPool, 1LL);
  }
  ThreadPool = 0LL;
  if ( (char *)g_WorkerEventPort - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(g_WorkerEventPort);
    g_WorkerEventPort = 0LL;
  }
  if ( g_AudioService )
    (*(void (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService, 1LL);
  g_AudioService = 0LL;
  McGenEventUnregister_EtwEventUnregister();
  if ( v0 )
    CoUninitialize();
}

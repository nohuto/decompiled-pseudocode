/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800551B4
 * Callers:
 *     ServiceStart @ 0x180055528 (ServiceStart.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x1800553EC (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister_EtwEventRegister @ 0x1800554E8 (McGenEventRegister_EtwEventRegister.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        __int64 a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  struct IAudioService *v5; // rax
  DWORD Instance; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // ebx
  DWORD ThreadId; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  HIDWORD(v11) = HIDWORD(a3);
  LODWORD(v11) = 4;
  ThreadId = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DevApiIsRunningInVM",
          0x18u,
          0LL,
          &ThreadId,
          (LPDWORD)&v11)
    && ThreadId )
  {
    return -2147019873;
  }
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v5 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_DWORD *)v5 + 16) = 0;
    McGenEventRegister_EtwEventRegister();
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 &g_DeviceEnumerator);
    if ( !Instance )
    {
      v11 = 0LL;
      if ( (**(int (__fastcall ***)(LPVOID, GUID *, __int64 *))g_DeviceEnumerator)(
             g_DeviceEnumerator,
             &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0,
             &v11) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 88LL))(v11, Instance + 1);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
      g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( g_WorkerEventPort || (Instance = GetLastError()) == 0 )
      {
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, EventWorkerThread, 0LL, 0, &ThreadId);
          if ( !g_EventWorkerThreadHandle )
            Instance = GetLastError();
        }
      }
    }
    v7 = (**(__int64 (__fastcall ***)(struct IAudioService *, _QWORD))g_AudioService)(g_AudioService, Instance);
    v8 = v7;
    if ( !v7 )
      v8 = (*(unsigned int (__fastcall **)(struct IAudioService *, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService + 8LL))(
             g_AudioService,
             a1);
    v9 = (*(__int64 (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 16LL))(
           g_AudioService,
           v8);
    CoUninitialize();
    return v9;
  }
  return result;
}

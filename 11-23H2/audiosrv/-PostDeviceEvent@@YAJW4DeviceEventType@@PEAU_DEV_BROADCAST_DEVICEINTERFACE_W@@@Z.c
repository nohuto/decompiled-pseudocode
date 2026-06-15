/*
 * XREFs of ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180009020
 * Callers:
 *     ServiceDeviceEvent @ 0x180008F34 (ServiceDeviceEvent.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800090F0 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006707C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PostDeviceEvent(int a1, unsigned int *a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  unsigned int v10; // ebx
  signed int LastError; // eax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  v5[2] = 0LL;
  *v5 = &DEVICE_EVENT::`vftable';
  *((_DWORD *)v5 + 2) = a1;
  if ( a2 )
  {
    v7 = operator new[](*a2, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (void *)v6[2];
    v6[2] = v7;
    if ( v8 )
      operator delete(v8, 0x20uLL);
    v9 = (void *)v6[2];
    if ( !v9 )
    {
      v10 = -2147024882;
LABEL_12:
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1LL);
      return v10;
    }
    memcpy_0(v9, a2, *a2);
  }
  v10 = 0;
  if ( !PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v6, 0LL) )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_12;
  }
  return v10;
}

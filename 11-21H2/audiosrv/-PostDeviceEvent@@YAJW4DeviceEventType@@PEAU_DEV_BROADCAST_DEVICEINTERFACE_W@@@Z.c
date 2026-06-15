/*
 * XREFs of ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x18015100C
 * Callers:
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180150F9C (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ServiceDeviceEvent @ 0x18015110C (ServiceDeviceEvent.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180150B8C (-Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall PostDeviceEvent(int a1, unsigned int *a2)
{
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdi
  int v6; // ebx
  signed int LastError; // eax

  v4 = operator new(0x18uLL);
  v5 = (ULONG_PTR)v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  v4[2] = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  *v4 = &DEVICE_EVENT::`vftable';
  v6 = DEVICE_EVENT::Initialize((__int64)v4, a1, a2);
  if ( v6 < 0 )
    goto LABEL_6;
  if ( !PostQueuedCompletionStatus(g_WorkerEventPort, 0, v5, 0LL) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
LABEL_6:
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1LL);
  }
  return (unsigned int)v6;
}

/*
 * XREFs of ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800090F0
 * Callers:
 *     ServiceDeviceEvent @ 0x180008F34 (ServiceDeviceEvent.c)
 * Callees:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180009020 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall OnAudioDeviceRemoval(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = PostDeviceEvent(1, &a1->dbcc_size);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"avcore\\audiocore\\server\\lib\\servicehelperutil\\audioservice.cpp",
      (const char *)(unsigned int)v2,
      v5);
  (*(void (__fastcall **)(struct IAudioService *, struct _DEV_BROADCAST_DEVICEINTERFACE_W *))(*(_QWORD *)g_AudioService
                                                                                            + 80LL))(
    g_AudioService,
    a1);
  return v3;
}

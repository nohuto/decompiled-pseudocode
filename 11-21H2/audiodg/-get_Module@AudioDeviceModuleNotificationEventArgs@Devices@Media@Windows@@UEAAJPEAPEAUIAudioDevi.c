/*
 * XREFs of ?get_Module@AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@UEAAJPEAPEAUIAudioDeviceModule@234@@Z @ 0x140080AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::get_Module(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Media::Devices::IAudioDeviceModule **a2)
{
  struct Windows::Media::Devices::IAudioDeviceModule *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = (struct Windows::Media::Devices::IAudioDeviceModule *)*((_QWORD *)this + 8);
    *a2 = v3;
    (*(void (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *))(*(_QWORD *)v3 + 8LL))(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

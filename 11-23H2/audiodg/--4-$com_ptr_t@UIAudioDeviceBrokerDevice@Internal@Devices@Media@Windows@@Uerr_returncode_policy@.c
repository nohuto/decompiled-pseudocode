/*
 * XREFs of ??4?$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140080F7C
 * Callers:
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x14007FDF0 (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice.c)
 *     ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x1400894B0 (-OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BD60 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}

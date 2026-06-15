/*
 * XREFs of ??1CVirtualAudioStream@@UEAA@XZ @ 0x18012651C
 * Callers:
 *     ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x180082B40 (--_GCVirtualAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18016322C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CVirtualAudioStream::~CVirtualAudioStream(CVirtualAudioStream *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVirtualAudioStream::`vftable';
  if ( *((_BYTE *)this + 44) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 4);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  *((_DWORD *)this + 3) = -1073741823;
}

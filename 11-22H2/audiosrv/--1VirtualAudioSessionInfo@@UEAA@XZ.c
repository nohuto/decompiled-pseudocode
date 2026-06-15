/*
 * XREFs of ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x1801265C8
 * Callers:
 *     ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x1801267E0 (--_EVirtualAudioSessionInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall VirtualAudioSessionInfo::~VirtualAudioSessionInfo(VirtualAudioSessionInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    CoTaskMemFree(v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}

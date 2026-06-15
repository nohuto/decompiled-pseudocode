/*
 * XREFs of ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180017510
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180009760 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180009F40 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180016DD0 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180045860 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x18001761C (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::UpdateStreamPriority(CAudioStream *this)
{
  int v2; // ebx
  int v3; // edi
  unsigned int v4; // esi
  char v5; // al
  unsigned int AudioResourcePriority; // eax
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 (__fastcall *v9)(char *, __int64 *); // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 120LL))(*((_QWORD *)this + 9));
  v3 = *((unsigned __int8 *)this + 256);
  v4 = *((_DWORD *)this + 106);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8);
  AudioResourcePriority = GetAudioResourcePriority(
                            (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(v5 != 0),
                            v4,
                            v3,
                            v2);
  v7 = AudioResourcePriority;
  v8 = *((_DWORD *)this + 65);
  if ( AudioResourcePriority == v8 )
    return 0LL;
  *((_DWORD *)this + 65) = AudioResourcePriority;
  v9 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 112LL);
  v16 = 0LL;
  v10 = v9((char *)this + 8, &v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 744LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 240LL))(v16, 1LL, v7, v8);
    v11 = v10;
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
      return 0LL;
    }
    v13 = 746LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v10,
    v14);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  return v11;
}

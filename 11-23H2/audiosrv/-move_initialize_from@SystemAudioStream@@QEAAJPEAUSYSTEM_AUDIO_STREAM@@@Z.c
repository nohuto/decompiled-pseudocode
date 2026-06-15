/*
 * XREFs of ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180045CC0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 *     _lambda_2b2683a8448ebb10882635d39a043dfb_::operator() @ 0x180073164 (_lambda_2b2683a8448ebb10882635d39a043dfb_--operator().c)
 *     _lambda_35737e3609a2bbc950aa37b2f22ff221_::operator() @ 0x18007332C (_lambda_35737e3609a2bbc950aa37b2f22ff221_--operator().c)
 *     _lambda_95431caa3866d5f4deaba272c401a3f9_::operator() @ 0x1800734CC (_lambda_95431caa3866d5f4deaba272c401a3f9_--operator().c)
 *     _lambda_2b5b10106b5e861c991cde5cdb29e645_::operator() @ 0x180104FDC (_lambda_2b5b10106b5e861c991cde5cdb29e645_--operator().c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180105FC0 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180106390 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x180106560 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x180042950 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0@Z @ 0x1800429F8 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180042E84 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::move_initialize_from(SystemAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2)
{
  struct ICrossProcessEvent **v4; // rsi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct ICrossProcessEvent **)((char *)this + 656);
  v5 = *((_QWORD *)this + 82);
  *v4 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 640),
         v4,
         (SystemAudioStream *)((char *)this + 664));
  if ( v6 < 0 )
  {
    v11 = 134LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 44);
    *((_QWORD *)this + 44) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = SystemAudioStream::move_from_blob(
           (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 344),
           (struct ICrossProcessEvent **)this + 44,
           (SystemAudioStream *)((char *)this + 360));
    if ( v6 < 0 )
    {
      v11 = 135LL;
    }
    else
    {
      v8 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v6 = SystemAudioStream::move_from_blob(
             (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 48),
             (struct ICrossProcessEvent **)this + 6,
             (SystemAudioStream *)((char *)this + 56));
      if ( v6 < 0 )
      {
        v11 = 136LL;
      }
      else
      {
        v9 = *((_QWORD *)this + 121);
        *((_QWORD *)this + 121) = 0LL;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v6 = SystemAudioStream::move_from_blob(
               (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 944),
               (struct ICrossProcessMemory **)this + 121,
               (SystemAudioStream *)((char *)this + 976));
        if ( v6 >= 0 )
        {
          *(_OWORD *)this = *(_OWORD *)a2;
          *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            (char *)this + 24,
            *((_QWORD *)a2 + 3));
          *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
          *((_DWORD *)this + 240) = *((_DWORD *)a2 + 234);
          *((_DWORD *)this + 318) = *((_DWORD *)a2 + 310);
          *((_DWORD *)this + 319) = *((_DWORD *)a2 + 311);
          *((_DWORD *)this + 320) = *((_DWORD *)a2 + 312);
          return 0LL;
        }
        v11 = 137LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

/*
 * XREFs of ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08
 * Callers:
 *     _lambda_1b3cab1c1883161d393bb2a497225922_::operator() @ 0x1800F7948 (_lambda_1b3cab1c1883161d393bb2a497225922_--operator().c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800F8340 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F8870 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F8A20 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DAB0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x1800F0A24 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0@Z @ 0x1800F0B04 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@PEAPEAUICrossProcessMemory@@0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::move_initialize_from(SystemAudioStream *this, struct SYSTEM_AUDIO_STREAM *a2)
{
  struct ICrossProcessEvent **v4; // rsi
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
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
    v7 = 133LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v6 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 344),
         (struct ICrossProcessEvent **)this + 44,
         (SystemAudioStream *)((char *)this + 360));
  if ( v6 < 0 )
  {
    v7 = 134LL;
    goto LABEL_5;
  }
  v10 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v6 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 48),
         (struct ICrossProcessEvent **)this + 6,
         (SystemAudioStream *)((char *)this + 56));
  if ( v6 < 0 )
  {
    v7 = 135LL;
    goto LABEL_5;
  }
  v11 = *((_QWORD *)this + 121);
  *((_QWORD *)this + 121) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v6 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 944),
         (struct ICrossProcessMemory **)this + 121,
         (SystemAudioStream *)((char *)this + 976));
  if ( v6 < 0 )
  {
    v7 = 136LL;
    goto LABEL_5;
  }
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 3,
    *((void **)a2 + 3));
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 240) = *((_DWORD *)a2 + 234);
  *((_DWORD *)this + 318) = *((_DWORD *)a2 + 310);
  *((_DWORD *)this + 319) = *((_DWORD *)a2 + 311);
  *((_DWORD *)this + 320) = *((_DWORD *)a2 + 312);
  return 0LL;
}

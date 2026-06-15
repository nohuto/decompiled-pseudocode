/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180022708
 * Callers:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x18004BAA0 (-OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_::_Do_call @ 0x18004BBD0 (std--_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_--_Do_call.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180055410 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioSession@@@Z @ 0x1800227B0 (--0-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioSession@@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180022880 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  _QWORD v4[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v6; // [rsp+78h] [rbp+18h] BYREF
  __int64 v7; // [rsp+80h] [rbp+20h] BYREF

  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::com_ptr_t<CAudioSession,wil::err_returncode_policy>(
    &v7,
    this);
  v1 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v6, v7);
  v4[0] = off_18016CEC0;
  v2 = v6;
  v6 = 0LL;
  v4[1] = v2;
  v4[7] = v4;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
  v3 = CSerialWorkQueue::QueueWorkItem(v1, v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD89,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
}

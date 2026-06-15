/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180009028
 * Callers:
 *     ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180008DE0 (-OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z.c)
 *     _lambda_e84261e39c6833060792dde3988d9fd4_::operator() @ 0x180008E1C (_lambda_e84261e39c6833060792dde3988d9fd4_--operator().c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4[2]; // [rsp+20h] [rbp-48h] BYREF
  CAudioSession *v5; // [rsp+28h] [rbp-40h]
  int *v6; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v2 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  *(_QWORD *)v4 = &off_180167A20;
  v5 = this;
  v6 = v4;
  v3 = CSerialWorkQueue::QueueWorkItem(v2, v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3,
      v4[0]);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
}

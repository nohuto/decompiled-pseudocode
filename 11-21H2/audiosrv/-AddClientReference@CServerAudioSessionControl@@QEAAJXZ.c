/*
 * XREFs of ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800DF7B8
 * Callers:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800DFB8C (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::AddClientReference(CServerAudioSessionControl *this)
{
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

/*
 * XREFs of ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800528E4
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180051A40 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180052778 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::AddClientReference(CServerAudioSessionControl *this)
{
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

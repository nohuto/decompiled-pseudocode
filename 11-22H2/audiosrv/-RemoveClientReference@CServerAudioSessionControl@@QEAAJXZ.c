/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180054A94
 * Callers:
 *     ??1CVADServer@@UEAA@XZ @ 0x180017678 (--1CVADServer@@UEAA@XZ.c)
 *     AudioSessionDestroy @ 0x1800549F0 (AudioSessionDestroy.c)
 *     AUDIOSESSION_rundown @ 0x1800E5530 (AUDIOSESSION_rundown.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 104LL))(this);
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}

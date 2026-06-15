/*
 * XREFs of ?IsSystemSoundsSession@CServerAudioSessionControl@@UEAAJXZ @ 0x180081AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CServerAudioSessionControl::IsSystemSoundsSession(CServerAudioSessionControl *this)
{
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 8LL) + 128LL))(*((_QWORD *)this + 9) + 8LL) == 0;
}

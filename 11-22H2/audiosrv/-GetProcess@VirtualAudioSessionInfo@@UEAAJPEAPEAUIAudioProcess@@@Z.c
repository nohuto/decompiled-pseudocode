/*
 * XREFs of ?GetProcess@VirtualAudioSessionInfo@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180126820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualAudioSessionInfo::GetProcess(VirtualAudioSessionInfo *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 2);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}

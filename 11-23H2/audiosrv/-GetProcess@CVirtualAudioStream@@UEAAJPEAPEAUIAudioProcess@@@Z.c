/*
 * XREFs of ?GetProcess@CVirtualAudioStream@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x18010D110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualAudioStream::GetProcess(CVirtualAudioStream *this, struct IAudioProcess **a2)
{
  struct IAudioProcess *v2; // rcx

  v2 = (struct IAudioProcess *)*((_QWORD *)this + 4);
  *a2 = v2;
  (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}

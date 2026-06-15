/*
 * XREFs of ?GetProcess@CStreamPolicyVolumeClient@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x180014D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamPolicyVolumeClient::GetProcess(CStreamPolicyVolumeClient *this, struct IAudioProcess **a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  *a2 = (struct IAudioProcess *)*((_QWORD *)this + 1);
  return 0LL;
}

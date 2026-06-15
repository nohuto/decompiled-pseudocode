/*
 * XREFs of ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FADB8
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180012C40 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x18001A2C0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(CProcessSubmixProxy *this, int a2)
{
  int v2; // r8d

  v2 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 24) = v2 + a2;
  if ( v2 != v2 + a2 && (!v2 || !(v2 + a2)) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 25) + 312LL))(
      *((_QWORD *)this + 25),
      (char *)this + 8);
}

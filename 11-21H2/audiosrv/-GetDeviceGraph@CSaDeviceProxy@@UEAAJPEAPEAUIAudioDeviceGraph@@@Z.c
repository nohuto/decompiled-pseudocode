/*
 * XREFs of ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000E770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetDeviceGraph(CSaDeviceProxy *this, struct IAudioDeviceGraph **a2)
{
  struct IAudioDeviceGraph *v4; // rcx

  v4 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 9);
  }
  *a2 = v4;
  return 0LL;
}

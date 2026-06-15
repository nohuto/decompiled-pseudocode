/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180017E60
 * Callers:
 *     ?GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18006AFE0 (-GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, struct IAudioSessionInfo **); // rcx

  *a2 = 0LL;
  v2 = (void (__fastcall ***)(_QWORD, GUID *, struct IAudioSessionInfo **))*((_QWORD *)this + 7);
  if ( v2 )
    (**v2)(v2, &GUID_01de3f73_63e1_4021_a563_2efba2c7fb9b, a2);
  return 0LL;
}

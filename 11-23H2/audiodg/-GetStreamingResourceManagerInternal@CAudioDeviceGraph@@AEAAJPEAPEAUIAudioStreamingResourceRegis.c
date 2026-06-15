/*
 * XREFs of ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400070F8
 * Callers:
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007450 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140060320 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14001B614 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManagerInternal(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 360);
  if ( *((_QWORD *)this + 45)
    || (result = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 45),
        (int)result >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*v3;
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    return 0LL;
  }
  return result;
}

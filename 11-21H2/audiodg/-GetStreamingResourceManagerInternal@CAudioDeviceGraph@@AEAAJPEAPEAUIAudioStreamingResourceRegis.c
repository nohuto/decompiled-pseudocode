/*
 * XREFs of ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007E14
 * Callers:
 *     ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007DB0 (-GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140019820 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001D2A0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140007E7C (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManagerInternal(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 368);
  if ( *((_QWORD *)this + 46)
    || (result = CreateStreamingResourceManager((struct IAudioStreamingResourceRegistration **)this + 46),
        (int)result >= 0) )
  {
    *a2 = (struct IAudioStreamingResourceRegistration *)*v3;
    if ( *v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    return 0LL;
  }
  return result;
}

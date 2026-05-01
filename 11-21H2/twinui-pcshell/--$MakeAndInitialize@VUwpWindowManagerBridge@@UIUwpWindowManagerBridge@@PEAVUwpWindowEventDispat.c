/*
 * XREFs of ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1803E916C
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1803F10B8 (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSessionEvents@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180340690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_180340690.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803E81F0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManag.c)
 *     ??0UwpWindowManagerBridge@@QEAA@XZ @ 0x1803EA47C (--0UwpWindowManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180403328 (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(
        _QWORD *a1,
        _QWORD *a2)
{
  UwpWindowManagerBridge *v4; // rax
  int v5; // ebx
  UwpWindowManagerBridge *v6; // rdi
  volatile int *v7; // rdx

  *a1 = 0LL;
  v4 = (UwpWindowManagerBridge *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = UwpWindowManagerBridge::UwpWindowManagerBridge(v4);
    v5 = UwpWindowManagerBridge::RuntimeClassInitialize(
           v6,
           (struct IUwpWindowEventDispatcherInternal *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
    if ( v5 >= 0 )
      v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>>(
             (__int64)v6,
             &GUID_fbe96cdd_06f6_44cd_ac3e_13b439b6333d,
             a1);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSessionEvents,Microsoft::WRL::FtmBase>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}

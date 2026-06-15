/*
 * XREFs of ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800D24EC
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D31F8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D21C0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWat.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800D28F0 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D3FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_1800D3FA0.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher,IAudioEffectsWatcher,unsigned short const * &,unsigned long &,int &,enum DiscoverySettings &>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  AudioEffectsWatcher *v9; // rax
  int v10; // esi
  AudioEffectsWatcher *v11; // rdi

  *a1 = 0LL;
  v9 = (AudioEffectsWatcher *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = AudioEffectsWatcher::AudioEffectsWatcher(v9);
    v10 = AudioEffectsWatcher::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>>(
              (__int64)v11,
              &GUID_48da5782_9a1d_444b_b5d2_aa2dee616db4,
              a1);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}

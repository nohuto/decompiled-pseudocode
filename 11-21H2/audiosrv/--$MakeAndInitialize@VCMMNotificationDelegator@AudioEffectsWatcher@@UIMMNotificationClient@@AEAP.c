/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800D260C
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ @ 0x1800D2A48 (--0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D47D8 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher::CMMNotificationDelegator,IMMNotificationClient,unsigned short const * &,void *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        void **a3)
{
  AudioEffectsWatcher::CMMNotificationDelegator *v6; // rax
  int v7; // esi
  AudioEffectsWatcher::CMMNotificationDelegator *v8; // rbx

  *a1 = 0LL;
  v6 = (AudioEffectsWatcher::CMMNotificationDelegator *)operator new(
                                                          0x28uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (AudioEffectsWatcher::CMMNotificationDelegator *)AudioEffectsWatcher::CMMNotificationDelegator::CMMNotificationDelegator(v6);
    v7 = AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(AudioEffectsWatcher::CMMNotificationDelegator *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}

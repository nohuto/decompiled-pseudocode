/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800D52D0
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A90 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ @ 0x1800D565C (--0CMMNotificationDelegator@AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D6FB4 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher::CMMNotificationDelegator,IMMNotificationClient,unsigned short const * &,void *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        void **a3)
{
  void *v6; // rax
  int v7; // ebx
  AudioEffectsWatcher::CMMNotificationDelegator *v8; // rdi
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  AudioEffectsWatcher::CMMNotificationDelegator *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v8 = (AudioEffectsWatcher::CMMNotificationDelegator *)AudioEffectsWatcher::CMMNotificationDelegator::CMMNotificationDelegator((AudioEffectsWatcher::CMMNotificationDelegator *)v6);
    v11 = v8;
    v10 = 0LL;
    v7 = AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(AudioEffectsWatcher::CMMNotificationDelegator *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
             a1);
      (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(*(_QWORD *)v8 + 16LL))(v8);
      return (unsigned int)v7;
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v11);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
  return (unsigned int)v7;
}

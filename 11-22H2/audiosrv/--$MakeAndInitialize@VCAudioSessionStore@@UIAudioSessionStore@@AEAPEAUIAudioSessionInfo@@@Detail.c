/*
 * XREFs of ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x180013E50
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012BC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 *     ?RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180013A8C (-RuntimeClassInitialize@CAudioSessionStore@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ??0CAudioSessionStore@@QEAA@XZ @ 0x180013B6C (--0CAudioSessionStore@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180013DE0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180013DE0.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180113F94 (--1-$ComPtr@VCAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionStore,IAudioSessionStore,IAudioSessionInfo * &>(
        CAudioSessionStore **a1,
        struct IAudioSessionInfo **a2)
{
  CAudioSessionStore *v4; // rax
  CAudioSessionStore *v5; // rbx
  int CanCastTo; // edi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // r9
  CAudioSessionStore *v10; // [rsp+30h] [rbp+8h] BYREF
  CAudioSessionStore *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CAudioSessionStore *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( !v4 )
  {
    CanCastTo = -2147024882;
LABEL_12:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v10);
    return (unsigned int)CanCastTo;
  }
  v5 = CAudioSessionStore::CAudioSessionStore(v4);
  v11 = v5;
  v10 = 0LL;
  CanCastTo = CAudioSessionStore::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioSessionStore>::~ComPtr<CAudioSessionStore>(&v11);
    goto LABEL_12;
  }
  *a1 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_e5f61c43_fc50_4785_bbe0_b5ee4f99ee0a,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(CAudioSessionStore *))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IPropertyStore,IAudioSessionStore>::CanCastTo(
                  (__int64)v5 + 8,
                  v8);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(CAudioSessionStore *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>::Release((__int64)v5);
  return (unsigned int)CanCastTo;
}

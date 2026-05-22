/*
 * XREFs of ??$MakeAndInitialize2@VWhiteNoiseEffect@Effects@Composition@UI@Windows@@V12345@@Details@WRL2@Microsoft@@YAJPEAPEAVWhiteNoiseEffect@Effects@Composition@UI@Windows@@@Z @ 0x18014607C
 * Callers:
 *     ?ActivateInstance@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801461F0 (-ActivateInstance@WhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@UEAAJPEAPEAUIInspectab.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0WhiteNoiseEffect@Effects@Composition@UI@Windows@@QEAA@XZ @ 0x18014610C (--0WhiteNoiseEffect@Effects@Composition@UI@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Effects::WhiteNoiseEffect,Windows::UI::Composition::Effects::WhiteNoiseEffect>(
        Windows::UI::Composition::Effects::WhiteNoiseEffect **a1)
{
  void *v2; // rax
  Windows::UI::Composition::Effects::WhiteNoiseEffect *v4; // rax
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v6; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v6 = 0LL;
  v2 = DefaultHeap::Alloc(0x58uLL);
  v5 = v2;
  if ( v2 )
  {
    v4 = (Windows::UI::Composition::Effects::WhiteNoiseEffect *)memset_0(v2, 0, 0x58uLL);
    if ( v4 )
      v4 = (Windows::UI::Composition::Effects::WhiteNoiseEffect *)Windows::UI::Composition::Effects::WhiteNoiseEffect::WhiteNoiseEffect(v4);
    *((_QWORD *)v4 + 1) = &Windows::UI::Composition::Effects::WhiteNoiseEffect::s_InterfaceType;
    *((_DWORD *)v4 + 18) = 0;
    *((_DWORD *)v4 + 19) = 0;
    *((_DWORD *)v4 + 16) = 1065353216;
    *((_DWORD *)v4 + 17) = 1065353216;
    *a1 = v4;
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v6);
    return 2147942414LL;
  }
}

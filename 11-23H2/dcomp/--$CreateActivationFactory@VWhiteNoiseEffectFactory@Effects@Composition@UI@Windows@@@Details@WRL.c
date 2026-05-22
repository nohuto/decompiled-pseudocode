/*
 * XREFs of ??$CreateActivationFactory@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180103CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800031D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180104C18 (--$MakeAndInitialize@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details.c)
 *     ??1?$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A60 (--1-$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(
        _BYTE *a1,
        __int64 a2,
        const struct _GUID *a3)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rbx
  volatile int *v9; // rdx
  int CanCastTo; // esi
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory,Windows::UI::Composition::Effects::WhiteNoiseEffectFactory,>(v11);
  if ( v6 >= 0 )
  {
    v8 = v11[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v11[0],
                  a3);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 68), v9);
      *(_DWORD *)(v8 + 88) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v8 + 80) = a2;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(v11);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(v11);
    return (unsigned int)v6;
  }
  return result;
}

/*
 * XREFs of ??$CreateActivationFactory@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800030A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSceneLightingEffectFactory@Effects@Composition@UI@Windows@@@Z @ 0x180002F64 (--$MakeAndInitialize@VSceneLightingEffectFactory@Effects@Composition@UI@Windows@@V12345@$$V@Deta.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800031D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A60 (--1-$ComPtr@VWhiteNoiseEffectFactory@Effects@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::Effects::SceneLightingEffectFactory>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rbx
  volatile int *v10; // rdx
  int CanCastTo; // esi
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Effects::SceneLightingEffectFactory,Windows::UI::Composition::Effects::SceneLightingEffectFactory,>(v13);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(v13);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>::~ComPtr<Windows::UI::Composition::Effects::WhiteNoiseEffectFactory>(v13);
      return (unsigned int)CanCastTo;
    }
    else
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 68), v10);
      *(_DWORD *)(v9 + 88) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v9 + 80) = a2;
    }
  }
  return result;
}

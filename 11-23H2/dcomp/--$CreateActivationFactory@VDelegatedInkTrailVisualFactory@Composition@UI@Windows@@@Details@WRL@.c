/*
 * XREFs of ??$CreateActivationFactory@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180101790
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisualFactory@Composition@UI@Windows@@@Z @ 0x18010199C (--$MakeAndInitialize@VDelegatedInkTrailVisualFactory@Composition@UI@Windows@@V1234@$$V@Details@W.c)
 *     ??1?$ComPtr@VSceneMeshFactory@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101E04 (--1-$ComPtr@VSceneMeshFactory@Scenes@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIDelegatedInkTrailVisualStatics@Composition@UI@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180101FF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180101FF4.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::DelegatedInkTrailVisualFactory>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rbx
  volatile int *v11; // rdx
  int CanCastTo; // esi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::DelegatedInkTrailVisualFactory,Windows::UI::Composition::DelegatedInkTrailVisualFactory,>(v13);
  if ( v8 >= 0 )
  {
    v10 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IDelegatedInkTrailVisualStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 68), v11);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v10 + 80) = a2;
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::Scenes::SceneMeshFactory>::~ComPtr<Windows::UI::Composition::Scenes::SceneMeshFactory>(v13);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Scenes::SceneMeshFactory>::~ComPtr<Windows::UI::Composition::Scenes::SceneMeshFactory>(v13);
    return (unsigned int)v8;
  }
  return result;
}

/*
 * XREFs of ??$CreateActivationFactory@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800174B0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_1800174B0.c)
 *     ??$MakeAndInitialize@VCompositionCapabilitiesFactory@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionCapabilitiesFactory@Composition@UI@Windows@@@Z @ 0x180017E58 (--$MakeAndInitialize@VCompositionCapabilitiesFactory@Composition@UI@Windows@@V1234@$$V@Details@W.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$ComPtr@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DE0 (--1-$ComPtr@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::CompositionCapabilitiesFactory>(
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
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionCapabilitiesFactory,Windows::UI::Composition::CompositionCapabilitiesFactory,>(v13);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>::~ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>(v13);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>::~ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>(v13);
      return (unsigned int)CanCastTo;
    }
    else
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 100), v10);
      *(_DWORD *)(v9 + 120) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v9 + 112) = a2;
    }
  }
  return result;
}

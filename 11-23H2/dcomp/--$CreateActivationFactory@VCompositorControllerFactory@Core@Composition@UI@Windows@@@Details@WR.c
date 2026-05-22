/*
 * XREFs of ??$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositorControllerFactory@Core@Composition@UI@Windows@@@Z @ 0x180016B88 (--$MakeAndInitialize@VCompositorControllerFactory@Core@Composition@UI@Windows@@V12345@$$V@Detail.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180017028.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DBC (--1-$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::Core::CompositorControllerFactory>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *v7; // rbx
  volatile int *v8; // rdx
  int CanCastTo; // esi
  __int64 result; // rax
  Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::Core::CompositorControllerFactory,Windows::UI::Composition::Core::CompositorControllerFactory,>(v11);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::AppContentRootFactory>::~ComPtr<Windows::UI::AppContentRootFactory>(v11);
    return (unsigned int)v6;
  }
  else
  {
    v7 = v11[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v11[0],
                  a3);
    if ( CanCastTo < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::AppContentRootFactory>::~ComPtr<Windows::UI::AppContentRootFactory>(v11);
      return (unsigned int)CanCastTo;
    }
    else
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Windows::UI::Composition::Interactions::Internal::EdgyExperienceSourceFactory *)((char *)v7 + 68),
          v8);
      *((_DWORD *)v7 + 22) = *(_DWORD *)a1;
      result = 0LL;
      *((_QWORD *)v7 + 10) = a2;
    }
  }
  return result;
}

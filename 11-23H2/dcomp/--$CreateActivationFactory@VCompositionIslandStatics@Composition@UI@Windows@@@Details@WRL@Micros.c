/*
 * XREFs of ??$CreateActivationFactory@VCompositionIslandStatics@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCompositionIslandStatics@Composition@UI@Windows@@V1234@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompositionIslandStatics@Composition@UI@Windows@@@Z @ 0x1800169AC (--$MakeAndInitialize@VCompositionIslandStatics@Composition@UI@Windows@@V1234@$$V@Details@WRL@Mic.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandStatics@Composition@UI@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017300 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180017300.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800826A8 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DBC (--1-$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::UI::Composition::CompositionIslandStatics>(
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
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::UI::Composition::CompositionIslandStatics,Windows::UI::Composition::CompositionIslandStatics,>(v13);
  if ( v8 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::AppContentRootFactory>::~ComPtr<Windows::UI::AppContentRootFactory>(v13);
    return (unsigned int)v8;
  }
  else
  {
    v9 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::UI::AppContentRootFactory>::~ComPtr<Windows::UI::AppContentRootFactory>(v13);
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

/*
 * XREFs of ??$MakeAndInitializeOrThrow@VStartupTaskActivatedEventArgsImpl@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VStartupTaskActivatedEventArgsImpl@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x18056FE60
 * Callers:
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VStartupTaskActivatedEventArgsImpl@@V1@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVStartupTaskActivatedEventArgsImpl@@$$QEAPEAUHSTRING__@@@Z @ 0x18056FD00 (--$MakeAndInitialize@VStartupTaskActivatedEventArgsImpl@@V1@PEAUHSTRING__@@@Details@WRL@Microsof.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<StartupTaskActivatedEventArgsImpl,HSTRING__ *>(
        __int64 *a1,
        HSTRING *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<StartupTaskActivatedEventArgsImpl,StartupTaskActivatedEventArgsImpl,HSTRING__ *>(
         (StartupTaskActivatedEventArgsImpl **)a1,
         a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\wrl.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}

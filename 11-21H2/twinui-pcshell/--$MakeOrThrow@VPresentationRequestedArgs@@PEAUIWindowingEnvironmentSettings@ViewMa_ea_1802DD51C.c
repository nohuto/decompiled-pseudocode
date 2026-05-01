/*
 * XREFs of ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@AEAI@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@AEAI@Z @ 0x1802DD51C
 * Callers:
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EAB18 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@@@Z @ 0x1802E1A4C (-Attach@-$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@I@Z @ 0x1802EC7AC (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInt_ea_1802EC7AC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *,unsigned int &>(
        _QWORD *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2,
        struct IApplicationView **a3,
        unsigned int *a4)
{
  PresentationRequestedArgs *v8; // rax
  const char *v9; // r9
  PresentationRequestedArgs *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v8 = (PresentationRequestedArgs *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = PresentationRequestedArgs::PresentationRequestedArgs(v8, *a2, *a3, *a4);
    Microsoft::WRL::ComPtr<PresentationRequestedArgs>::Attach(a1, v10);
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v9);
  return a1;
}

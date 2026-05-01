/*
 * XREFs of ??$MakeOrThrow@VWindowingEnvironmentSettings@@$$V@wil@@YA?AV?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@XZ @ 0x1804B9ECC
 * Callers:
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1A70 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0WindowingEnvironmentSettings@@QEAA@XZ @ 0x1804BC544 (--0WindowingEnvironmentSettings@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIUwpWindowingEnvironmentSettingsInternal@@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804C8A60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1804C8A60.c)
 */

// Hidden C++ exception states: #wind=1
WindowingEnvironmentSettings **__fastcall wil::MakeOrThrow<WindowingEnvironmentSettings,>(
        WindowingEnvironmentSettings **a1)
{
  WindowingEnvironmentSettings *v2; // rax
  const char *v3; // r9
  WindowingEnvironmentSettings *v4; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v2 = (WindowingEnvironmentSettings *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = WindowingEnvironmentSettings::WindowingEnvironmentSettings(v2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::ChainInterfaces<IUwpWindowingEnvironmentSettingsInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v4;
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v3);
  return a1;
}

/*
 * XREFs of ??$MakeOrThrow@VApplicationViewWrapper@@AEAPEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@AEAPEAUIApplicationView@@@Z @ 0x18004F6A0
 * Callers:
 *     ?UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18004F620 (-UpdateItemData@AppViewDataSourceAdapter@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multita.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIObjectProvider@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIObjectProvider@@.c)
 *     ??0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z @ 0x18004F91C (--0ApplicationViewWrapper@@QEAA@PEAUIApplicationView@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<ApplicationViewWrapper,IApplicationView * &>(
        __int64 *a1,
        struct IApplicationView **a2)
{
  ApplicationViewWrapper *v4; // rax
  const char *v5; // r9
  ApplicationViewWrapper *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ApplicationViewWrapper *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ApplicationViewWrapper::ApplicationViewWrapper(v4, *a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IObjectProvider,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (__int64)v6;
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}

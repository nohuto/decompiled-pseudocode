/*
 * XREFs of ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x180499F48
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180117EF8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x18042E0A4 (--0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z.c)
 *     ?Attach@?$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManagerWrapper@@@Z @ 0x1804317EC (-Attach@-$ComPtr@VSwitcherTabViewManagerWrapper@@@WRL@Microsoft@@QEAAXPEAVSwitcherTabViewManager.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager * const &>(
        __int64 *a1,
        struct ITabViewManager **a2)
{
  SwitcherTabViewManagerWrapper *v4; // rax
  SwitcherTabViewManagerWrapper *v5; // rax

  *a1 = 0LL;
  v4 = (SwitcherTabViewManagerWrapper *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = SwitcherTabViewManagerWrapper::SwitcherTabViewManagerWrapper(v4, *a2);
    Microsoft::WRL::ComPtr<SwitcherTabViewManagerWrapper>::Attach(a1, (__int64)v5);
  }
  return a1;
}

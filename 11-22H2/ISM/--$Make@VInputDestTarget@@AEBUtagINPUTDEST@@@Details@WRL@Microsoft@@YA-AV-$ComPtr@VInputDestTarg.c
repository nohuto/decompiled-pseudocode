/*
 * XREFs of ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x180041534
 * Callers:
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18006809C (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 * Callees:
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800415BC (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
InputDestTarget **__fastcall Microsoft::WRL::Details::Make<InputDestTarget,tagINPUTDEST const &>(
        InputDestTarget **a1,
        const struct tagINPUTDEST *a2)
{
  InputDestTarget *v4; // rax
  InputDestTarget *v5; // rdi

  *a1 = 0LL;
  v4 = (InputDestTarget *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = InputDestTarget::InputDestTarget(v4, a2);
    if ( *a1 )
      (*(void (__fastcall **)(InputDestTarget *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}

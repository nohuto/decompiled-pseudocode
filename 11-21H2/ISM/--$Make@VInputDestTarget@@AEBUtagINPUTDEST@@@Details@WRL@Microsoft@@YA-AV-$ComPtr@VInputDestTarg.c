/*
 * XREFs of ??$Make@VInputDestTarget@@AEBUtagINPUTDEST@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputDestTarget@@@12@AEBUtagINPUTDEST@@@Z @ 0x18004D598
 * Callers:
 *     ?GetExistingOrCreateNewInputTarget@InputDestTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUtagINPUTDEST@@PEAUIInputTarget@@@Z @ 0x18004D778 (-GetExistingOrCreateNewInputTarget@InputDestTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x18004D68C (--0InputDestTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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

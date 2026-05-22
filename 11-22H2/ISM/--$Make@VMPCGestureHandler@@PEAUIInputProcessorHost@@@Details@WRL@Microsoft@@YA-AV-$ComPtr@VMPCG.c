/*
 * XREFs of ??$Make@VMPCGestureHandler@@PEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCGestureHandler@@@12@$$QEAPEAUIInputProcessorHost@@@Z @ 0x1800BA5A0
 * Callers:
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800BB69C (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800CB2F4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
MPCGestureHandler **__fastcall Microsoft::WRL::Details::Make<MPCGestureHandler,IInputProcessorHost *>(
        MPCGestureHandler **a1,
        struct IInputProcessorHost **a2)
{
  MPCGestureHandler *v4; // rax
  MPCGestureHandler *v5; // rdi

  *a1 = 0LL;
  v4 = (MPCGestureHandler *)operator new(0x3F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = MPCGestureHandler::MPCGestureHandler(v4, *a2);
    if ( *a1 )
      (*(void (__fastcall **)(MPCGestureHandler *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}

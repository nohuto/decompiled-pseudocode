/*
 * XREFs of ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1801D1940
 * Callers:
 *     ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D1B40 (-OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ActivationContext@@QEAA@XZ @ 0x1801D1A08 (--0ActivationContext@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
        ActivationContext **a1,
        _DWORD *a2,
        char *a3)
{
  void *v6; // rax
  ActivationContext *v8; // rax
  ActivationContext *v9; // rbx
  char v10; // dl
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v8 = ActivationContext::ActivationContext((ActivationContext *)v6);
    v9 = v8;
    v10 = *a3;
    *((_DWORD *)v8 + 18) = *a2;
    *((_BYTE *)v8 + 76) = v10;
    if ( v8 )
      (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v9;
    if ( v9 )
      (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v9 + 16LL))(v9);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v11);
    return 2147942414LL;
  }
}

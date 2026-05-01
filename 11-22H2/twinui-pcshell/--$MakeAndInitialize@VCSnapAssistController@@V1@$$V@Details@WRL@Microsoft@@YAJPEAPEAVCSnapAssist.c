/*
 * XREFs of ??$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistController@@@Z @ 0x18010B0DC
 * Callers:
 *     ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AFD0 (-CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CSnapAssistController@@QEAA@XZ @ 0x18010B168 (--0CSnapAssistController@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistController,CSnapAssistController,>(
        CSnapAssistController **a1)
{
  unsigned int v2; // ebx
  CSnapAssistController *v3; // rax
  CSnapAssistController *v4; // rax
  CSnapAssistController *v5; // rdi
  CSnapAssistController *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (CSnapAssistController *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CSnapAssistController::CSnapAssistController(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(CSnapAssistController *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

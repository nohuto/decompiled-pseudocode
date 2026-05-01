/*
 * XREFs of ??$MakeAndInitialize@VCAppTransitionTargetManager@@UIAppTransitionTargetManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAppTransitionTargetManager@@@Z @ 0x1804E2150
 * Callers:
 *     CAppTransitionTargetManager_CreateInstance @ 0x1804E45E4 (CAppTransitionTargetManager_CreateInstance.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAppTransitionTargetManager@@QEAA@XZ @ 0x1804E2428 (--0CAppTransitionTargetManager@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAppTransitionTargetManager,IAppTransitionTargetManager,>(
        _QWORD *a1)
{
  CAppTransitionTargetManager *v2; // rax
  unsigned int v3; // edi
  CAppTransitionTargetManager *v4; // rbx

  *a1 = 0LL;
  v2 = (CAppTransitionTargetManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CAppTransitionTargetManager::CAppTransitionTargetManager(v2);
    v3 = (**(__int64 (__fastcall ***)(CAppTransitionTargetManager *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343,
           a1);
    (*(void (__fastcall **)(CAppTransitionTargetManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}

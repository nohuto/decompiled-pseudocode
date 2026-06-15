/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18004FD40
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18004FD0C (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ??0CProcessSubmixManager@@QEAA@XZ @ 0x18004FE4C (--0CProcessSubmixManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>()
{
  CProcessSubmixManager *v0; // rax
  CProcessSubmixManager *v1; // rbx
  unsigned int v2; // edi

  g_ProcessSubmixManager = 0LL;
  v0 = (CProcessSubmixManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CProcessSubmixManager::CProcessSubmixManager(v0);
    v2 = (**(__int64 (__fastcall ***)(CProcessSubmixManager *, GUID *, struct IProcessSubmixManager **))v1)(
           v1,
           &GUID_c8659f6f_fff0_4d34_8931_8b5a5e971638,
           &g_ProcessSubmixManager);
    (*(void (__fastcall **)(CProcessSubmixManager *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}

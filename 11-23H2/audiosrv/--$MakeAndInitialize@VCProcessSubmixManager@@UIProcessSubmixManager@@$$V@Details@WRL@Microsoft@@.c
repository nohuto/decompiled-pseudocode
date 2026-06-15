/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18005B2EC
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005AFC0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ??0CProcessSubmixManager@@QEAA@XZ @ 0x18005B388 (--0CProcessSubmixManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>(
        CProcessSubmixManager *a1)
{
  CProcessSubmixManager *v1; // rax
  CProcessSubmixManager *v2; // rdi
  unsigned int v3; // ebx
  CProcessSubmixManager *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  g_ProcessSubmixManager = 0LL;
  v1 = (CProcessSubmixManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v1;
  if ( v1 )
  {
    v2 = CProcessSubmixManager::CProcessSubmixManager(v1);
    v3 = (**(__int64 (__fastcall ***)(CProcessSubmixManager *, GUID *, struct IProcessSubmixManager **))v2)(
           v2,
           &GUID_c8659f6f_fff0_4d34_8931_8b5a5e971638,
           &g_ProcessSubmixManager);
    (*(void (__fastcall **)(CProcessSubmixManager *))(*(_QWORD *)v2 + 16LL))(v2);
    return v3;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v5);
    return 2147942414LL;
  }
}

/*
 * XREFs of ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x18004F964
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004F9CC (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CPolicyConfig **__fastcall Microsoft::WRL::Details::Make<CPolicyConfig,>(CPolicyConfig **a1)
{
  CPolicyConfig *v2; // rax
  CPolicyConfig *v3; // rdi
  CPolicyConfig *v4; // rdi

  *a1 = 0LL;
  v2 = (CPolicyConfig *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x58uLL);
    v4 = CPolicyConfig::CPolicyConfig(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}

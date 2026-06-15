/*
 * XREFs of ??$MakeAndInitialize@VAvoidEndpointPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x1801308F8
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801311DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PolicyRule@@QEAA@XZ @ 0x180130D04 (--0PolicyRule@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180134AC0 (-RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AvoidEndpointPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        struct _DynamicRoutingRule **a3)
{
  PolicyRule *v6; // rax
  PolicyRule *v7; // rbx
  AvoidEndpointPolicyRule *v8; // rdi
  int v9; // esi

  *a1 = 0LL;
  v6 = (PolicyRule *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = v6;
  if ( v6 )
  {
    PolicyRule::PolicyRule(v6);
    *(_QWORD *)v7 = &AvoidEndpointPolicyRule::`vftable';
    v9 = AvoidEndpointPolicyRule::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(AvoidEndpointPolicyRule *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
             a1);
    (*(void (__fastcall **)(AvoidEndpointPolicyRule *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}

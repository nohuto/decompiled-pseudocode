/*
 * XREFs of ??$MakeAndInitialize@VCommunicationsRemapPolicyRule@@UIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Details@WRL@Microsoft@@YAJPEAPEAUIPolicyRule@@AEAPEAUIAudioProcess@@AEAPEAU_DynamicRoutingRule@@@Z @ 0x18013DEDC
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E6DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0PolicyRule@@QEAA@XZ @ 0x18013E1FC (--0PolicyRule@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CommunicationsRemapPolicyRule,IPolicyRule,IAudioProcess * &,_DynamicRoutingRule * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        struct _DynamicRoutingRule **a3)
{
  CommunicationsRemapPolicyRule *v6; // rax
  CommunicationsRemapPolicyRule *v7; // rdi
  int v8; // ebx
  CommunicationsRemapPolicyRule *v10; // [rsp+40h] [rbp+8h] BYREF
  CommunicationsRemapPolicyRule *v11; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CommunicationsRemapPolicyRule *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v10 = v6;
  v11 = v6;
  if ( v6 )
  {
    PolicyRule::PolicyRule(v6);
    *(_QWORD *)v7 = &CommunicationsRemapPolicyRule::`vftable';
    *((_BYTE *)v7 + 344) = 0;
    v11 = v7;
    v10 = 0LL;
    v8 = CommunicationsRemapPolicyRule::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(CommunicationsRemapPolicyRule *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
             a1);
      (*(void (__fastcall **)(CommunicationsRemapPolicyRule *))(*(_QWORD *)v7 + 16LL))(v7);
      return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v11);
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>((void **)&v10);
  return (unsigned int)v8;
}

/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180047A18
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180048A30 (-ActivateInstance@-$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800480D4 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x180048E64 (-Attach@-$ComPtr@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@@WRL@Mic.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJXZ @ 0x18008A494 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Service_ea_18008A494.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,IInspectable,>(
        _QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  __int64 v4; // rax
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v5; // rbx
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( v2 )
  {
    v4 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl((Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)v2);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl>::Attach(&v7, v4);
    v8 = 0LL;
    v5 = v7;
    v3 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(v7);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             a1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v8);
  return (unsigned int)v3;
}

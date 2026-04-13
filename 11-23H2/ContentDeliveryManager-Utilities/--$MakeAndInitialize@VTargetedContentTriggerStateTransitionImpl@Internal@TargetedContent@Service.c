/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180047B14
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1800489F0 (-ActivateInstance@-$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180048234 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x180048E58 (-Attach@-$ComPtr@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,IInspectable,>(
        _QWORD *a1)
{
  void *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  if ( v2 )
  {
    v4 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl((Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)v2);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl>::Attach(
      &v6,
      v4);
    v7 = 0LL;
    v3 = (**v6)(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
  return v3;
}

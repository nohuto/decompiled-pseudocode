/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@V12345@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@2345@AEAW472345@@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@AEAPEAUHSTRING__@@AEAW4TargetedContentTriggerState@4567@2@Z @ 0x180086830
 * Callers:
 *     _lambda_a031fdd1fd025cd2573b61ec83e0da08_::operator() @ 0x18009B730 (_lambda_a031fdd1fd025cd2573b61ec83e0da08_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180048284 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAAXPEAVTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@@Z @ 0x180048EA8 (-Attach@-$ComPtr@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Wi.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x18008A538 (-RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Servi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,HSTRING__ * &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &,enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerState &>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  void *v8; // rax
  int v9; // edi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  void *v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( v8 )
  {
    v10 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl((Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)v8);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl>::Attach(
      &v15,
      (__int64)v10);
    v14 = 0LL;
    v11 = *a4;
    v12 = v15;
    v9 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
           v15,
           *a2,
           *a3,
           v11,
           0LL);
    if ( v9 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v14);
  return (unsigned int)v9;
}

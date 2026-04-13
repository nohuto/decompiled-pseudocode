/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180047A88
 * Callers:
 *     ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046F20 (--$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Servic.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??0TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180048190 (--0TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004A4C8 (-InternalAddRef@-$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004AFA0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics,Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  __int64 v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v3;
  if ( v3 )
  {
    v7 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::TargetedContentTriggerManagerStatics((Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *)v3);
    v4 = v7;
    v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::InternalAddRef(&v7);
    *a1 = v4;
    if ( v4 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v6);
  return v1;
}

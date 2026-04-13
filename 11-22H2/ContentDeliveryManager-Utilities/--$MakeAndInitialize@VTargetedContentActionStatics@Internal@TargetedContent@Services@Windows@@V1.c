/*
 * XREFs of ??$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180072C24
 * Callers:
 *     ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180072810 (--$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionStatics@TargetedContent@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180048AD0 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentSubscriptionS.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004AFF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ??0TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800743F4 (--0TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentActionStatics,Windows::Services::TargetedContent::Internal::TargetedContentActionStatics,>(
        __int64 *a1)
{
  unsigned int v1; // ebx
  void *v3; // rax
  __int64 v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi
  volatile int *v7; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v3;
  if ( v3 )
  {
    v4 = Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::TargetedContentActionStatics((Windows::Services::TargetedContent::Internal::TargetedContentActionStatics *)v3);
    v9 = 0LL;
    v6 = v4;
    if ( v4 )
    {
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        v4,
        v5);
      *a1 = v6;
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v6,
        v7);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    v1 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v9);
  return v1;
}

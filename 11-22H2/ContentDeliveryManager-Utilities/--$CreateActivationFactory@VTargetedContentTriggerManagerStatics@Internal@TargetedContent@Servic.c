/*
 * XREFs of ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046F70
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180047AD8 (--$MakeAndInitialize@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Win.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180049178 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180049178.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004AFF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rbx
  volatile int *v11; // rdx
  int CanCastTo; // esi
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics,Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics,>(v13);
  if ( v8 >= 0 )
  {
    v10 = v13[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v13[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 68), v11);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v10 + 80) = a2;
    }
    else
    {
      if ( v10 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    if ( v13[0] )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v13[0]);
    return (unsigned int)v8;
  }
  return result;
}

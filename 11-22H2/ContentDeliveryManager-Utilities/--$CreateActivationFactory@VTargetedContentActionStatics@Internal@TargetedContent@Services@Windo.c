/*
 * XREFs of ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180072810
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004AFF0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ??$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Z @ 0x180072C24 (--$MakeAndInitialize@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@V1.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180075BA0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180075BA0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentActionStatics>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile int *v8; // rdx
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // rbx
  volatile int *v12; // rdx
  int CanCastTo; // esi
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Services::TargetedContent::Internal::TargetedContentActionStatics,Windows::Services::TargetedContent::Internal::TargetedContentActionStatics,>(v14);
  if ( v9 >= 0 )
  {
    v11 = v14[0];
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v14[0],
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
    {
      if ( (*a1 & 4) == 0 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 68), v12);
      *(_DWORD *)(v11 + 88) = *(_DWORD *)a1;
      result = 0LL;
      *(_QWORD *)(v11 + 80) = a2;
    }
    else
    {
      if ( v11 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
          v11,
          v12);
      return (unsigned int)CanCastTo;
    }
  }
  else
  {
    if ( v14[0] )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v14[0],
        v8);
    return (unsigned int)v9;
  }
  return result;
}

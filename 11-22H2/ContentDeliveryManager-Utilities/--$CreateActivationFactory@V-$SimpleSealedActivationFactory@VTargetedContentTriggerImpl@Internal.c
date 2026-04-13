/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180046B90
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003FA24 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$MakeAndInitialize@V?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@12@@Z @ 0x1800474F8 (--$MakeAndInitialize@V-$SimpleSealedActivationFactory@VTargetedContentTriggerImpl@Internal@Targe.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180049200 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180049200.c)
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004B0E0 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int CanCastTo; // edi
  __int64 result; // rax
  volatile int *v10; // rdx
  __int64 v11; // r10
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleSealedActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>,Microsoft::WRL::SimpleSealedActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl,0>,>(v12);
  if ( CanCastTo < 0 )
  {
    if ( !v12[0] )
      return (unsigned int)CanCastTo;
LABEL_3:
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release();
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v12[0],
                a3,
                a4);
  if ( CanCastTo < 0 )
  {
    if ( !v11 )
      return (unsigned int)CanCastTo;
    goto LABEL_3;
  }
  if ( (*a1 & 4) == 0 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 12), v10);
  *(_DWORD *)(v11 + 32) = *(_DWORD *)a1;
  result = 0LL;
  *(_QWORD *)(v11 + 24) = a2;
  return result;
}

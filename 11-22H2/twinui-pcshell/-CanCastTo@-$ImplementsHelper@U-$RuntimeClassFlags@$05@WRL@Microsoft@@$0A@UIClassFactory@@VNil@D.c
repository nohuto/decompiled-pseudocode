/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180085818
 * Callers:
 *     ?QueryInterface@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085750 (-QueryInterface@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAJ.c)
 *     ??$AsIID@V?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@?$RuntimeClassBaseT@$05@Details@WRL@Microsoft@@KAJPEAV?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@23@AEBU_GUID@@PEAPEAX@Z @ 0x1800857B4 (--$AsIID@V-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@@-$RuntimeC.c)
 *     ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180164440 (--$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AE.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@$0A@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18038E320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@$0A@$0A@UIClassFa.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000001_0000_0000_c000_000000000046) )
    return 2147500034LL;
  *v2 = v3;
  return 0LL;
}

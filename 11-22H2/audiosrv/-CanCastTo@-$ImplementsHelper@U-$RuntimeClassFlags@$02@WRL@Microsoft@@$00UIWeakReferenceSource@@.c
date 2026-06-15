/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001028C
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUICompositeSystemEffect@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUICompositeSystemEffect@@@Z @ 0x1800103EC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180010854 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002D9B8 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixPr.c)
 *     ??$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180103290 (--$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18010368C (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteris.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IInspectable>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>::CanCastTo(
             v3 + 8,
             v4);
  *v2 = v3;
  return 0LL;
}

/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180020074
 * Callers:
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18001F658 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCGainStage@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002005C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCGainStag.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>()
{
  __int64 v0; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CGainStage>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CGainStage>>();
  result = v0;
  *(_DWORD *)(v0 + 52) = 1;
  return result;
}

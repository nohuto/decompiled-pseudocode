/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D6E4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z @ 0x18000D988 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18000E3DC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEB_W$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18000EB38 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x18000F82C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 *     CreateDwmSceneRenderer @ 0x1800105F0 (CreateDwmSceneRenderer.c)
 *     ?AddComponent@SpectreLightNode@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800125B0 (-AddComponent@SpectreLightNode@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddNode@SpectreLightNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x1800125F0 (-AddNode@SpectreLightNode@@UEAAJPEAPEAUISpectreNode@@@Z.c)
 *     ?SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x1800129D0 (-SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?AddComponent@SpectreNode@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014C10 (-AddComponent@SpectreNode@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x180014CA0 (-AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z.c)
 *     ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090 (-SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z @ 0x180018290 (-CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z.c)
 *     ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0 (-CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z.c)
 *     ?CreateMesh@SpectreRenderer@@UEAAJPEAPEAUISpectreMesh@@@Z @ 0x1800184C0 (-CreateMesh@SpectreRenderer@@UEAAJPEAPEAUISpectreMesh@@@Z.c)
 *     ?CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z @ 0x180018570 (-CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z.c)
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z @ 0x1800187F0 (-CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18001BF8C (-RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     _SpectreMaterial::SetAlphaCutoff_::_1_::catch$0 @ 0x1800E3D76 (_SpectreMaterial--SetAlphaCutoff_--_1_--catch$0.c)
 *     _SpectreMaterial::SetAlphaMode_::_1_::catch$0 @ 0x1800E3DB6 (_SpectreMaterial--SetAlphaMode_--_1_--catch$0.c)
 *     _SpectreMaterial::SetBaseColorFactor_::_1_::catch$0 @ 0x1800E3DF6 (_SpectreMaterial--SetBaseColorFactor_--_1_--catch$0.c)
 *     _SpectreMaterial::SetEmissiveFactor_::_1_::catch$0 @ 0x1800E3E36 (_SpectreMaterial--SetEmissiveFactor_--_1_--catch$0.c)
 *     _SpectreMaterial::SetIsDoubleSided_::_1_::catch$0 @ 0x1800E3E76 (_SpectreMaterial--SetIsDoubleSided_--_1_--catch$0.c)
 *     _SpectreMaterial::SetMetallicRoughnessFactor_::_1_::catch$0 @ 0x1800E3EB6 (_SpectreMaterial--SetMetallicRoughnessFactor_--_1_--catch$0.c)
 *     _SpectreMaterial::SetNormalScale_::_1_::catch$0 @ 0x1800E3EF6 (_SpectreMaterial--SetNormalScale_--_1_--catch$0.c)
 *     _SpectreMaterial::SetOcclusionStrength_::_1_::catch$0 @ 0x1800E3F36 (_SpectreMaterial--SetOcclusionStrength_--_1_--catch$0.c)
 *     _SpectreMaterial::SetTexCoord_::_1_::catch$5 @ 0x1800E3F88 (_SpectreMaterial--SetTexCoord_--_1_--catch$5.c)
 *     _SpectreMaterial::SetTexture_::_1_::catch$9 @ 0x1800E40A0 (_SpectreMaterial--SetTexture_--_1_--catch$9.c)
 *     _SpectreMesh::SetData_::_1_::catch$0 @ 0x1800E40E3 (_SpectreMesh--SetData_--_1_--catch$0.c)
 *     _SpectreMeshComponent::SetMaterial_::_1_::catch$7 @ 0x1800E41E3 (_SpectreMeshComponent--SetMaterial_--_1_--catch$7.c)
 *     _SpectreMeshComponent::SetMesh_::_1_::catch$8 @ 0x1800E4226 (_SpectreMeshComponent--SetMesh_--_1_--catch$8.c)
 *     _SpectreMeshComponent::UpdateBounds_::_1_::catch$6 @ 0x1800E4266 (_SpectreMeshComponent--UpdateBounds_--_1_--catch$6.c)
 *     _SpectreSampler::SetSamplerProperties_::_1_::catch$0 @ 0x1800E46BF (_SpectreSampler--SetSamplerProperties_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x18000CC70 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<1>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}

/*
 * XREFs of ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044
 * Callers:
 *     ??$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18001085C (--$CreateResource@VFrameBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VFrameBu.c)
 *     ?ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z @ 0x1800115D8 (-ReplaceBackBufferTexture@RenderOutputDwm@@QEAAXPEAUID3D11Texture2D@@II@Z.c)
 *     ?GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180012690 (-GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x1800129D0 (-SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z @ 0x180012F60 (-SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?Initialize@SpectreMeshComponent@@IEAAXXZ @ 0x1800143FC (-Initialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z @ 0x1800144E0 (-SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z.c)
 *     ?SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z @ 0x180014650 (-SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z.c)
 *     ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790 (-Uninitialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?UpdateBounds@SpectreMeshComponent@@UEAAJXZ @ 0x1800148B0 (-UpdateBounds@SpectreMeshComponent@@UEAAJXZ.c)
 *     ?AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x180014CA0 (-AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z.c)
 *     ?GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180014E10 (-GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z @ 0x180014FF0 (-RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z.c)
 *     ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090 (-SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ??$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180016024 (--$CreateResource@VMesh@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VMesh@Engine@Sp.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x1800160F8 (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VSampler@Eng.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x1800161CC (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VTexture@Eng.c)
 *     ?CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z @ 0x180018290 (-CreateLightNode@SpectreRenderer@@UEAAJW4Dwm3DLightType@@PEAPEAUISpectreLightNode@@@Z.c)
 *     ?CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z @ 0x1800187F0 (-CreateWorld@SpectreRenderer@@UEAAJPEAPEAUISpectreWorld@@@Z.c)
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?GetAxisAlignedBoundingBox@SpectreWorld@@UEBAXPEAUD2D_VECTOR_3F@@0@Z @ 0x18001BE80 (-GetAxisAlignedBoundingBox@SpectreWorld@@UEBAXPEAUD2D_VECTOR_3F@@0@Z.c)
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180024810 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VDepthBu.c)
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@3@@Z @ 0x180024A24 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180024A24.c)
 *     ?DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800262CC (-DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV-$shared_ptr@VIRenderOutput@Engine@Spectre.c)
 *     ?LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180026D3C (-LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA-AV-$unique_lock@VMutex@Engine@Spectre@@.c)
 *     ?Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x180027148 (-Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ.c)
 *     ?CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ @ 0x180032A64 (-CheckAllLoadersDestroyed@Engine@1Spectre@@IEAAXXZ.c)
 *     ?CreateConfiguration@Engine@1Spectre@@QEAAHH@Z @ 0x180032B8C (-CreateConfiguration@Engine@1Spectre@@QEAAHH@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     _anonymous_namespace_::GetFirstRenderOutput @ 0x18003431C (_anonymous_namespace_--GetFirstRenderOutput.c)
 *     ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8 (-ProcessNewResources@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ @ 0x180035B10 (-RemoveExpiredLoaders@Engine@1Spectre@@IEAAXXZ.c)
 *     ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC (-RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ.c)
 *     ?UpdateScene@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800375F8 (-UpdateScene@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ??$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180043474 (--$CreateResource@VRenderState@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRenderS.c)
 *     ??$CreateResource@VIndexBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180047194 (--$CreateResource@VIndexBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VIndexBu.c)
 *     ??$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@AEAW4Attribute@DeviceVertexBuffer@01@@Z @ 0x18004728C (--$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@2_ea_18004728C.c)
 *     ??$CreateResource@VDomainShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDomainShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D068 (--$CreateResource@VDomainShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VDomain.c)
 *     ??$CreateResource@VGeometryShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VGeometryShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D13C (--$CreateResource@VGeometryShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VGeom.c)
 *     ??$CreateResource@VHullShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VHullShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D210 (--$CreateResource@VHullShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VHullShad.c)
 *     ??$CreateResource@VPixelShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VPixelShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D2E4 (--$CreateResource@VPixelShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VPixelSh.c)
 *     ??$CreateResource@VVertexShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexShader@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18004D3B8 (--$CreateResource@VVertexShader@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VVertex.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ??$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x18005EBB4 (--$CreateResource@VMaterial@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VMaterial@E.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?AttachDevices@Component@Engine@Spectre@@QEAAXXZ @ 0x1800810A0 (-AttachDevices@Component@Engine@Spectre@@QEAAXXZ.c)
 *     ??$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180083B9C (--$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VCons.c)
 *     ??$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180086044 (--$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VVertex.c)
 *     ?RecoverData@ArrayBuffer@Engine@Spectre@@AEBA?AV?$shared_ptr@X@std@@XZ @ 0x180088CB8 (-RecoverData@ArrayBuffer@Engine@Spectre@@AEBA-AV-$shared_ptr@X@std@@XZ.c)
 *     ?UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z @ 0x180088EEC (-UpdateDeviceBuffer@ArrayBuffer@Engine@Spectre@@AEAAXAEAVRenderDevice@23@@Z.c)
 *     ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260 (-SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z.c)
 *     ?UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z @ 0x1800CB0F0 (-UpdateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXMMMM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90 (--4-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260 (-HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2B4 (-HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(Spectre::Engine::Lockable *this, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // r8d
  __int64 ExclusiveLock; // rax
  _BYTE v8[16]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-90h]
  _QWORD v10[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+90h] [rbp-48h] BYREF

  v9 = a2;
  if ( Spectre::Engine::Lockable::HasSharedLock(this) )
  {
    std::string::string(
      v11,
      (__int64)"Attempt to get exclusive lock failed due to mutex already being locked in shared mode");
    v4 = (unsigned int)std::string::string(
                         v10,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\concurrency.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v4, v5, (unsigned int)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !Spectre::Engine::Lockable::HasExclusiveLock(this) )
  {
    ExclusiveLock = Spectre::Engine::Lockable::GetExclusiveLock(this, (__int64)v8);
    std::unique_lock<Spectre::Engine::Mutex>::operator=(a2, ExclusiveLock);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v8);
  }
  return a2;
}

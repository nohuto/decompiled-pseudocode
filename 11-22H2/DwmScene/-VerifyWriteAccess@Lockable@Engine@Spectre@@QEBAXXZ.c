/*
 * XREFs of ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384
 * Callers:
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?Initialize@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@@Z @ 0x180026AC0 (-Initialize@RenderDevice@Engine@Spectre@@MEAAXAEBUDeviceDescription@23@AEBUOutputDescription@23@.c)
 *     ?InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026C70 (-InitializeRenderer@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DF5C (--$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 *     ?CreateNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@AEB_K@Z @ 0x180040B38 (-CreateNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@A.c)
 *     ?ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6A_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180040EE4 (-ForEachNodeIf@Scene@Engine@Spectre@@QEAAXAEBV-$function@$$A6A_NAEBV-$shared_ptr@VSceneNode@Engi.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654 (-UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z.c)
 *     ?AttachDevice@Material@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180044120 (-AttachDevice@Material@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004B100 (-AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std.c)
 *     ?AttachDevice@Camera@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005A170 (-AttachDevice@Camera@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?AttachDevice@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18005FFF0 (-AttachDevice@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std.c)
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800C585C (-GetDeviceContext@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11DeviceContext1@.c)
 *     ?OnShutdown@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6A50 (-OnShutdown@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180029E4C (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ?HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2C4 (-HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 */

void __fastcall Spectre::Engine::Lockable::VerifyWriteAccess(Spectre::Engine::Lockable *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( !Spectre::Engine::Lockable::HasWriteAccess(this) )
  {
    std::string::string(
      v4,
      (__int64)"Lockable::VerifyWriteAccess() -- EXCLUSIVE LOCK REQUIRED\n"
               "The requested operation requires that the current thread holds this lockable object's mutex lock exclusiv"
               "e (read/write) access.\n"
               "To acquire exclusive lock from C++, call Lockable::GetExclusiveLock() and hold the lock via: auto lock(ob"
               "ject->GetExclusiveLock()) { ... }\n"
               "To acquire exclusive lock from C#, call Lockable.GetExclusiveLock() and hold the lock via: using (object."
               "GetExclusiveLock()) { ... }\n");
    v1 = std::string::string(
           v3,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\concurrency.cpp");
    Spectre::Engine::EngineAccessDeniedException::EngineAccessDeniedException(
      pExceptionObject,
      (__int64)v1,
      v2,
      (__int64)v4);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
}

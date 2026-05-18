/*
 * XREFs of ?VerifyReadAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2FC
 * Callers:
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@4@@Z @ 0x18002DDE4 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$fu_ea_18002DDE4.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@_K@Z @ 0x180040DF4 (-FindNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_p.c)
 *     ?ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV?$function@$$A6AXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x180040E6C (-ForEachNode@Scene@Engine@Spectre@@QEBAXAEBV-$function@$$A6AXAEBV-$shared_ptr@$$CBVSceneNode@Eng.c)
 *     ?GetBoundingBox@Scene@Engine@Spectre@@QEAAAEBUBoundingBox@DirectX@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180040F90 (-GetBoundingBox@Scene@Engine@Spectre@@QEAAAEBUBoundingBox@DirectX@@V-$basic_string@_WU-$char_tra.c)
 *     ?GetLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x180041040 (-GetLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basic_s.c)
 *     ?GetNodeLayer@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180041110 (-GetNodeLayer@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$sha.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ??$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061E70 (--$FindClone@VAimer@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VAimer@Engine@Spe.c)
 *     ??$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180061FA8 (--$FindClone@VColorTransform@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VColorTr.c)
 *     ??$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x1800620E0 (--$FindClone@VLight@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLight@Engine@Spe.c)
 *     ??$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062218 (--$FindClone@VLightProbe@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VLightProbe@.c)
 *     ??$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062350 (--$FindClone@VShadowMapCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VShadow.c)
 *     ??$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@4@V?$shared_ptr@VComponent@Engine@Spectre@@@4@@Z @ 0x180062488 (--$FindClone@VViewerCamera@Engine@Spectre@@@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VViewerCam.c)
 *     ?FindClone@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VScene@Engine@Spectre@@@5@V45@@Z @ 0x1800669E0 (-FindClone@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_.c)
 *     ?ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@5@V45@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x1800721C0 (-ApplyCameraEffect@ImageProcessingManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Sp.c)
 *     ?ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@_N@Z @ 0x1800735A4 (-ProcessScene@ImageProcessingManager@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineAccessDeniedException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x180029E4C (--0EngineAccessDeniedException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 *     ?HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A270 (-HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Lockable::VerifyReadAccess(Spectre::Engine::Lockable *this)
{
  _QWORD *v1; // rax
  __int64 v2; // r8
  _QWORD v3[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v4[4]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-50h] BYREF

  if ( !Spectre::Engine::Lockable::HasReadAccess(this) )
  {
    std::string::string(
      v4,
      (__int64)"Lockable::VerifyReadAccess() -- SHARED OR EXCLUSIVE LOCK REQUIRED\n"
               "The requested operation requires that the current thread holds this lockable object's mutex lock for excl"
               "usive (read/write) or shared (read-only) access.\n");
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

/*
 * XREFs of ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801BCEDC
 * Callers:
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1802194CC (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x180223E4C (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x18024E4AC (--0CSceneMesh@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18024F7AC (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x180250EC8 (--0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z.c)
 *     ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x180251890 (-OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18026314C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUISceneNotificationListener@@@?$vector@PEAUISceneNotificationListener@@V?$allocator@PEAUISceneNotificationListener@@@std@@@std@@QEAAPEAPEAUISceneNotificationListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801BC228 (--$_Emplace_reallocate@AEBQEAUISceneNotificationListener@@@-$vector@PEAUISceneNotificationListen.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801BCBD4 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  const void **v4; // rcx
  _BYTE *v5; // rdx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  void (__fastcall ***v7)(_QWORD, struct ISpectreRenderer *); // r8
  struct ISceneNotificationListener *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (const void **)((char *)this + 40);
  v5 = (_BYTE *)*((_QWORD *)this + 6);
  if ( v5 == *((_BYTE **)this + 7) )
  {
    std::vector<ISceneNotificationListener *>::_Emplace_reallocate<ISceneNotificationListener * const &>(v4, v5, &v8);
  }
  else
  {
    *(_QWORD *)v5 = a2;
    *((_QWORD *)this + 6) += 8LL;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**v7)(v7, SpectreRenderer);
}

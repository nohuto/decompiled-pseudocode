/*
 * XREFs of ?AddRenderPass@Camera@Engine@Spectre@@QEAAH_K0V?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@0@Z @ 0x180059E28
 * Callers:
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     ??0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800978B4 (--0ImageProcessingCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@QEAAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180058988 (--$_Emplace_reallocate@AEBURenderPassInfo@Camera@Engine@Spectre@@@-$vector@URenderPassInfo@Camer.c)
 *     ??0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x18005962C (--0RenderPassInfo@Camera@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ?SetShaderProperty@Camera@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@H@Z @ 0x18005D3F0 (-SetShaderProperty@Camera@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Camera::AddRenderPass(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v7; // esi
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx
  _QWORD v11[2]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-1h] BYREF
  char v13[8]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h]
  std::_Ref_count_base *v17[2]; // [rsp+88h] [rbp+3Fh] BYREF

  *(_OWORD *)v17 = 0LL;
  v13[0] = 1;
  v14 = a2;
  v15 = a3;
  v16 = a5;
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v17, a4);
  if ( a1[14] == a1[15] )
  {
    std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Emplace_reallocate<Spectre::Engine::Camera::RenderPassInfo const &>(
      a1 + 13,
      a1[14],
      (const struct Spectre::Engine::Camera::RenderPassInfo *)v13);
  }
  else
  {
    Spectre::Engine::Camera::RenderPassInfo::RenderPassInfo(
      (Spectre::Engine::Camera::RenderPassInfo *)a1[14],
      (const struct Spectre::Engine::Camera::RenderPassInfo *)v13);
    a1[14] += 48LL;
  }
  v7 = -1431655765 * ((a1[14] - a1[13]) >> 4) - 1;
  v8 = std::string::string(v12, (__int64)&Spectre::Engine::ShaderConstants::kPipeline_RenderPassInfo);
  v11[0] = COERCE_UNSIGNED_INT((float)(int)v7);
  v11[1] = 0LL;
  Spectre::Engine::Camera::SetShaderProperty(a1, v8, v11, v7);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  v9 = (std::_Ref_count_base *)a4[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return v7;
}

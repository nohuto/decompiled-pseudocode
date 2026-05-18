/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600
 * Callers:
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 *     ?RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005BF40 (-RenderEffects@Camera@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 *     ?RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z @ 0x18008E728 (-RecreateColorFrameBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXW4Format@23@@Z.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E8DC (-RecreateDepthSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VMeshInstance@Engine@Spectre@@@5@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180097A20 (-RenderMesh@ImageProcessingCamera@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z @ 0x1800CBF28 (-CreateTexture@RenderTargetD3D11@D3D11@Engine@Spectre@@IEAAXIIW4Format@34@I@Z.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBD_K23@Z @ 0x1800133F4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@U_String_constructor_concat.c)
 */

char *__fastcall std::operator+<char>(char *a1, _QWORD *a2, _BYTE *Src)
{
  size_t v4; // r9
  size_t Size; // rcx

  v4 = -1LL;
  Size = a2[2];
  do
    ++v4;
  while ( Src[v4] );
  if ( 0x7FFFFFFFFFFFFFFFLL - Size < v4 )
    std::_Xlen_string();
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  std::string::string(a1, (__int64)a2, (__int64)Src, a2, Size, Src, v4);
  return a1;
}

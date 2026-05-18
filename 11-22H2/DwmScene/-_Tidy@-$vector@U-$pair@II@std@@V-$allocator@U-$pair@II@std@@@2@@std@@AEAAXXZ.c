/*
 * XREFs of ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8
 * Callers:
 *     ??1SpectreRenderer@@EEAA@XZ @ 0x180017B24 (--1SpectreRenderer@@EEAA@XZ.c)
 *     ??1Engine@0Spectre@@UEAA@XZ @ 0x180031CC4 (--1Engine@0Spectre@@UEAA@XZ.c)
 *     ??1Input@Engine@Spectre@@QEAA@XZ @ 0x180031F44 (--1Input@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$vector@PEAVSceneNode@Engine@Spectre@@V?$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003FFB0 (--1-$vector@PEAVSceneNode@Engine@Spectre@@V-$allocator@PEAVSceneNode@Engine@Spectre@@@std@@@std@.c)
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ??1FrameData@Engine@Spectre@@QEAA@XZ @ 0x1800743B0 (--1FrameData@Engine@Spectre@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x18007CB74 (--1-$_Tidy_guard@V-$vector@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 *     ?AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007D290 (-AddShaderPipelines@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FB90 (-AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ??1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ @ 0x180081EF8 (--1ShaderPropertyLayout@Engine@Spectre@@QEAA@XZ.c)
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 *     ??1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ @ 0x18009BF10 (--1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned int,unsigned int>>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

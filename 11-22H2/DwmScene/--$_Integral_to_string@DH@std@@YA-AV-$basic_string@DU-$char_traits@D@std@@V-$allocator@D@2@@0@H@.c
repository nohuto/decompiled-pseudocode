/*
 * XREFs of ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00
 * Callers:
 *     ??0FrameBuffer@Engine@Spectre@@QEAA@XZ @ 0x180027E0C (--0FrameBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 *     ?GetPropertyName@ShaderManager@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x18004FD54 (-GetPropertyName@ShaderManager@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84 (--0DepthBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SceneAttributeManager@Engine@Spectre@@QEAA@XZ @ 0x180070744 (--0SceneAttributeManager@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 *     ?AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4ShaderProperty@23@W4ShaderPropertyType@23@@Z @ 0x180081FB4 (-AccessPropertyDefaultContents@ShaderPropertyLayout@Engine@Spectre@@AEAAPEATValueElement@123@W4S.c)
 *     ?GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180082F9C (-GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ?UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@I@Z @ 0x18009D410 (-UpdateBuffers@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXPEAVRenderDevice@23@IIW4Format@23@.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$?0PEAD$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEAD0AEBV?$allocator@D@1@@Z @ 0x180027AB8 (--$-0PEAD$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEAD0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x180027D8C (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 */

__int64 __fastcall std::_Integral_to_string<char,int>(__int64 a1, int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)std::_UIntegral_to_buff<char,unsigned int>(v5);
  }
  else
  {
    v3 = (_BYTE *)(std::_UIntegral_to_buff<char,unsigned int>(v5) - 1);
    *v3 = 45;
  }
  std::string::string(a1, v3, v5);
  return a1;
}

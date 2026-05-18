/*
 * XREFs of ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C
 * Callers:
 *     ??$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z @ 0x180047340 (--$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z.c)
 *     ??$GetEffect@VImageProcessingEffectBloom@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VImageProcessingEffectBloom@Engine@Spectre@@@std@@XZ @ 0x1800628EC (--$GetEffect@VImageProcessingEffectBloom@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@.c)
 *     ??$GetEffect@VImageProcessingEffectPlanarReflection@Engine@Spectre@@@ImageProcessingManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VImageProcessingEffectPlanarReflection@Engine@Spectre@@@std@@XZ @ 0x1800629E0 (--$GetEffect@VImageProcessingEffectPlanarReflection@Engine@Spectre@@@ImageProcessingManager@Engi.c)
 *     ??$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA?AV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@std@@V?$shared_ptr@VComponent@Engine@Spectre@@@3@@Z @ 0x180097888 (--$spectre_safe_pointer_cast@$$CBVCamera@Engine@Spectre@@VComponent@23@@Utils@Spectre@@YA-AV-$sh.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::static_pointer_cast<unsigned int,void>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a1[1] = a2[1];
  result = a1;
  *a1 = v3;
  return result;
}

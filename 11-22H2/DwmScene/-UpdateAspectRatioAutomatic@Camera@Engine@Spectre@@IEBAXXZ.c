/*
 * XREFs of ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?CalculateFramingDistanceFromRadius@ViewerCamera@Engine@Spectre@@QEBAMM@Z @ 0x180092180 (-CalculateFramingDistanceFromRadius@ViewerCamera@Engine@Spectre@@QEBAMM@Z.c)
 * Callees:
 *     ?GetViewportActive@Camera@Engine@Spectre@@IEBA?AU?$ViewportBounds@UVector3@Math@Utils@Spectre@@@123@XZ @ 0x18005BBC0 (-GetViewportActive@Camera@Engine@Spectre@@IEBA-AU-$ViewportBounds@UVector3@Math@Utils@Spectre@@@.c)
 *     ?SetAspectRatioInternal@Camera@Engine@Spectre@@IEBAXM@Z @ 0x18005CFD0 (-SetAspectRatioInternal@Camera@Engine@Spectre@@IEBAXM@Z.c)
 */

void __fastcall Spectre::Engine::Camera::UpdateAspectRatioAutomatic(Spectre::Engine::Camera *this)
{
  unsigned __int64 v2; // xmm4_8
  unsigned __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-20h]
  unsigned __int64 v5; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v6; // [rsp+34h] [rbp-14h]

  if ( *((_BYTE *)this + 336) && *((_BYTE *)this + 1612) )
  {
    Spectre::Engine::Camera::GetViewportActive(this, (__int64)&v3);
    v2 = _mm_sub_ps(_mm_movelh_ps((__m128)v5, (__m128)v6), _mm_movelh_ps((__m128)v3, (__m128)v4)).m128_u64[0];
    v3 = v2;
    if ( *((float *)&v2 + 1) != 0.0 )
    {
      Spectre::Engine::Camera::SetAspectRatioInternal(this, *(float *)&v3 / *((float *)&v2 + 1));
      *((_BYTE *)this + 1612) = 0;
    }
  }
}

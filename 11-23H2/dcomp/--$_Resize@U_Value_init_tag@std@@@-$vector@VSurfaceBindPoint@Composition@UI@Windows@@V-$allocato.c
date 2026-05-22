/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C
 * Callers:
 *     ?RuntimeClassInitialize@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@II_N@Z @ 0x18017EECC (-RuntimeClassInitialize@CompositionCubeMap@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@3.c)
 *     ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x180193FEC (-RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@PEAV1234@_KAEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EBA0 (--$_Uninitialized_value_construct_n@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@.c)
 */

void __fastcall std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Resize<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  Windows::UI::Composition::SurfaceBindPoint *v4; // rbx

  v3 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 56LL;
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 56LL )
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(*(Windows::UI::Composition::SurfaceBindPoint **)(a1 + 8));
      else
        std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
    }
  }
  else
  {
    v4 = (Windows::UI::Composition::SurfaceBindPoint *)(*(_QWORD *)a1 + 56 * a2);
    std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
      v4,
      *(Windows::UI::Composition::SurfaceBindPoint **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v4;
  }
}

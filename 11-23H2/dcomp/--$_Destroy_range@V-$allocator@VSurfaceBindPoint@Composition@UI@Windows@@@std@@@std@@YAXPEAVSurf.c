/*
 * XREFs of ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC
 * Callers:
 *     ??_ECompositionCubeMap@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123920 (--_ECompositionCubeMap@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ @ 0x180156980 (--1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C (--$_Resize@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocato.c)
 *     ??$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@0PEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EAC0 (--$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoi.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@PEAV1234@_KAEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EBA0 (--$_Uninitialized_value_construct_n@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@.c)
 *     ?_Change_array@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAXQEAVSurfaceBindPoint@Composition@UI@Windows@@_K1@Z @ 0x18017F2DC (-_Change_array@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoint.c)
 *     ?clear@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@QEAAXXZ @ 0x18017F370 (-clear@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoint@Composi.c)
 * Callees:
 *     ??1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ @ 0x180123238 (--1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
        Windows::UI::Composition::SurfaceBindPoint *this,
        Windows::UI::Composition::SurfaceBindPoint *a2)
{
  Windows::UI::Composition::SurfaceBindPoint *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Windows::UI::Composition::SurfaceBindPoint::~SurfaceBindPoint(v3);
      v3 = (Windows::UI::Composition::SurfaceBindPoint *)((char *)v3 + 56);
    }
    while ( v3 != a2 );
  }
}

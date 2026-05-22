/*
 * XREFs of ?_Change_array@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAXQEAVSurfaceBindPoint@Composition@UI@Windows@@_K1@Z @ 0x18017F2DC
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Windows::UI::Composition::SurfaceBindPoint *v6; // rcx
  __int64 result; // rax

  v6 = *(Windows::UI::Composition::SurfaceBindPoint **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
      v6,
      *(Windows::UI::Composition::SurfaceBindPoint **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 56 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 56LL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 56 * a3;
  result = a2 + 56 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@PEAV1234@_KAEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EBA0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C (--$_Resize@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocato.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 */

Windows::UI::Composition::SurfaceBindPoint *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(
        Windows::UI::Composition::SurfaceBindPoint *this,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    *(_QWORD *)this = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    this = (Windows::UI::Composition::SurfaceBindPoint *)((char *)this + 56);
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>(this, this);
  return this;
}

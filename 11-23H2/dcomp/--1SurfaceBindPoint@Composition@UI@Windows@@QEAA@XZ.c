/*
 * XREFs of ??1SurfaceBindPoint@Composition@UI@Windows@@QEAA@XZ @ 0x180123238
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x1801224FC (--$_Destroy_range@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAXPEAVSurf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089DAC (-InternalRelease@-$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z @ 0x180168D00 (-Destroy@SurfaceBindPoint@Composition@UI@Windows@@QEAAX_N@Z.c)
 */

void __fastcall Windows::UI::Composition::SurfaceBindPoint::~SurfaceBindPoint(
        Windows::UI::Composition::SurfaceBindPoint *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Windows::UI::Composition::SurfaceBindPoint::`vftable';
  Windows::UI::Composition::SurfaceBindPoint::Destroy(this, 0);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 1);
}

/*
 * XREFs of ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8
 * Callers:
 *     ?Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@2@PEAPEAV12@@Z @ 0x1800E6968 (-Create@CDelegatedInkTrailImpl@DirectComposition@@SAJPEAVCDevice@2@PEAVCCompositionSurfaceProxy@.c)
 *     ??$?4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@?$ComPtr@VCSharedAllocationBase@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@12@@Z @ 0x1800FC0B4 (--$-4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@-$ComPtr@VCSharedAllocatio.c)
 *     ??1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ @ 0x1800FC0EC (--1CSynchronousSuperWetInk@DirectComposition@@EEAA@XZ.c)
 *     ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z @ 0x1800FF760 (-CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDComp.c)
 *     ??_GDelegatedInkTrailVisual@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18011B0A0 (--_GDelegatedInkTrailVisual@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z @ 0x18011B6E4 (-RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@.c)
 *     ??1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ @ 0x180123158 (--1CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1801859D0 (-Destroy@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return result;
}

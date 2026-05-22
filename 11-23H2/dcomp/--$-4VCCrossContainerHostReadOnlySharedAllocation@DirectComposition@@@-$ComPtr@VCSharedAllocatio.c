/*
 * XREFs of ??$?4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@?$ComPtr@VCSharedAllocationBase@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@12@@Z @ 0x1800FC0B4
 * Callers:
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E6BD8 (-InternalRelease@-$ComPtr@VCDelegatedInkTrailImpl@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocationBase>::operator=<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  v6 = v4;
  Microsoft::WRL::ComPtr<DirectComposition::CDelegatedInkTrailImpl>::InternalRelease(&v6);
  return a1;
}

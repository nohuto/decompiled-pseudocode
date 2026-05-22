/*
 * XREFs of ??$ReleaseInterface@VCAnimationProxy@DirectComposition@@@@YAXAEAPEAVCAnimationProxy@DirectComposition@@@Z @ 0x180063DF0
 * Callers:
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z @ 0x18000FF50 (-End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x180035D80 (-AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z @ 0x180036C40 (-AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z.c)
 *     ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z @ 0x180063650 (-Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ @ 0x180064050 (-Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ.c)
 *     ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x180088600 (-AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x1800E83F0 (-AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x1800E8490 (-AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z @ 0x1800E85B0 (-SetAbsoluteBeginTime@CAnimationBuilder@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z.c)
 *     ?SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z @ 0x1800E86C0 (-SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@.c)
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CAnimationProxy>(DirectComposition::CTransformGroupProxy **a1)
{
  DirectComposition::CTransformGroupProxy *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CTransformGroupProxy::Release(v2);
    *a1 = 0LL;
  }
  return result;
}

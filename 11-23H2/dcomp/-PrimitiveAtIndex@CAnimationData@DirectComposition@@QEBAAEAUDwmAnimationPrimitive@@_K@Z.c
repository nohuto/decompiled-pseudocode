/*
 * XREFs of ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90
 * Callers:
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18003463C (-AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAnimationProxy@2@@Z @ 0x180063974 (-GetAnimationResourceHandle@CAnimationBuilder@DirectComposition@@QEAAJPEAVCDevice@2@_NPEAPEAVCAn.c)
 *     ?OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ @ 0x180063C9C (-OptimizeTrailingPrimitives@CAnimationBuilder@DirectComposition@@QEAAXXZ.c)
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 *     ?GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ @ 0x1800E8B78 (-GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ.c)
 *     ?GetPrimitive@CAnimationInstance@DirectComposition@@UEAAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800E8BD0 (-GetPrimitive@CAnimationInstance@DirectComposition@@UEAAPEBUDwmAnimationPrimitive@@I@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

struct DwmAnimationPrimitive *__fastcall DirectComposition::CAnimationData::PrimitiveAtIndex(
        DirectComposition::CAnimationData *this,
        __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 24LL) + 96LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  return (struct DwmAnimationPrimitive *)(32 * a2 + 56 + *((_QWORD *)this + 2));
}

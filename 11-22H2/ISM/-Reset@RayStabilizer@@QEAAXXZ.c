/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800D8E74
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800380C8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800CE6F4 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x1800D7660 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801F0058 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801F4B70 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F4CD0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800D0BFC (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::_Tidy(this);
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
}

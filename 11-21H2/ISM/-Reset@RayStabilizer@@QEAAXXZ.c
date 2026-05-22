/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800B0B2C
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x180028540 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800A640C (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x1800AF320 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801C434C (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801C8E40 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8FA0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800A88EC (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::_Tidy(this);
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
}

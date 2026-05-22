/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C9B24
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18003C118 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCHandProcessor@@QEAA@XZ @ 0x1800BDFF8 (--0MPCHandProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x1800C8320 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1801E2ED8 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ?OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ @ 0x1801E7D20 (-OnPromotedToPrimary@MPCMouseProcessor@@MEAAXXZ.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E7E80 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXXZ @ 0x1800C05EC (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEAAXX.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  std::deque<RayStabilizationResult>::_Tidy(this);
  *((_BYTE *)this + 80) = 0;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
}

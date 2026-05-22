/*
 * XREFs of ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD8E4
 * Callers:
 *     ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800BF470 (-OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800BFA30 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInf.c)
 *     ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801DAD10 (-OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DADF0 (-PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E1E68 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E7E80 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BDB98 (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@V-$basic_string_view@GU-$char_tra.c)
 */

__int64 __fastcall MPCConstantManager::GetConstant<bool>(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
  v7 = *a3;
  return MPCConstantManager::GetStaticConstant<bool>(a1, v5, &v7);
}

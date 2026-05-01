/*
 * XREFs of ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180036858
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180034F80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemResourceTimerSet(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v6; // rsi

  v3 = 48LL;
  if ( a1 )
    v3 = (__int64)a1 - 16;
  v6 = *(_QWORD *)(*(_QWORD *)v3 + 40LL);
  if ( (*(int (__fastcall **)(void *, __int64, _QWORD))(v6 + 184))(a3, a2, 0LL) < 0 )
    (*(void (__fastcall **)(void *, __int64, __int64))(v6 + 184))(a3, a2, 1LL);
}

/*
 * XREFs of ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D18C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D1D8 (-HampHostShouldSendPsmQuiesceNotifications@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D22C (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D274 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostComputeWaitType(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // r9
  struct _RM_HAM_ACTIVITY_HOST *v2; // r9
  unsigned int v3; // r8d

  if ( HampHostShouldSendDesktopWindowClose(a1) )
  {
    return 2;
  }
  else if ( HampHostShouldSendPsmQuiesceAndQueryRestart(v1) )
  {
    return 3;
  }
  else
  {
    LOBYTE(v3) = HampHostShouldSendPsmQuiesceNotifications(v2) != 0;
  }
  return v3;
}

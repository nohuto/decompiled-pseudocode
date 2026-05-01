/*
 * XREFs of ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A020
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostDesktopWindowMessageWorkerArm(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 84) |= 0x40uLL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
    __fastfail(0xEu);
  TpPostWork(*((_QWORD *)a1 + 81));
  HampHostReleaseLockExclusiveEx(a1);
}

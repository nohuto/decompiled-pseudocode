/*
 * XREFs of ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F480
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall HampHostDesktopWindowMessageWorkerArm(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdx

  HampHostAcquireLockExclusiveEx(a1, 0);
  *((_QWORD *)a1 + 84) |= 0x40uLL;
  v2 = 16LL;
  if ( a1 )
    v2 = (__int64)a1 - 48;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v2) <= 1 )
    __fastfail(0xEu);
  TpPostWork(*((_QWORD *)a1 + 81));
  HampHostReleaseLockExclusiveEx(a1);
}

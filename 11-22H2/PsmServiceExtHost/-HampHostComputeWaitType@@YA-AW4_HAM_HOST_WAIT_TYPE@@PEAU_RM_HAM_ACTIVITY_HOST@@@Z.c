/*
 * XREFs of ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013158
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013214 (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013230 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007EF4C (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007F1B0 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampHostComputeWaitType(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r8
  char v6; // al

  v2 = 0;
  if ( HampHostShouldSendDesktopWindowClose(a1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v3);
    v4 = *(_DWORD *)(v3 + 340);
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v3);
    return (v4 & 2 | 4u) >> 1;
  }
  else if ( HampHostShouldSendPsmQuiesceAndQueryRestart((struct _RM_HAM_ACTIVITY_HOST *)v1) )
  {
    return 4;
  }
  else
  {
    v6 = *(_BYTE *)(v5 + 592);
    if ( !v6
      || v6 == 1
      && *(char *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 - 2132) < 0
      && (*(_DWORD *)(v5 + 664) & 0xFF00) == 0x1100 )
    {
      return 1;
    }
  }
  return v2;
}

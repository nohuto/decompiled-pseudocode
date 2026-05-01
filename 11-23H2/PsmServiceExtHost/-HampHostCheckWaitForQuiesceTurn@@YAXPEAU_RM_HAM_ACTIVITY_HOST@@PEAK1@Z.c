/*
 * XREFs of ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180013304
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180019AE0 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013360 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180013B3C (CempLockSleepConditionVariableExclusive.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376E4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037720 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

void __fastcall HampHostCheckWaitForQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdi
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-40h]
  __int64 v16; // [rsp+60h] [rbp-38h]

  v6 = 0;
  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v8);
    v10 = *(_DWORD *)(v8 + 340);
    if ( (v10 & 8) != 0 )
    {
      v11 = 64LL;
      if ( a1 )
        v11 = (__int64)a1;
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v11, v9);
      RmpReleaseGlobalLock();
      if ( (unsigned int)dword_1800DB218 > 5 )
      {
        v16 = 8LL;
        v12 = 32LL;
        if ( a1 )
          v12 = (__int64)a1 - 32;
        v13 = *(_QWORD *)v12;
        v15 = &v13;
        tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800BF984, 0, 0, 3u, &v14);
      }
      CempLockSleepConditionVariableExclusive(v8 + 304, v8 + 320, 0LL);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v8);
      v7 = 1;
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      *(_DWORD *)(v8 + 340) = v10 | 8;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v8);
      v7 = 0;
      v6 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  *a2 = v7;
  *a3 = v6;
}

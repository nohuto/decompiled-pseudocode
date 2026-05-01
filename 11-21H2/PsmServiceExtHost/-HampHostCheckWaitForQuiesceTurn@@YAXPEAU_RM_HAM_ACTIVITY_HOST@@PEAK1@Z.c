/*
 * XREFs of ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003ABA0
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AC34 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x18003E5B0 (CempLockSleepConditionVariableExclusive.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampHostCheckWaitForQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]

  v6 = 0;
  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v8);
    v9 = *(_DWORD *)(v8 + 340);
    if ( (v9 & 4) != 0 )
    {
      HampHostReleaseLockExclusiveEx(a1);
      RmpReleaseGlobalLock();
      if ( (unsigned int)dword_1800DC218 > 5 )
      {
        v10 = *((_QWORD *)a1 - 4);
        v13 = 8LL;
        v12 = &v10;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DC218,
          (unsigned __int8 *)dword_1800C0CB1,
          0LL,
          0LL,
          3u,
          &v11);
      }
      CempLockSleepConditionVariableExclusive(v8 + 304, v8 + 320, 0LL);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v8);
      v7 = 1;
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      *(_DWORD *)(v8 + 340) = v9 | 4;
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

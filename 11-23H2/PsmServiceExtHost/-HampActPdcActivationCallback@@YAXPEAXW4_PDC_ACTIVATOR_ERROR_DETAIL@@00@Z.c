/*
 * XREFs of ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x18007B680
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18008E01C (-HampSystemActivationClientRenewActivation@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@PEAW4_PDC_ACT.c)
 */

void __fastcall HampActPdcActivationCallback(void *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // esi
  _BYTE v10[8]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  __int128 v14; // [rsp+40h] [rbp-C8h]
  _BYTE v15[144]; // [rsp+50h] [rbp-B8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  HampHostAcquireLockSharedEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a4 + 80));
  v8 = *(_QWORD *)(a4 + 80);
  if ( *(void **)(a4 + 504) == a1 )
  {
    v9 = *(_DWORD *)(a4 + 384);
    CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
    RtlReleaseSRWLockShared(v8);
    if ( a2 == 100 )
    {
      v12 = 0LL;
      v13 = a4 + 124;
      v11[0] = 1;
      v11[1] = v9;
      v14 = 0LL;
      HampSystemActivationClientRenewActivation(
        a1,
        (const struct _PDC_ACTIVATION_PARAMETERS *)v11,
        (enum _PDC_ACTIVATOR_ERROR_DETAIL *)v10);
    }
  }
  else
  {
    CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
    RtlReleaseSRWLockShared(v8);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}

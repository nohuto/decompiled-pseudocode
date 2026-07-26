/*
 * XREFs of ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00580D4
 * Callers:
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C00178D8 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0058140 (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

void __fastcall ndisAoAcPauseRefTimeAccumulation(KSPIN_LOCK *a1)
{
  KIRQL v2; // r8

  KeAcquireSpinLockRaiseToDpc(a1);
  if ( a1[105] )
  {
    a1[103] += MEMORY[0xFFFFF78000000008] - a1[105];
    a1[105] = 0LL;
  }
  ndisAoAcPauseRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
  KeReleaseSpinLock(a1, v2);
}

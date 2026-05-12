/*
 * XREFs of ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88
 * Callers:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 * Callees:
 *     PmSetLegacyRemovableFlag @ 0x1C0002E64 (PmSetLegacyRemovableFlag.c)
 *     ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0 (-PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003030 (-PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 *     PmLayoutHasIds @ 0x1C001C8BC (PmLayoutHasIds.c)
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 *     PmUpdateAttributes @ 0x1C001CAC8 (PmUpdateAttributes.c)
 */

__int64 __fastcall PmUpdateLayoutEx(struct _DEVICE_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  int v2; // esi
  int updated; // eax
  KIRQL v6; // bl

  v2 = 0;
  if ( (*((_DWORD *)a1 + 128) & 1) != 0 )
  {
    PmSetLegacyRemovableFlag();
    if ( (*((_DWORD *)a1 + 128) & 0x800) != 0 )
    {
      updated = PmUpdatePartitionsLegacyRemovable(a1, a2);
    }
    else
    {
      if ( (unsigned __int8)PmLayoutHasIds(a2) )
      {
        v2 = PmUpdateAttributes(a1, a2);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v2 = PmValidateIds(a1, a2);
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
      updated = PmUpdatePartitions(a1, a2);
    }
    v2 = updated;
    if ( updated >= 0 )
    {
      v2 = PmAssociatePartitions(a1, a2);
      if ( v2 >= 0 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
        PmWakeupNotificationWorkItem(a1);
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v6);
      }
    }
  }
  return (unsigned int)v2;
}

/*
 * XREFs of ?PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C0003CEC
 * Callers:
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 * Callees:
 *     ?PmCheckIdsGpt@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CBF0 (-PmCheckIdsGpt@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLI.c)
 *     ?PmCheckIdsMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CE64 (-PmCheckIdsMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLI.c)
 */

__int64 __fastcall PmCheckIds(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        unsigned __int8 *a3,
        enum _DISK_OFFLINE_REASON *a4)
{
  PDEVICE_OBJECT v4; // rax
  unsigned int v5; // esi
  char *DeviceExtension; // rbp
  int v11; // eax
  KIRQL v13; // al

  v4 = PmControlObject;
  v5 = 0;
  *(_DWORD *)a4 = 0;
  *a3 = 0;
  DeviceExtension = (char *)v4->DeviceExtension;
  KeWaitForSingleObject(DeviceExtension + 104, Executive, 0, 0, 0LL);
  if ( !a2->PartitionStyle )
  {
    v11 = PmCheckIdsMbr(a1, a2, a3, a4);
LABEL_4:
    v5 = v11;
    if ( v11 < 0 )
      goto LABEL_7;
    goto LABEL_5;
  }
  if ( a2->PartitionStyle == 1 )
  {
    v11 = PmCheckIdsGpt(a1, a2, a3, a4);
    goto LABEL_4;
  }
LABEL_5:
  if ( *(_DWORD *)a4 == 4 )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    *((_DWORD *)a1 + 128) |= 0x4000u;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v13);
  }
LABEL_7:
  KeReleaseMutex((PRKMUTEX)(DeviceExtension + 104), 0);
  return v5;
}

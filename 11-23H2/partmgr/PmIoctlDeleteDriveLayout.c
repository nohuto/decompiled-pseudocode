/*
 * XREFs of PmIoctlDeleteDriveLayout @ 0x1C0025600
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 */

__int64 __fastcall PmIoctlDeleteDriveLayout(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  int Disk; // eax
  struct _KMUTANT *v3; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 64);
  KeWaitForSingleObject(v1 + 7, Executive, 0, 0, 0LL);
  Disk = PmCreateDisk(v1, 0LL);
  v3 = (struct _KMUTANT *)(v1 + 7);
  LODWORD(v1) = Disk;
  KeReleaseMutex(v3, 0);
  return (unsigned int)v1;
}

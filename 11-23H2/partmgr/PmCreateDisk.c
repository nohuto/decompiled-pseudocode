/*
 * XREFs of PmCreateDisk @ 0x1C001E9A4
 * Callers:
 *     PmIoctlCreateDisk @ 0x1C001E904 (PmIoctlCreateDisk.c)
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 *     PmIoctlDeleteDriveLayout @ 0x1C0025600 (PmIoctlDeleteDriveLayout.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005D84 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ??0PM_DISK@@QEAA@XZ @ 0x1C0021594 (--0PM_DISK@@QEAA@XZ.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

__int64 __fastcall PmCreateDisk(KSPIN_LOCK *a1, struct _CREATE_DISK *a2)
{
  PDEVICE_OBJECT v4; // r9
  int PartitionTable; // ebx
  _BYTE v7[416]; // [rsp+20h] [rbp-1B8h] BYREF

  PM_DISK::PM_DISK((PM_DISK *)v7);
  PartitionTable = PM_DISK::Initialize((PM_DISK *)v7, v4, 1u);
  if ( PartitionTable >= 0 )
    PartitionTable = SC_DISK::CreatePartitionTable((SC_DISK *)v7, a2);
  PM_DISK::~PM_DISK((PM_DISK *)v7);
  if ( PartitionTable >= 0 )
  {
    PmInvalidatePartitionTableCache((__int64)a1);
    return (unsigned int)PmGetDriveLayoutEx(a1, 0LL);
  }
  return (unsigned int)PartitionTable;
}

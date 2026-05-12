/*
 * XREFs of PmSetPartition @ 0x1C0024FD8
 * Callers:
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1C0010E4C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ??0PM_DISK@@QEAA@XZ @ 0x1C0021594 (--0PM_DISK@@QEAA@XZ.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

__int64 __fastcall PmSetPartition(__int64 a1, unsigned int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  PDEVICE_OBJECT v5; // r9
  int v6; // ebx
  _BYTE v8[416]; // [rsp+20h] [rbp-1B8h] BYREF

  PM_DISK::PM_DISK((PM_DISK *)v8);
  v6 = PM_DISK::Initialize((PM_DISK *)v8, v5, 1);
  if ( v6 >= 0 )
    v6 = SC_DISK::SetPartition((SC_DISK *)v8, a2, a3);
  PM_DISK::~PM_DISK((PM_DISK *)v8);
  return (unsigned int)v6;
}

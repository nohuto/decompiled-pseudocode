/*
 * XREFs of PmReadPartitionTable @ 0x1C0021460
 * Callers:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 * Callees:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1C000E4A0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ??0PM_DISK@@QEAA@XZ @ 0x1C0021594 (--0PM_DISK@@QEAA@XZ.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

__int64 __fastcall PmReadPartitionTable(__int64 a1, struct SC_DISK_LAYOUT **a2)
{
  PDEVICE_OBJECT v3; // r9
  int v4; // ebx
  struct SC_DISK_LAYOUT *v5; // rdi
  struct SC_DISK_LAYOUT *v6; // rcx
  struct SC_DISK_LAYOUT *v8; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v9[416]; // [rsp+30h] [rbp-1B8h] BYREF

  PM_DISK::PM_DISK((PM_DISK *)v9);
  v8 = 0LL;
  *a2 = 0LL;
  v4 = PM_DISK::Initialize((PM_DISK *)v9, v3, 1u);
  if ( v4 >= 0 )
  {
    v4 = SC_DISK::ReadPartitionTable((SC_DISK *)v9, &v8);
    if ( v4 < 0 )
    {
      v6 = v8;
    }
    else
    {
      v5 = v8;
      if ( (v9[200] & 2) != 0 )
        SC_DISK::WritePartitionTable((SC_DISK *)v9, v8);
      *a2 = v5;
      v6 = 0LL;
    }
    if ( v6 )
      SC_ENV::Free(v6);
  }
  PM_DISK::~PM_DISK((PM_DISK *)v9);
  return (unsigned int)v4;
}

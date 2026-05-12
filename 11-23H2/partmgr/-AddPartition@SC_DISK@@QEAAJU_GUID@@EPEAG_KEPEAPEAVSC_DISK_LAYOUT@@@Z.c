/*
 * XREFs of ?AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C000555C
 * Callers:
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 * Callees:
 *     ?FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z @ 0x1C0005604 (-FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z.c)
 *     ?AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005864 (-AddPartitionGpt@SC_DISK@@IEAAJ_K0U_GUID@@PEAGPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?AddPartitionMbr@SC_DISK@@IEAAJ_K0EPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010A30 (-AddPartitionMbr@SC_DISK@@IEAAJ_K0EPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DISK::AddPartition(
        SC_DISK *this,
        struct _GUID *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        struct SC_DISK_LAYOUT **a7)
{
  struct SC_DISK_LAYOUT **v7; // rsi
  unsigned int v9; // ebx
  struct SC_DISK_LAYOUT *v12; // rdi
  unsigned __int64 LargestFreeRun; // r8
  unsigned __int8 v14; // r9
  SC_DISK *v15; // rcx
  struct _GUID v18; // [rsp+30h] [rbp-28h] BYREF

  v7 = a7;
  v9 = 0;
  a5 = 0LL;
  v12 = *a7;
  LargestFreeRun = SC_DISK::FindLargestFreeRun(this, *a7, &a5);
  if ( !LargestFreeRun )
    return (unsigned int)-1070071789;
  v15 = (SC_DISK *)*(unsigned int *)v12;
  if ( !(_DWORD)v15 )
    return (unsigned int)SC_DISK::AddPartitionMbr(this, a5, LargestFreeRun, v14, v7);
  if ( (_DWORD)v15 == 1 )
  {
    v18 = *a2;
    return (unsigned int)SC_DISK::AddPartitionGpt(v15, a5, LargestFreeRun, &v18, a4, v7);
  }
  return v9;
}

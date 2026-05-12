/*
 * XREFs of ?FindLargestFreeRun@SC_DISK@@QEAA_KPEAVSC_DISK_LAYOUT@@PEA_K@Z @ 0x1C0005604
 * Callers:
 *     ?AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C000555C (-AddPartition@SC_DISK@@QEAAJU_GUID@@EPEAG_KEPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     ?FindFreeRunGpt@SC_DISK_LAYOUT@@QEAA_K_KEPEA_K@Z @ 0x1C0004C14 (-FindFreeRunGpt@SC_DISK_LAYOUT@@QEAA_K_KEPEA_K@Z.c)
 *     memcmp @ 0x1C000B530 (memcmp.c)
 *     ?FindFreeRunMbr@SC_DISK_LAYOUT@@QEAA_K_KK0EPEA_K@Z @ 0x1C0010AE4 (-FindFreeRunMbr@SC_DISK_LAYOUT@@QEAA_K_KK0EPEA_K@Z.c)
 */

unsigned __int64 __fastcall SC_DISK::FindLargestFreeRun(
        SC_DISK *this,
        struct SC_DISK_LAYOUT *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // ecx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 FreeRunGpt; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int8 v19; // [rsp+20h] [rbp-18h]
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = (_QWORD *)((char *)this + 8);
  v8 = *v5 - *(_QWORD *)&GUID_DEVCLASS_SCMDISK.Data1;
  if ( *v5 == *(_QWORD *)&GUID_DEVCLASS_SCMDISK.Data1 )
    v8 = v5[1] - *(_QWORD *)GUID_DEVCLASS_SCMDISK.Data4;
  if ( v8 )
    v9 = (-(__int64)(memcmp(v5, &GUID_DEVCLASS_SMRDISK, 0x10uLL) != 0) & 0xFFFFFFFFF0100000uLL) + 0x10000000;
  else
    v9 = 0x200000LL;
  v10 = *(_DWORD *)a2;
  v11 = 0LL;
  v12 = 0LL;
  v20 = 0LL;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_9;
    FreeRunGpt = SC_DISK_LAYOUT::FindFreeRunGpt(a2, 0LL, 0LL, &v20);
  }
  else
  {
    FreeRunGpt = SC_DISK_LAYOUT::FindFreeRunMbr(a2, *((_QWORD *)this + 26), *((_DWORD *)this + 59), a4, v19, &v20);
  }
  v11 = v20;
  v12 = FreeRunGpt;
LABEL_9:
  if ( v12 )
  {
    v14 = *((_QWORD *)this + 39);
    v15 = v11 + v12;
    v16 = ~(v9 - 1);
    if ( v14 )
      v17 = (v16 & (*(unsigned int *)(v14 + 24) + v11 + v9 - 1)) - *(unsigned int *)(v14 + 24);
    else
      v17 = v16 & (v9 + v11 - 1);
    if ( v17 >= v15 )
    {
      return 0LL;
    }
    else
    {
      v12 = v16 & (v15 - v17);
      if ( v12 )
        *a3 = v17;
    }
  }
  return v12;
}

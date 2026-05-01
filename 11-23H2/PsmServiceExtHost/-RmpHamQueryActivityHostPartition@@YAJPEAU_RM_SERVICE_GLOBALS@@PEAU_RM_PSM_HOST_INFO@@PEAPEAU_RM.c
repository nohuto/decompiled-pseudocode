/*
 * XREFs of ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031614
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180030980 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x180011D48 (-RmpSystemCloseHandle@@YAXPEAX@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180032170 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800329D4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBGPEAPEAX1PEAK@Z @ 0x1800513D4 (-RmpSystemQueryPackagePartitions@@YAJPEBGPEAPEAX1PEAK@Z.c)
 */

__int64 __fastcall RmpHamQueryActivityHostPartition(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PARTITION **a3)
{
  struct _RM_PARTITION *v5; // rbx
  int v6; // eax
  HANDLE v7; // rsi
  int v8; // edi
  struct _RM_PARTITION *v10; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = 0LL;
  v10 = 0LL;
  v6 = RmpSystemQueryPackagePartitions((const unsigned __int16 *)a2, &Handle, 0LL, 0LL);
  v7 = Handle;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v8 = RmpPartitionTableFindOrCreatePartition((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312), Handle, &v10);
    if ( v8 < 0 )
    {
      v5 = v10;
    }
    else
    {
      v8 = 0;
      *a3 = v10;
    }
  }
  if ( (((unsigned __int64)v7 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    RmpSystemCloseHandle(v7);
  if ( v5 )
    RmpPartitionRelease(v5);
  return (unsigned int)v8;
}

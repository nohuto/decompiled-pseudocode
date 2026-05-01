/*
 * XREFs of ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x18003B01C
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023C00 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001F450 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180024940 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

__int64 __fastcall RmpHamQueryActivityHostPartition(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PARTITION **a3)
{
  __int64 v3; // rax
  HANDLE *v5; // rdi
  signed int PackageFullNameFromKey; // ebx
  int PartitionHandlesForPackage; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+28h] [rbp-D8h] BYREF
  struct _RM_PARTITION *v13; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[464]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *((_QWORD *)a2 + 68);
  Handle = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  if ( (v3 & 0xF000000000000000uLL) == 0x2000000000000000LL
    || !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    Handle = (HANDLE)-2LL;
    goto LABEL_4;
  }
  v12 = 464;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a2, v16, &v12);
  if ( PackageFullNameFromKey < 0 )
  {
LABEL_13:
    if ( PackageFullNameFromKey < 0 )
      goto LABEL_6;
    goto LABEL_4;
  }
  PartitionHandlesForPackage = GetPartitionHandlesForPackage(v16, &Handle, &v14, v15);
  if ( PartitionHandlesForPackage < 0 )
  {
    PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
    goto LABEL_13;
  }
LABEL_4:
  PackageFullNameFromKey = RmpPartitionTableFindOrCreatePartition(
                             (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
                             Handle,
                             &v13);
  if ( PackageFullNameFromKey < 0 )
  {
    v5 = (HANDLE *)v13;
  }
  else
  {
    PackageFullNameFromKey = 0;
    *a3 = v13;
  }
LABEL_6:
  if ( (((unsigned __int64)Handle + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(Handle);
  if ( (((unsigned __int64)v14 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v14);
  if ( v5 )
    RmpPartitionRelease(v5);
  return (unsigned int)PackageFullNameFromKey;
}

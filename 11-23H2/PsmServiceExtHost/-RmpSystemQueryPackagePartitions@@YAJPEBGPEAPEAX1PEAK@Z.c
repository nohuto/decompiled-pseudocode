/*
 * XREFs of ?RmpSystemQueryPackagePartitions@@YAJPEBGPEAPEAX1PEAK@Z @ 0x1800513D4
 * Callers:
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031614 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18004FA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049EB4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

__int64 __fastcall RmpSystemQueryPackagePartitions(const unsigned __int16 *a1, void **a2, void **a3, unsigned int *a4)
{
  int v8; // edi
  __int64 v9; // rcx
  signed int PackageFullNameFromKey; // ebx
  int PartitionHandlesForPackage; // ebx
  HANDLE v13; // rax
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  HANDLE v15; // [rsp+28h] [rbp-D8h] BYREF
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v18[464]; // [rsp+40h] [rbp-C0h] BYREF

  Handle = 0LL;
  v15 = 0LL;
  v8 = 0;
  if ( IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v16 = 464;
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a1, v18, &v16);
    if ( PackageFullNameFromKey >= 0 )
    {
      PartitionHandlesForPackage = GetPartitionHandlesForPackage(v18, &Handle, &v15, v17);
      if ( PartitionHandlesForPackage >= 0 )
      {
        PackageFullNameFromKey = 0;
        v8 = v17[0] & 1;
      }
      else
      {
        PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
        if ( PackageFullNameFromKey < 0 )
          goto LABEL_6;
      }
      v9 = (__int64)Handle;
      goto LABEL_14;
    }
LABEL_6:
    v9 = (__int64)Handle;
    goto LABEL_7;
  }
  v9 = -2LL;
  PackageFullNameFromKey = 0;
  Handle = (HANDLE)-2LL;
LABEL_14:
  if ( a2 )
  {
    *a2 = (void *)v9;
    v9 = 0LL;
    Handle = 0LL;
  }
  if ( a3 )
  {
    v13 = v15;
    v15 = 0LL;
    *a3 = v13;
  }
  if ( a4 )
    *a4 = v8;
LABEL_7:
  if ( ((v9 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose((HANDLE)v9);
  if ( (((unsigned __int64)v15 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v15);
  return (unsigned int)PackageFullNameFromKey;
}

/*
 * XREFs of CempPackageFamilyNameFromPsmKey @ 0x180025F60
 * Callers:
 *     ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800073E0 (-HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180024C60 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028940 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002CA0C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180077190 (-HampHostIdStoreInvalidatePackageEntriesCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18008F2AC (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

LONG __fastcall CempPackageFamilyNameFromPsmKey(__int64 a1, __int64 a2)
{
  LONG result; // eax
  __int128 v5; // xmm1
  __int16 v6; // ax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR packageFamilyName[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int128 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-90h]
  __int128 v20; // [rsp+80h] [rbp-80h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  __int16 v23; // [rsp+B0h] [rbp-50h]
  WCHAR packageFullName[232]; // [rsp+C0h] [rbp-40h] BYREF

  memset_0(packageFullName, 0, 0x1CEuLL);
  v13 = 462;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, &v13);
  if ( result >= 0 )
  {
    packageFamilyNameLength[0] = 65;
    v23 = 0;
    *(_OWORD *)packageFamilyName = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
    if ( result )
    {
      if ( result > 0 )
        return (unsigned __int16)result | 0xC0070000;
    }
    else
    {
      v5 = v16;
      v6 = v23;
      *(_OWORD *)a2 = *(_OWORD *)packageFamilyName;
      v7 = v17;
      *(_OWORD *)(a2 + 16) = v5;
      v8 = v18;
      *(_OWORD *)(a2 + 32) = v7;
      v9 = v19;
      *(_OWORD *)(a2 + 48) = v8;
      v10 = v20;
      *(_OWORD *)(a2 + 64) = v9;
      v11 = v21;
      *(_OWORD *)(a2 + 80) = v10;
      v12 = v22;
      *(_OWORD *)(a2 + 96) = v11;
      *(_OWORD *)(a2 + 112) = v12;
      *(_WORD *)(a2 + 128) = v6;
      return 0;
    }
  }
  return result;
}

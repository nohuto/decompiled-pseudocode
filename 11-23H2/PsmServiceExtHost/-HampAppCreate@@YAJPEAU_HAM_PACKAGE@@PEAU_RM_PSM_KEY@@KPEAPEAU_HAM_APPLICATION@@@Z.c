/*
 * XREFs of ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180032DE8
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x1800316C0 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180032F18 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 *     SdbShouldBlockPackageLaunch @ 0x18003369C (SdbShouldBlockPackageLaunch.c)
 *     ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800345A4 (-HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppCreate(
        struct _HAM_PACKAGE *a1,
        struct _RM_PSM_KEY *a2,
        char a3,
        struct _HAM_APPLICATION **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdi
  struct _HAM_APPLICATION *Heap; // rax
  struct _HAM_APPLICATION *v11; // rdi
  int State; // esi
  int TargetPlatformContext; // eax
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+2Ch] [rbp-D4h] BYREF
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  PACKAGE_INFO_REFERENCE packageInfoReference; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR packageFullName[128]; // [rsp+50h] [rbp-B0h] BYREF

  v18 = 256;
  PsmGetPackageFullNameFromKey(a2, packageFullName, &v18);
  v8 = 0;
  packageInfoReference = 0LL;
  v21 = 0LL;
  v17 = 0;
  v9 = 0LL;
  v16 = 0LL;
  if ( !OpenPackageInfoByFullNameForUser(0LL, packageFullName, 0, &packageInfoReference) )
  {
    TargetPlatformContext = GetTargetPlatformContext(packageInfoReference, 0LL, &v21);
    if ( TargetPlatformContext )
    {
      if ( TargetPlatformContext == 1168 )
      {
        v15 = AppXGetOSMaxVersionTested(packageFullName, &v16);
        v9 = v16;
        if ( v15 < 0 )
          v9 = 0LL;
        v16 = v9;
      }
    }
    else
    {
      v17 = 8;
      if ( (unsigned int)GetPackageTargetPlatformProperty(v21, 3LL, &v17, &v16) )
        v16 = 0LL;
      else
        v9 = v16;
    }
    ClosePackageInfo(packageInfoReference);
  }
  if ( (unsigned int)SdbShouldBlockPackageLaunch(packageFullName, v9, &v19, a3 & 1) && v19 )
  {
    return (unsigned int)-1058275320;
  }
  else
  {
    Heap = (struct _HAM_APPLICATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x270uLL);
    v11 = Heap;
    if ( Heap )
    {
      HampAppInitialize(a1, a2, Heap);
      State = HampAppAllocateState(v11);
      if ( State < 0 )
      {
        CemRcObjectDereference(v11);
        return (unsigned int)State;
      }
      else
      {
        *a4 = v11;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}

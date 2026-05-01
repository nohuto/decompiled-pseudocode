/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E370 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003A82C (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008B0C0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x18008B260 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DE8 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E4EC (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18002E520 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800319A0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800850C8 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT@@@Z @ 0x18008AD68 (-RmpPsmAppFamilyEnumerateActivityHostGetNext@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_PSM_APP_FAMILY_AC.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  struct ExecutionModel::ResourceManager *v6; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  struct ExecutionModel::ResourceManager *v10; // rcx
  struct _RM_SERVICE_GLOBALS *v11; // r14
  struct _RM_PSM_APP_FAMILY *v12; // rsi
  struct _RM_PSM_APP_FAMILY *v13; // rax
  struct _RM_ACTIVITY_HOST *Next; // rax
  char *v15; // rax
  __int64 v16; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v17[544]; // [rsp+40h] [rbp-258h] BYREF

  v6 = (struct ExecutionModel::ResourceManager *)a3;
  if ( a3 )
  {
    v8 = (char *)a4 + 16;
    v9 = a3;
    do
    {
      if ( v8[5] )
        *(_DWORD *)v8 = 101;
      v8 += 24;
      --v9;
    }
    while ( v9 );
  }
  if ( RmpActivityHostIsPple(a5) && RmpActivityHostHasPpleResourceSet(a5) )
  {
    v11 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a5 + 6);
    v12 = 0LL;
    if ( RmpPsmAppFamilyIdFromPsmAppInstanceId(
           (struct _RM_ACTIVITY_HOST *)((char *)a5 + 88),
           (struct _RM_PSM_APP_FAMILY_ID *)v17) >= 0 )
    {
      v13 = RmpPsmAppFamilyTableFind(v11, (struct _RM_PSM_APP_FAMILY_ID *)v17);
      if ( v13 )
        v12 = v13;
    }
    v16 = ((unsigned __int64)v12 + 552) & -(__int64)(*((_QWORD *)v12 + 69) != 0LL);
    while ( 1 )
    {
      Next = RmpPsmAppFamilyEnumerateActivityHostGetNext((struct _RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *)&v16);
      if ( !Next )
        break;
      if ( Next != a5 && *((_DWORD *)Next + 156) == 2 )
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
          v10,
          a2,
          (unsigned int)v6,
          a4,
          Next);
    }
    if ( (_DWORD)v6 )
    {
      v15 = (char *)a4 + 16;
      v10 = v6;
      do
      {
        if ( v15[5] && *((_DWORD *)v15 - 4) == 28 )
          *(_DWORD *)v15 = 101;
        v15 += 24;
        v10 = (struct ExecutionModel::ResourceManager *)((char *)v10 - 1);
      }
      while ( v10 );
    }
  }
  ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
    v10,
    a2,
    (unsigned int)v6,
    a4,
    a5);
}

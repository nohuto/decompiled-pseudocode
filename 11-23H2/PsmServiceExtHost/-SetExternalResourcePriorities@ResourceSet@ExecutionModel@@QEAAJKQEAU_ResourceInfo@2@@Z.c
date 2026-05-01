/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18008B0C0
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180084828 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E2D0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        struct _RM_ACTIVITY_HOST **this,
        __int64 a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  struct ExecutionModel::_ResourceInfo *i; // rax
  struct ExecutionModel::ResourceManager *v8; // rcx
  struct _RM_ACTIVITY_HOST *v9; // rcx

  v3 = 0;
  if ( a3 )
  {
    v6 = 0;
    for ( i = a3; *(_DWORD *)i <= 0x31u; i = (struct ExecutionModel::_ResourceInfo *)((char *)i + 24) )
    {
      if ( ++v6 )
      {
        RmpAcquireGlobalLock();
        if ( *((_DWORD *)this + 320) )
        {
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v8, 2u, 1u, a3, this[165]);
          *((_DWORD *)this + *(int *)a3 + 372) = *((_DWORD *)a3 + 4);
          ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(this[3], this[165]);
          v9 = this[3];
          if ( (*((_BYTE *)v9 + 160) & 2) == 0 )
            TpPostWork(*((_QWORD *)v9 + 19));
        }
        else
        {
          v3 = -2147220218;
        }
        RmpReleaseGlobalLock();
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}

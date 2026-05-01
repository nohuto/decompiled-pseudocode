/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18002EDC8
 * Callers:
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18004FBF0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180084828 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002EEB8 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  int ObjectByHandle; // eax
  unsigned int v5; // ebx
  struct _RM_OBJECT_HEADER *v6; // rdi
  struct ExecutionModel::ResourceSet *v7; // rcx
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RM_OBJECT_HEADER *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  ObjectByHandle = RmpObjectTableFindObjectByHandle(a1, &v9, &v10);
  v5 = 0;
  if ( ObjectByHandle < 0 )
  {
    return (unsigned int)ObjectByHandle;
  }
  else
  {
    v6 = v10;
    v7 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)v10 + 6);
    *a3 = v7;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v6 )
      RmpObjectRelease(v6);
  }
  return v5;
}

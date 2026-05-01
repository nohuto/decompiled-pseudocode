/*
 * XREFs of ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18002889C
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002AC6C (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180086584 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180024AC0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpResourceSetTableFindEmSetById(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 a2,
        struct ExecutionModel::ResourceSet **a3)
{
  int ObjectByHandleWithLock; // esi
  unsigned int v6; // ebx
  char *v7; // rdi
  struct ExecutionModel::ResourceSet *v8; // rcx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  RtlAcquireSRWLockShared((char *)a1 + 16);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(a1, &v10, (struct _RM_OBJECT_HEADER **)&P);
  RtlReleaseSRWLockShared((char *)a1 + 16);
  v6 = 0;
  if ( ObjectByHandleWithLock < 0 )
  {
    return (unsigned int)ObjectByHandleWithLock;
  }
  else
  {
    v7 = (char *)P;
    v8 = (struct ExecutionModel::ResourceSet *)*((_QWORD *)P + 6);
    *a3 = v8;
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v7 )
      RmpObjectRelease(v7);
  }
  return v6;
}

/*
 * XREFs of ?RmpActivityHostApplyResourceSet@@YAXPEAVResourceSet@ExecutionModel@@@Z @ 0x180029AB8
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180029AE8 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180029C4C (-RmpActivityHostRemoveResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGOR.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180029CE4 (-RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@.c)
 */

void __fastcall RmpActivityHostApplyResourceSet(struct ExecutionModel::ResourceSet *a1)
{
  RmpActivityHostRemoveResourceSet(a1, 0LL);
  RmpActivityHostAddResourceSet(a1, 1LL);
  *((_BYTE *)a1 + 12) = 1;
}

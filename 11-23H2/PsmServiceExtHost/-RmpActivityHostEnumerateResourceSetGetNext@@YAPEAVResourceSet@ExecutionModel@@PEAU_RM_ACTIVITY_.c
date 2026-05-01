/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006F1C
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DE8 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800850C8 (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008C220 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18002CEE0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a1)
{
  __int64 v1; // rbx
  __int64 First; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx

  v1 = *(_QWORD *)a1;
  First = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(v1 + 1296);
    v5 = *(int *)(v1 + 1328);
    v6 = *(_QWORD *)(v1 + 1320);
    if ( v4 != v6 + 8 * (v5 + 2 * (v5 + 71)) )
      First = v4 - 1296;
    if ( !First )
      First = RmpActivityHostEnumerateResourceSetGetFirst(v6, *((unsigned int *)a1 + 2), (unsigned int)(v5 + 1));
  }
  *(_QWORD *)a1 = First;
  return (struct ExecutionModel::ResourceSet *)v1;
}

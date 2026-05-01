/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180029F54
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029ADC (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180029BC8 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029CF0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpTracingControlCallback @ 0x180047450 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x1800517E0 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008716C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008F954 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180090680 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostEnumerateResourceSetGetNext(
        struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rbx
  int v6; // edi
  signed int v7; // edx
  struct ExecutionModel::ResourceSet *result; // rax
  _QWORD *v9; // r11

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(v1 + 1296);
    v4 = *(int *)(v1 + 1328);
    v5 = *(_QWORD *)(v1 + 1320);
    if ( v3 != v5 + 24 * (v4 + 47) )
      v2 = v3 - 1296;
    if ( !v2 )
    {
      v7 = v4 + 1;
      if ( (int)v4 + 1 < 2 )
      {
        v9 = (_QWORD *)(v5 + 8 * (3LL * v7 + 141));
        while ( 1 )
        {
          v6 = *((_DWORD *)a1 + 2);
          if ( _bittest(&v6, v7) )
          {
            v2 = 0LL;
            if ( (_QWORD *)*v9 != v9 )
              v2 = *v9 - 1296LL;
            if ( v2 )
              break;
          }
          ++v7;
          v9 += 3;
          if ( v7 >= 2 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v2 = 0LL;
      }
    }
  }
  result = *(struct ExecutionModel::ResourceSet **)a1;
  *(_QWORD *)a1 = v2;
  return result;
}

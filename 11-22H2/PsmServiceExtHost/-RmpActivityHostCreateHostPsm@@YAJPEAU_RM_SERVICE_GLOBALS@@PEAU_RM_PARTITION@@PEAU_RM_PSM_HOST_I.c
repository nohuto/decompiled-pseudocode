/*
 * XREFs of ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180050158
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800309B0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x1800110C0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800118B8 (-RmpPsmAppFamilyInitialize@@YAXPEAU_RM_PSM_APP_FAMILY_ID@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800123C0 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DCC4 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DFC8 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18002E550 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800319D0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003537C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800383E4 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18004FF60 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18008B0F4 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 */

__int64 __fastcall RmpActivityHostCreateHostPsm(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        struct _HAM_APPLICATION *a4,
        char a5,
        struct _RM_ACTIVITY_HOST **a6)
{
  int v10; // esi
  struct _RM_PSM_APP_FAMILY *v11; // rdi
  struct _RM_PSM_APP_FAMILY *Heap; // rax
  int v13; // eax
  struct _RM_ACTIVITY_HOST *v14; // rbx
  struct _RM_PSM_APP_FAMILY *v15; // rcx
  struct _RM_ACTIVITY_HOST *v17; // [rsp+30h] [rbp-278h] BYREF
  _BYTE v18[544]; // [rsp+40h] [rbp-268h] BYREF

  v17 = 0LL;
  v10 = RmpPsmAppFamilyIdFromPsmAppInstanceId(a3, (struct _RM_PSM_APP_FAMILY_ID *)v18);
  if ( v10 >= 0 )
  {
    v11 = RmpPsmAppFamilyTableFind(a1, (struct _RM_PSM_APP_FAMILY_ID *)v18);
    if ( !v11 )
    {
      Heap = (struct _RM_PSM_APP_FAMILY *)HampAllocateHeap(0x248uLL);
      v11 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      RmpPsmAppFamilyInitialize((struct _RM_PSM_APP_FAMILY_ID *)v18, Heap);
      RmpPsmAppFamilyTableAdd(a1, v11);
    }
    v13 = RmpActivityHostAllocateAndInitialize(a1, a2, a3, a4, a5, &v17);
    v14 = v17;
    v10 = v13;
    if ( v13 >= 0 )
    {
      v15 = v11;
      v11 = 0LL;
      v10 = RmpPsmAppFamilyAddActivityHost(v15, v17);
      if ( v10 >= 0 )
      {
        RmpActivityHostCompleteInitialization(v14);
        *a6 = v14;
        v14 = 0LL;
        v10 = 0;
      }
    }
    if ( v14 )
    {
      RmpPsmAppFamilyTableTryRemoveActivityHost(v14);
      RmpActivityHostCleanupCommonState(v14);
      HampFreeHeap(v14);
    }
    if ( v11 )
      RmpPsmAppFamilyTableCheckDelete(a1, v11);
  }
  return (unsigned int)v10;
}

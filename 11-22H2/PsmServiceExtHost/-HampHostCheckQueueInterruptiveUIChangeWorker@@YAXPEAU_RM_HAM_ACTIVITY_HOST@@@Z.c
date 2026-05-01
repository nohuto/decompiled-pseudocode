/*
 * XREFs of ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F014
 * Callers:
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007BE18 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180006F8C (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z @ 0x18007F504 (-HampAppCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_HAM_APPLICATION@@K@Z.c)
 */

void __fastcall HampHostCheckQueueInterruptiveUIChangeWorker(struct _HAM_APPLICATION **a1)
{
  __int64 v1; // rdx
  unsigned int HasExternalResourceAccess; // eax

  v1 = 624LL;
  if ( a1 )
    v1 = (__int64)(a1 + 70);
  if ( *(_DWORD *)v1 == 2 )
  {
    HasExternalResourceAccess = HampHostHasExternalResourceAccess((__int64)a1, 0x1Bu);
    HampAppCheckQueueInterruptiveUIChangeWorker(a1[99], HasExternalResourceAccess);
  }
}

/*
 * XREFs of ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180014880
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800147B4 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x1800148D4 (-HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014980 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 */

int __fastcall HampActAllocateState(struct _HAM_ACTIVITY *a1, unsigned int a2)
{
  int result; // eax

  result = HampRmPopulateDefaultProperties(
             (struct _HAM_ACTIVITY *)((char *)a1 + 112),
             (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 440),
             a2);
  if ( result >= 0 )
  {
    result = HampRmContextCreate(a1, (void **)a1 + 11);
    if ( result >= 0 )
      return 0;
  }
  return result;
}

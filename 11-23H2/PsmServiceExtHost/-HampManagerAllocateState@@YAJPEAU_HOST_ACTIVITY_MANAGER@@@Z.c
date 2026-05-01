/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044AB8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800448B8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180044B34 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800456D8 (-HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSystemPowerIsStandbyCapable@@YAKXZ @ 0x18005135C (-HampSystemPowerIsStandbyCapable@@YAKXZ.c)
 */

__int64 __fastcall HampManagerAllocateState(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 result; // rax

  if ( HampSystemPowerIsStandbyCapable() )
  {
    result = TpAllocPool((char *)a1 + 968, 0LL);
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)a1 + 123) = *((_QWORD *)a1 + 121);
  }
  result = HampPdcAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 560));
  if ( (int)result >= 0 )
  {
    result = HampWakeManagerAllocateState((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 688));
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}

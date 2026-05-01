/*
 * XREFs of ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044B48
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044948 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180044BC4 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180045768 (-HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampSystemPowerIsStandbyCapable@@YAKXZ @ 0x18005155C (-HampSystemPowerIsStandbyCapable@@YAKXZ.c)
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

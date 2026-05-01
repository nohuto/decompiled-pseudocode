/*
 * XREFs of ?AllocateState@ModernResourceEnforcer@@QEAAJPEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x18004F388
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044948 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceEnforcer::AllocateState(
        ModernResourceEnforcer *this,
        struct _TP_CALLBACK_ENVIRON_V3 *a2)
{
  __int64 result; // rax

  result = TpAllocWork((char *)this + 264, ModernResourceEnforcer::NotificationWorkCallback, this, a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800457A4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800448B8 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpOfferLazyDecommitContextAllocateState@@YAJPEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x180051230 (-RmpOfferLazyDecommitContextAllocateState@@YAJPEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@PEAU_TP_CALLB.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  struct _TP_CALLBACK_ENVIRON_V3 *v2; // rsi
  __int64 result; // rax

  v2 = (struct _TP_CALLBACK_ENVIRON_V3 *)((char *)a2 + 3224);
  result = TpAllocTimer((char *)a2 + 128, RmpPowerBoostWatchdogCallback, a2, (char *)a2 + 3224);
  if ( (int)result >= 0 )
  {
    result = TpAllocTimer((char *)a2 + 160, RmpPowerBoostTimedBoostCallback, a2, v2);
    if ( (int)result >= 0 )
    {
      result = TpAllocTimer((char *)a2 + 192, RmpQoSWatchdogCallback, (char *)a2 + 176, v2);
      if ( (int)result >= 0 )
      {
        result = TpAllocTimer((char *)a2 + 48, RmpGpuMonitorTimerCallback, a2, v2);
        if ( (int)result >= 0 )
        {
          result = RmpOfferLazyDecommitContextAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 216), v2);
          if ( (int)result >= 0 )
          {
            if ( a1 )
            {
              *((_QWORD *)a2 + 5) = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}

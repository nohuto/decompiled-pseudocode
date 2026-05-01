/*
 * XREFs of ?RmpOfferLazyDecommitContextAllocateState@@YAJPEAU_RM_OFFER_LAZY_DECOMMIT_CONTEXT@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x180051430
 * Callers:
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180045834 (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpOfferLazyDecommitContextAllocateState(
        struct _RM_OFFER_LAZY_DECOMMIT_CONTEXT *a1,
        struct _TP_CALLBACK_ENVIRON_V3 *a2)
{
  __int64 result; // rax

  result = TpAllocWork(a1, RmpOfferLazyDecommitWorkerCallback, a1, a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

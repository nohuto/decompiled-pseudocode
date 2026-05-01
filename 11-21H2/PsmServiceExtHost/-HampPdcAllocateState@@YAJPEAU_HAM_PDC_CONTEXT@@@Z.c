/*
 * XREFs of ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004AA08
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampPdcAllocateState(struct _HAM_PDC_CONTEXT *a1)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v3[0] = 1LL;
  v3[2] = 0LL;
  v3[1] = &HampActPdcActivationCallback;
  result = Pdcv2ActivationClientRegister(100LL, v3, (char *)a1 + 24);
  if ( (int)result >= 0 )
  {
    result = TpAllocWork((char *)a1 + 72, HampPdcPlmWorker, a1, 0LL);
    if ( (int)result >= 0 )
    {
      result = TpAllocWork((char *)a1 + 80, HampPdcDamEnterWorker, a1, 0LL);
      if ( (int)result >= 0 )
      {
        result = TpAllocWork((char *)a1 + 88, HampPdcDamExitWorker, a1, 0LL);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}

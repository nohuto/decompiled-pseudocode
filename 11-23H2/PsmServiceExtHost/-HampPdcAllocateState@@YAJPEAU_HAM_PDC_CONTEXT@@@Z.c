/*
 * XREFs of ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800456D8
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044AB8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
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
    result = TpAllocWork((char *)a1 + 72, HampPdcPlmWorker, a1, (char *)a1 + 416);
    if ( (int)result >= 0 )
    {
      result = TpAllocWork((char *)a1 + 80, HampPdcDamEnterWorker, a1, (char *)a1 + 416);
      if ( (int)result >= 0 )
      {
        result = TpAllocWork((char *)a1 + 88, HampPdcDamExitWorker, a1, (char *)a1 + 416);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}

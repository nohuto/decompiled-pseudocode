/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_209d4bad6fea09852d6c87e7361f85eb_@@CAXPEAX@Z @ 0x1C014A070
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_(char *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    if ( a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        a1);
  }
}

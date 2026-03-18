/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1C0071540
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0071424 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C019399C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v1; // rdx
  void *v3; // rdx
  void *v4; // rdx

  v1 = *(_QWORD *)(a1 + 384);
  if ( v1 )
  {
    v3 = *(void **)(v1 + 72);
    if ( v3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    v4 = *(void **)(a1 + 384);
    if ( v4 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *(_QWORD *)(a1 + 384) = 0LL;
  }
}

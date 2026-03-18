/*
 * XREFs of IoRegisterDriverReinitialization @ 0x14084FA70
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x1405E0B40 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x1403A8F3C (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *Pool2; // rax

  ObfReferenceObject(DriverObject);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1767010121LL);
  if ( Pool2 )
  {
    DriverObject->Flags |= 8u;
    Pool2[2] = DriverObject;
    Pool2[3] = DriverReinitializationRoutine;
    Pool2[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}

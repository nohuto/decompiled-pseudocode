/*
 * XREFs of IoRegisterDriverReinitialization @ 0x140855570
 * Callers:
 *     sub_140610690 @ 0x140610690 (sub_140610690.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403D7D9C @ 0x1403D7D9C (sub_1403D7D9C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
    sub_1403D7D9C((__int64)&qword_140C46F80, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}

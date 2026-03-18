/*
 * XREFs of IopPerfCallDriver @ 0x14055969C
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1403B51A0 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140A80ACC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140A80B3C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x140559AF8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140559BCC (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(struct _DEVICE_OBJECT *Object, IRP *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD *IrpExtension; // rcx
  unsigned __int32 v8; // ebx
  unsigned int v9; // ebp

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes((__int64)a2, 1LL, a3) )
  {
    IrpExtension = IopAllocateIrpExtension((__int64)a2, 1, v5, v6);
    if ( IrpExtension )
      *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v8 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(Object->DriverObject, a2, v8);
    v9 = IopfCallDriver(Object, a2);
    IopPerfLogCallReturnEvent(a2, v8);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver(Object, a2);
  }
  return v9;
}

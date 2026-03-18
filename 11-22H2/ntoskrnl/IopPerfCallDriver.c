/*
 * XREFs of IopPerfCallDriver @ 0x14045F22A
 * Callers:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14028D040 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140AC21D0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140AC296C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC29B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopfCallDriver @ 0x14028CEA4 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028F7F8 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopAllocateIrpExtension @ 0x1402906EC (IopAllocateIrpExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     IopPerfLogCallEvent @ 0x1405592B8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x14055938C (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 1);
    if ( IrpExtension )
      *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v5);
    v6 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v6;
}

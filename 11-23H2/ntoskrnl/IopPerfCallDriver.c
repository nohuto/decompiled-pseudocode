/*
 * XREFs of IopPerfCallDriver @ 0x14045F88A
 * Callers:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14028D160 (IofCallDriverSpecifyReturn.c)
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140AC196C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopfCallDriver @ 0x14028CFC4 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14028F918 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopAllocateIrpExtension @ 0x14029080C (IopAllocateIrpExtension.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     IopPerfLogCallEvent @ 0x140559218 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405592EC (IopPerfLogCallReturnEvent.c)
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

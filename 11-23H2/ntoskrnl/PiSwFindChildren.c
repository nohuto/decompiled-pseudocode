/*
 * XREFs of PiSwFindChildren @ 0x14079833C
 * Callers:
 *     PipEnumerateCompleted @ 0x140795400 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1407E0E48 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x140869CC8 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140798364 (PiSwFindBusRelations.c)
 */

__int64 PiSwFindChildren()
{
  __int64 BusRelations; // rcx
  __int64 result; // rax

  BusRelations = PiSwFindBusRelations();
  result = 0LL;
  if ( BusRelations )
    return BusRelations + 16;
  return result;
}

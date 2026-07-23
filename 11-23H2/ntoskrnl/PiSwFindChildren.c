/*
 * XREFs of PiSwFindChildren @ 0x14079852C
 * Callers:
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1407E1118 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x140869F08 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140798554 (PiSwFindBusRelations.c)
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

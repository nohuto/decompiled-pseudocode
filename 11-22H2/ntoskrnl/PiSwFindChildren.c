/*
 * XREFs of PiSwFindChildren @ 0x14079884C
 * Callers:
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PiSwProcessParentStartIrp @ 0x1407E13C8 (PiSwProcessParentStartIrp.c)
 *     PiSwStopDestroy @ 0x14086A198 (PiSwStopDestroy.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140798874 (PiSwFindBusRelations.c)
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

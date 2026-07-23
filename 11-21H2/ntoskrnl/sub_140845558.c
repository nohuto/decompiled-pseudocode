/*
 * XREFs of sub_140845558 @ 0x140845558
 * Callers:
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

NTSTATUS sub_140845558()
{
  NTSTATUS result; // eax

  if ( byte_140C5AE16 )
    return -1073740008;
  result = EtwRegister(&stru_1400128E8, (PETWENABLECALLBACK)sub_14081CBF0, &CallbackContext, &CallbackContext);
  if ( result >= 0 )
    byte_140C5AE16 = 1;
  return result;
}

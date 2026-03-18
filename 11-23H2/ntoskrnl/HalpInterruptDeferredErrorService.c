/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x14051C230
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x14050573C (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}

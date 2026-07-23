/*
 * XREFs of HalpInterruptDeferredErrorService @ 0x14051C780
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciHandler @ 0x140505C8C (HalpCmciHandler.c)
 */

char HalpInterruptDeferredErrorService()
{
  HalpCmciHandler();
  return 1;
}

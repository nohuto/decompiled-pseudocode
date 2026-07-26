/*
 * XREFs of NdisCurrentGroupAndProcessor @ 0x1C00409C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PROCESSOR_NUMBER NdisCurrentGroupAndProcessor(void)
{
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  return ProcNumber;
}

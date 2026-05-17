/*
 * XREFs of TppTerminateProcess @ 0x180125E6C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x1801267F8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180126890 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}

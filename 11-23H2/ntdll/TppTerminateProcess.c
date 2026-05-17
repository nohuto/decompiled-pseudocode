/*
 * XREFs of TppTerminateProcess @ 0x18012731C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180127CA8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180127D40 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}

/*
 * XREFs of NtUnloadDriver @ 0x140951AE0
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140857938 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(UNICODE_STRING *a1)
{
  return IopUnloadDriver(a1, 0);
}

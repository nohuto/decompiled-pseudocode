/*
 * XREFs of NtUnloadDriver @ 0x14093FE20
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140856DC0 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(UNICODE_STRING *a1)
{
  return IopUnloadDriver(a1, 0);
}

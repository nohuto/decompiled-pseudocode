/*
 * XREFs of ObIsKernelHandle @ 0x14025E6E0
 * Callers:
 *     sub_1406EC048 @ 0x1406EC048 (sub_1406EC048.c)
 * Callees:
 *     sub_1402F3558 @ 0x1402F3558 (sub_1402F3558.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return sub_1402F3558(Handle, 0LL);
}

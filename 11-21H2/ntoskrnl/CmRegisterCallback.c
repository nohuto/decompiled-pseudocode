/*
 * XREFs of CmRegisterCallback @ 0x1408651C0
 * Callers:
 *     sub_140605F20 @ 0x140605F20 (sub_140605F20.c)
 * Callees:
 *     sub_140690198 @ 0x140690198 (sub_140690198.c)
 */

NTSTATUS __stdcall CmRegisterCallback(PEX_CALLBACK_FUNCTION Function, PVOID Context, PLARGE_INTEGER Cookie)
{
  return sub_140690198((__int64)Function, (__int64)Context, (const void **)&stru_140D00A00, 1, 0, Cookie);
}

/*
 * XREFs of CmRegisterCallbackEx @ 0x14090FD10
 * Callers:
 *     sub_140605DB0 @ 0x140605DB0 (sub_140605DB0.c)
 *     sub_1409E62D0 @ 0x1409E62D0 (sub_1409E62D0.c)
 * Callees:
 *     sub_140690198 @ 0x140690198 (sub_140690198.c)
 */

NTSTATUS __stdcall CmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  if ( !Driver )
    return -1073741583;
  if ( Reserved )
    return -1073741580;
  return sub_140690198((__int64)Function, (__int64)Context, (const void **)Altitude, 0, 0, Cookie);
}

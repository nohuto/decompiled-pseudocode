/*
 * XREFs of SeLocateProcessImageName @ 0x1406D0AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407B66E0 @ 0x1407B66E0 (sub_1407B66E0.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return sub_1407B66E0(Process, pImageFileName);
}

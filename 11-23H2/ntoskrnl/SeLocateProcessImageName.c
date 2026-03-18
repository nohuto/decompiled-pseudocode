/*
 * XREFs of SeLocateProcessImageName @ 0x1407D87C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140742774 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx((__int64)Process);
}

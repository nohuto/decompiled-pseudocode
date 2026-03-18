/*
 * XREFs of ZwRecoverResourceManager @ 0x14041E5E0
 * Callers:
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1);
}

/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x14041D7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(ThreadHandle, v1);
}

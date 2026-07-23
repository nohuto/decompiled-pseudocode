/*
 * XREFs of ZwStopProfile @ 0x14041EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwStopProfile(HANDLE ProfileHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(ProfileHandle, v1);
}

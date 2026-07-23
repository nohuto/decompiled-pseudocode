/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14041B6F0
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1405F25C0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2E5C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D302C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080645C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD48C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}

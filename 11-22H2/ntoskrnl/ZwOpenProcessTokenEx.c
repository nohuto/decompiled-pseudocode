/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14041ACA0
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1405F20E0 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D310C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D32DC (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD33C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
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

/*
 * XREFs of ZwOpenProcessTokenEx @ 0x14041B360
 * Callers:
 *     DifZwOpenProcessTokenExWrapper @ 0x1405F2050 (DifZwOpenProcessTokenExWrapper.c)
 *     RtlAcquirePrivilege @ 0x1407D2B8C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407D2D5C (RtlImpersonateSelfEx.c)
 *     BiAdjustPrivilege @ 0x14080618C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD28C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess);
}

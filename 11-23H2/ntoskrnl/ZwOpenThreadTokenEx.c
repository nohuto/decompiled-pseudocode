/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14041B340
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1405F27C0 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpOpenThreadToken @ 0x1407D2E90 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14080618C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD28C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A3BC (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, *(_QWORD *)&DesiredAccess);
}

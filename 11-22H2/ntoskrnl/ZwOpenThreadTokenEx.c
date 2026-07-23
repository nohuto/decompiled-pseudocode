/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14041AC80
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1405F2850 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpOpenThreadToken @ 0x1407D3410 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14080870C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD33C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A42C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}

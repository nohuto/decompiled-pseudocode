/*
 * XREFs of ZwOpenThreadTokenEx @ 0x14041B6D0
 * Callers:
 *     DifZwOpenThreadTokenExWrapper @ 0x1405F2D30 (DifZwOpenThreadTokenExWrapper.c)
 *     RtlpOpenThreadToken @ 0x1407D3160 (RtlpOpenThreadToken.c)
 *     BiAdjustPrivilege @ 0x14080645C (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x1409BD48C (RtlpIsAppContainer.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6A66C (_SysCtxRegOpenCurrentUserKey.c)
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

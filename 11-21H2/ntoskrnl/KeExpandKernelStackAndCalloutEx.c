/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0
 * Callers:
 *     sub_1406B6278 @ 0x1406B6278 (sub_1406B6278.c)
 *     sub_14093F428 @ 0x14093F428 (sub_14093F428.c)
 *     sub_140A9DFBC @ 0x140A9DFBC (sub_140A9DFBC.c)
 * Callees:
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return ntoskrnl_7((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}

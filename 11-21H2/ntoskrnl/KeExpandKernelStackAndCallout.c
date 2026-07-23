/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14025D2A0
 * Callers:
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140AD6320 @ 0x140AD6320 (sub_140AD6320.c)
 *     sub_140AD6B90 @ 0x140AD6B90 (sub_140AD6B90.c)
 * Callees:
 *     ntoskrnl_7 @ 0x1402AA8D0 (ntoskrnl_7.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return ntoskrnl_7((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}

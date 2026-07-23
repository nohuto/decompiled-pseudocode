/*
 * XREFs of sub_1405FD830 @ 0x1405FD830
 * Callers:
 *     sub_1405F8DD0 @ 0x1405F8DD0 (sub_1405F8DD0.c)
 *     sub_1405FA12C @ 0x1405FA12C (sub_1405FA12C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall sub_1405FD830(__int64 a1)
{
  return KeWaitForSingleObject((PVOID)(a1 + 6176), WrExecutive, 0, 0, 0LL);
}

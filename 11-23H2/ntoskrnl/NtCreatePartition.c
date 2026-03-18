/*
 * XREFs of NtCreatePartition @ 0x1409B64A0
 * Callers:
 *     <none>
 * Callees:
 *     PsCreatePartition @ 0x140858F1C (PsCreatePartition.c)
 */

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, int a3, int a4)
{
  return PsCreatePartition(a1, a2, a3, a4, KeGetCurrentThread()->PreviousMode, 0);
}

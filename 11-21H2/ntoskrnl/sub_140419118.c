/*
 * XREFs of sub_140419118 @ 0x140419118
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 sub_140419118()
{
  return *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1496LL);
}

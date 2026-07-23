/*
 * XREFs of sub_14056C00C @ 0x14056C00C
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x14056B210 (KeQueryHeteroCpuPolicyThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 */

__int64 __fastcall sub_14056C00C(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  sub_140574FA4(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}

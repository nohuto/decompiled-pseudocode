/*
 * XREFs of sub_140A89D58 @ 0x140A89D58
 * Callers:
 *     sub_1405FDEC0 @ 0x1405FDEC0 (sub_1405FDEC0.c)
 *     sub_1405FEBA0 @ 0x1405FEBA0 (sub_1405FEBA0.c)
 *     MmIsDriverSuspectForVerifier @ 0x140A816C0 (MmIsDriverSuspectForVerifier.c)
 *     sub_140A898F0 @ 0x140A898F0 (sub_140A898F0.c)
 *     sub_140A89AB0 @ 0x140A89AB0 (sub_140A89AB0.c)
 *     sub_140A89C30 @ 0x140A89C30 (sub_140A89C30.c)
 *     sub_140A89D94 @ 0x140A89D94 (sub_140A89D94.c)
 *     sub_140A89FE0 @ 0x140A89FE0 (sub_140A89FE0.c)
 *     sub_140A932F4 @ 0x140A932F4 (sub_140A932F4.c)
 *     sub_140A93398 @ 0x140A93398 (sub_140A93398.c)
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 *     sub_140A9A640 @ 0x140A9A640 (sub_140A9A640.c)
 *     sub_140A9A8F8 @ 0x140A9A8F8 (sub_140A9A8F8.c)
 *     sub_140A9AC40 @ 0x140A9AC40 (sub_140A9AC40.c)
 *     sub_140A9ACE0 @ 0x140A9ACE0 (sub_140A9ACE0.c)
 *     sub_140A9C668 @ 0x140A9C668 (sub_140A9C668.c)
 *     sub_140A9C820 @ 0x140A9C820 (sub_140A9C820.c)
 *     sub_140A9C958 @ 0x140A9C958 (sub_140A9C958.c)
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53B88 @ 0x140B53B88 (sub_140B53B88.c)
 *     sub_140B53D38 @ 0x140B53D38 (sub_140B53D38.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *sub_140A89D58()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&stru_140C1AD60, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  qword_140C1AD40 = (__int64)result;
  return result;
}

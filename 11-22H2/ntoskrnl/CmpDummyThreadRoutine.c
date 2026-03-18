/*
 * XREFs of CmpDummyThreadRoutine @ 0x140865B50
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn CmpDummyThreadRoutine()
{
  NTSTATUS v0; // eax

  v0 = KeWaitForSingleObject(&CmpDummyThreadEvent, Executive, 0, 0, 0LL);
  KeBugCheckEx(0x51u, 0x23uLL, v0, 0LL, 0LL);
}

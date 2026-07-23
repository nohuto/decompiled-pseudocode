/*
 * XREFs of sub_140864AC0 @ 0x140864AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __noreturn sub_140864AC0()
{
  NTSTATUS v0; // eax

  v0 = KeWaitForSingleObject(&stru_140C490C0, Executive, 0, 0, 0LL);
  KeBugCheckEx(0x51u, 0x23uLL, v0, 0LL, 0LL);
}

/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x1405A53B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}

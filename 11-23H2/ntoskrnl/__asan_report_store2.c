/*
 * XREFs of __asan_report_store2 @ 0x140566520
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn _asan_report_store2(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, 2uLL, retaddr, 0x180uLL);
}

/*
 * XREFs of __asan_report_store_n @ 0x1405665B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn _asan_report_store_n(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, BugCheckParameter2, retaddr, 0x180uLL);
}

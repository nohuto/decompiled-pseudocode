/*
 * XREFs of __asan_report_load2 @ 0x140566AC0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn _asan_report_load2(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, 2uLL, retaddr, 0x80uLL);
}

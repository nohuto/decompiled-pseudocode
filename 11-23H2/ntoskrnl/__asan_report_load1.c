/*
 * XREFs of __asan_report_load1 @ 0x1405663A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn _asan_report_load1(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KeBugCheckEx(0x1F2u, BugCheckParameter1, 1uLL, retaddr, 0x80uLL);
}
